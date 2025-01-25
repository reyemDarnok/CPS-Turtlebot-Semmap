import datetime
import logging
import math
from argparse import ArgumentParser
from datetime import datetime
from enum import Enum, auto
from itertools import product
from pathlib import Path
from typing import Tuple, Optional

import numpy as np

from .position_history import Position
from .map_helper import AreaMap, free_threshold, obstruction_threshold, AreaNode
from .priority_queue import PriorityQueue
import rclpy
import sys
from rclpy.node import Node
from semmap_interfaces.msg import EmergencyStop
from semmap_interfaces.srv import PositionHistory
from geometry_msgs.msg import Twist
from nav_msgs.msg import OccupancyGrid

from .emergency_stop import Causes



class AstarNode:
    def __init__(self, node, area_map: 'AreaMap'):
        self.x = node.x_pos
        self.y = node.y_pos
        self.predecessor: Optional[AstarNode] = None
        self.neighbors = node.neighbors
        self.parent_map = area_map
        self.obstructed = node.obstructed


class AstarMap:
    def __init__(self, area_map, pos, target):
        self.target_node = target
        self.priority_queue = PriorityQueue()
        for node in area_map.all_nodes:
            astar_node = AstarNode(node, area_map)
            if pos.x - 1 < astar_node.x < pos.x and pos.y - 1 < astar_node.y < pos.y:
                self.priority_queue.put((0, astar_node))
            elif not astar_node.obstructed:
                self.priority_queue.put((float('inf'), astar_node))

def _score_node(node, path_history, time):
    score = 0
    e_factor = 0.98851 # halflife of 1 minute (x^60 = 1/2)
    for position in path_history:
        distance = (position.x_pos - node.x_pos) ** 2 + (position.y_pos - node.y_pos) ** 2
        time_delta = time - position.timestamp
        score += distance * (e_factor ** time_delta)
    return score


def stop_twist():
    twist = Twist()
    twist.linear.x_pos = 0.0
    twist.linear.y_pos = 0.0
    twist.linear.z = 0.0
    twist.angular.x_pos = 0.0
    twist.angular.y_pos = 0.0
    twist.angular.z = 0.0
    return twist


def move_twist():
    twist = Twist()
    twist.linear.x_pos = 0.1
    twist.linear.y_pos = 0.0
    twist.linear.z = 0.0
    twist.angular.x_pos = 0.0
    twist.angular.y_pos = 0.0
    twist.angular.z = 0.0
    return twist


def spin_twist():
    twist = Twist()
    twist.linear.x_pos = 0.0
    twist.linear.y_pos = 0.0
    twist.linear.z = 0.0
    twist.angular.x_pos = 0.0
    twist.angular.y_pos = 0.0
    twist.angular.z = 0.1
    return twist


class ImpossibleRouteException(Exception):
    pass


class PathfindingNode(Node):
    def __init__(self) -> None:
        super().__init__("PathfindingNode")
        self.task_list = [self.explore]
        self.e_stop_mode = False
        self.map = AreaMap(0,0,[])
        self.main_loop_timer = self.create_timer(0.2, self.navigate)
        self.command_movement = self.create_publisher(Twist, "/cmd_vel", 10)
        self._full_turn_rate = self.create_rate(1, self.get_clock())
        self.positions_client = self.create_client(PositionHistory, "/position")
        self.create_subscription(OccupancyGrid, "/map", self.map_callback, 10)
        self.get_logger().info("Pathfinding node initialized")

    def map_callback(self, msg):
        self.map = AreaMap.from_msg(msg)

    def navigate(self):
        if not self.e_stop_mode:
            self.task_list[-1]() # execute the most recent task

    def emergency_stop(self, message):
        self.stop()
        self.e_stop_mode = True
        if message.solvable_by_backup:
            self.backup() # move backwards
            self.e_stop_mode = False
        elif message.cause == Causes.ALL_CLEAR:
            self.task_list = [task for task in self.task_list if task is not self.stop]
            self.e_stop_mode = False
        else:
            self.task_list.append(self.stop)


    def backup(self):
        logging.info("Backing turtlebot up")
        twist = spin_twist()
        self.command_movement.publish(twist)
        self._full_turn_rate.sleep()
        twist = move_twist()
        self.command_movement.publish(twist)
        self._full_turn_rate.sleep()
        twist = stop_twist()
        self.command_movement.publish(twist)
        self.get_logger().info("Finished backing up turtlebot")
        # TODO make nice

    def get_current_position(self)-> Position:
        result = self._get_position_history()
        return Position(result.x[-1], result.y[-1], result.timestamp[-1])

    def create_absolute_movement_task(self, target: AreaNode):
        def movement_task():
            current_pos = self.get_current_position()
            astar_map = AstarMap(self.map, current_pos, target)
            astar_map.priority_queue = PriorityQueue()
            while not len(astar_map.priority_queue) == 0:
                prio, node = astar_map.priority_queue.pop()
                if node == target:
                    break
                for distance, neighbor in node.neighbors:
                    n_prio = prio + distance
                    if n_prio < prio:
                        neighbor.predecessor = node
                        astar_map.priority_queue.update_elem(distance, (n_prio, neighbor))
            else:
                raise ImpossibleRouteException()
            start_node = None
            current_node = astar_map.target_node
            while current_node.predecessor is not None:
                start_node = current_node
            if self.is_aligned(start_node):
                twist = move_twist()
                self.command_movement.publish(twist)
                self.get_logger().info("Moving to next node")
            else:
                twist = spin_twist()
                self.command_movement.publish(twist)
                self.get_logger().info("Spinning to align to next node")
        return movement_task

    def is_aligned(self, node: AreaNode) -> bool:
        result = self._get_position_history()
        current_vector = (result.x[-1] - result.x[-2], result.y[-1] - result.y[-2])
        current_vector = unit_vector(current_vector) # ignore IDE marking, the type works
        goal_vector = (node.x - result.x[-1], node.y - result.y[-1])
        goal_vector = unit_vector(goal_vector)
        vector_angle = np.arccos(np.clip(np.dot(current_vector, goal_vector), -1.0, 1.0))
        return vector_angle < 20 * math.pi / 180.0

    def _get_position_history(self):
        request = PositionHistory.Request()
        position_history_future = self.cli.call_async(request)
        rclpy.spin_until_future_complete(self, position_history_future)
        result = position_history_future.result()
        return result

    def stop(self):
        twist = stop_twist()
        self.command_movement.publish(twist)
        self.get_logger().info("Stopping turtlebot")

    def explore(self):
        area_map = self.map
        for node in area_map.all_nodes():
            if node.complete_unknown or free_threshold < node.obstruction < obstruction_threshold:
                try:
                    self.task_list.append(self.create_absolute_movement_task(node))
                    break
                except ImpossibleRouteException:
                    pass

    def revisit(self):
        position_history = self.get_path_history()
        area_map = self.map
        oldest_node = area_map.all_nodes()[0]
        best_score = float("inf")
        most_recent_time = max(position.timestamp for position in position_history)
        for node in area_map.all_nodes():
            if not node.obstructed:
                node_score = _score_node(node,position_history, most_recent_time)
                if node_score < best_score:
                    best_score = node_score
                    oldest_node = node
        self.task_list.append(self.create_absolute_movement_task(oldest_node))

def main():
    rclpy.init()
    args = parse_args()
    node = PathfindingNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


def parse_args():
    parser = ArgumentParser()
    return parser.parse_args()

def unit_vector(vector):
    """ Returns the unit vector of the vector.  """
    return vector / np.linalg.norm(vector)


if __name__ == "__main__":
    main()
