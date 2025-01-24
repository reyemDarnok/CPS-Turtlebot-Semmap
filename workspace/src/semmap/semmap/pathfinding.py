import datetime
import logging
from argparse import ArgumentParser
from datetime import datetime
from enum import Enum, auto
from itertools import product
from pathlib import Path
from typing import Tuple

from .map_helper import AreaMap, free_threshold, obstruction_threshold, AreaNode
from .priority_queue import PriorityQueue
import rclpy
import sys
from rclpy.node import Node
from semmap_interfaces.msg import EmergencyStop
from semmap_interfaces.srv import PositionHistory
from geometry_msgs.msg import Twist

from .emergency_stop import Causes



class AstarNode:
    def __init__(self, node, area_map: 'AreaMap'):
        self.x = node.x
        self.y = node.y
        self.predecessor = None
        self.neighbors = node.neighbors
        self.parent_map = area_map
        # TODO implement area_map[node.x + 1][node.y],
        #                     area_map[node.x - 1][node.y],
        #                     area_map[node.x][node.y + 1],
        #                     area_map[node.x][node.y - 1],
        self.obstructed = node.obstructed


class AstarMap:
    def __init__(self, area_map, pos, target):
        self.target_node = target
        self.priority_queue = PriorityQueue()
        for node in area_map.all_nodes:
            astar_node = AstarNode(node, area_map)
            if pos[0] - 1 < astar_node.x < pos[0] and pos[1] - 1 < astar_node.y < pos[1]:
                self.priority_queue.put((0, astar_node))
            elif not astar_node.obstructed:
                self.priority_queue.put((float('inf'), astar_node))

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
    twist.linear.x = 0.0
    twist.linear.y = 0.0
    twist.linear.z = 0.0
    twist.angular.x = 0.0
    twist.angular.y = 0.0
    twist.angular.z = 0.0
    return twist


def move_twist():
    twist = Twist()
    twist.linear.x = 0.1
    twist.linear.y = 0.0
    twist.linear.z = 0.0
    twist.angular.x = 0.0
    twist.angular.y = 0.0
    twist.angular.z = 0.0
    return twist


def spin_twist():
    twist = Twist()
    twist.linear.x = 0.0
    twist.linear.y = 0.0
    twist.linear.z = 0.0
    twist.angular.x = 0.0
    twist.angular.y = 0.0
    twist.angular.z = 0.1
    return twist


class ImpossibleRouteException(Exception):
    pass


class PathfindingNode(Node):
    def __init__(self) -> None:
        super().__init__("PathfindingNode")
        self.task_list = [self.explore]
        self.e_stop_mode = False
        self.main_loop_timer = self.create_timer(0.2, self.navigate)
        self.command_movement = self.create_publisher(Twist, "/cmd_vel", 10)
        self._full_turn_rate = self.create_rate(1, self.get_clock())
        self.positions_client = self.create_client(PositionHistory, "/position")

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

    def get_current_position(self)-> Tuple[float, float]:
        request = PositionHistory.Request()
        position_history_future = self.cli.call_async(request)
        rclpy.spin_until_future_complete(self, position_history_future)
        result = position_history_future.result()
        return result.x[-1], result.y[-1]

    def create_absolute_movement_task(self, target: AreaNode):
        def movement_task():
            # TODO fail on impossible routes
            current_pos = self.get_current_position()
            astar_map = AstarMap(self.get_map(), current_pos, target)
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
            start_node = None
            current_node = astar_map.target_node
            while current_node.predecessor is not None:
                start_node = current_node
            if self.is_aligned(start_node): # TODO implement
                twist = spin_twist()
                self.command_movement.publish(twist)
                self.get_logger().info("Moving to next node")
            else:
                self.align_to(start_node) # TODO implement
        return movement_task


    def stop(self):
        twist = stop_twist()
        self.command_movement.publish(twist)
        self.get_logger().info("Stopping turtlebot")

    def explore(self):
        area_map = self.get_map()
        for node in area_map.all_nodes():
            if node.complete_unknown or free_threshold < node.obstruction < obstruction_threshold:
                try:
                    self.task_list.append(self.create_absolute_movement_task(node))
                    break
                except ImpossibleRouteException:
                    pass

    def get_map(self):
        return AreaMap(None) # TODO replace with callback and local var

    def revisit(self):
        position_history = self.get_path_history()
        area_map = self.get_map()
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


if __name__ == "__main__":
    main()
