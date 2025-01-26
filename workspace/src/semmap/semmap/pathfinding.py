import datetime
import logging
import math
from argparse import ArgumentParser
from datetime import datetime
from enum import Enum, auto
from itertools import product
from pathlib import Path
from typing import Tuple, Optional, List

import numpy as np

from .position_history import Position
from .map_helper import AreaMap, free_threshold, obstruction_threshold, AreaNode
from .priority_queue import PriorityQueue
import rclpy
import sys
from rclpy.node import Node
from semmap_interfaces.msg import EmergencyStop, PositionHistory
from geometry_msgs.msg import Twist
from nav_msgs.msg import OccupancyGrid

from .emergency_stop import Causes



class AstarNode:
    def __init__(self, node, area_map: 'AreaMap'):
        self.x = node.x
        self.y = node.y
        self.node = node
        self.predecessor: Optional[AstarNode] = None
        self.neighbors = node.neighbors
        self.parent_map = area_map
        self.obstructed = node.obstructed
        self.score = float('inf')


class AstarMap:
    def __init__(self, area_map, pos, target):
        self.target_node = target
        self.priority_queue = PriorityQueue()
        for node in area_map.all_nodes():
            astar_node = AstarNode(node, area_map)
            if pos.x - 1 < astar_node.x < pos.x and pos.y - 1 < astar_node.y < pos.y:
                self.priority_queue.put((0, astar_node))
            elif not astar_node.obstructed:
                self.priority_queue.put((float('inf'), astar_node))

def heuristic(node_a, node_b):
        return abs(node_a.x - node_b.x) + abs(node_a.y - node_b.y)
def _score_node(node, path_history, time):
    score = 0
    e_factor = 0.98851 # halflife of 1 minute (x^60 = 1/2)
    for position in path_history:
        distance = (position.x - node.x) ** 2 + (position.y - node.y) ** 2
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
        self.map = None
        self.position_history: List[Position] = []
        self.main_loop_timer = self.create_timer(0.5, self.navigate)
        self.command_movement = self.create_publisher(Twist, "/cmd_vel", 10)
        self._full_turn_rate = self.create_rate(1, self.get_clock())
        self.create_subscription(PositionHistory, "/position_history", self.position_callback, 10)
        self.create_subscription(OccupancyGrid, "/map", self.map_callback, 10)
        self.get_logger().info("Pathfinding node initialized")

    def position_callback(self, msg):
        self.position_history = [Position(x, y, rotation, timestamp) for x,y,rotation,timestamp in zip(msg.x, msg.y, msg.rotation, msg.timestamp)]

    def map_callback(self, msg):
        self.map = AreaMap.from_msg(msg, self.get_logger())

    def navigate(self):
        self.get_logger().info(f'Checking current navigation task')
        if not self.e_stop_mode:
            self.task_list[-1]() # execute the most recent task

    def emergency_stop(self, message):
        self.stop()
        self.get_logger().warning('Entering emergency stop')
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
        try:
            return result[-1]
        except IndexError:
            raise ValueError('position not yet known')

    def create_absolute_movement_task(self, target: AreaNode):
        def movement_task():
            try:
                current_pos = self.get_current_position()
            except ValueError:
                self.get_logger().info('Position not yet known, aborting movement planning')
                return
            astar_map = AstarMap(self.map, current_pos, target)
            astar_map.priority_queue = PriorityQueue()
            while not len(astar_map.priority_queue) == 0:
                node = astar_map.priority_queue.pop()
                if node == target:
                    break
                for neighbor in node.neighbors:
                    neighbor_score_via_current = node.score + 1 + heuristic(neighbor, target)
                    if neighbor_score_via_current < neighbor.score:
                        neighbor.predecessor = node
                        neighbor.score = neighbor_score_via_current
                        astar_map.priority_queue.update_elem(neighbor, (neighbor_score_via_current, neighbor))
            else:
                self.task_list = self.task_list[:-1]
                raise ImpossibleRouteException()
            self.get_logger.info(f"Navigating towards {target.x}/{target.y}")
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

    def is_aligned(self, node: AreaNode, tolerance: float = 20 * math.pi / 180) -> bool:
        if tolerance < 0: tolerance *= -1
        try:
            current_position = self.get_current_position()
        except ValueError:
            self.get_logger().info('Position not yet known, assuming no alignment')
            return False
        current_angle = current_position.rotation % (2* math.pi)
        goal_vector = (node.x - current_position.x, node.y - current_position.y)
        # noinspection PyTypeChecker
        goal_vector = unit_vector(goal_vector)
        vector_angle = np.arccos(np.clip(np.dot((1,0), goal_vector), -1.0, 1.0))
        vector_angle = vector_angle % (2*math.pi)
        if vector_angle < current_angle:
            vector_angle += 2 * math.pi
        angle_difference = vector_angle - current_angle
        return angle_difference < tolerance

    def _get_position_history(self) -> List[Position]:
        #rclpy.spin_until_future_complete(self, self.position_history_future)
        return self.position_history

    def stop(self):
        twist = stop_twist()
        self.command_movement.publish(twist)
        self.get_logger().info("Stopping turtlebot")

    def explore(self):
        self.get_logger().info("Executing explore task")
        area_map = self.map
        if area_map is None:
            self.get_logger().info("No map available, waiting")
            return # System not yet initialized
        for node in area_map.all_nodes():
            if node.complete_unknown or free_threshold < node.obstruction < obstruction_threshold:
                try:
                    movement_task = self.create_absolute_movement_task(node)
                    movement_task() # check possibility
                    self.task_list.append(movement_task)
                    self.get_logger().info(f'Creating Navigation to {node.x}/{node.y}')
                    return
                except ImpossibleRouteException:
                    self.task_list.append(self.explore)
                    pass
        self.get_logger.info('Switching to revisit mode')
        self.task_list.append(self.revisit)

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
        try:
            movement_task = self.create_absolute_movement_task(oldest_node)
            movement_task()  # check possibility
            self.task_list.append(movement_task)
            self.get_logger().info(f'Creating Navigation to {oldest_node.x}/{oldest_node.y}')
            return
        except ImpossibleRouteException:
            self.task_list.append(self.revisit)
            pass

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
