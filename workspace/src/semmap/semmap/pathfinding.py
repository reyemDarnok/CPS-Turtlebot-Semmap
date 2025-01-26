import datetime
import logging
import math
import time
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
    def __init__(self, node, area_map: 'AreaMap', astar_map: 'AstarMap'):
        self.x = node.x
        self.y = node.y
        self.node = node
        self.predecessor: Optional[AstarNode] = None
        self.neighbors = []
        self.parent_map = area_map
        self.obstructed = node.obstructed
        self.score = float('inf')
        self.astar_map = astar_map

    def __hash__(self):
        return hash((self.x, self.y))

    def __eq__(self, other):
        return self.x == other.x and self.y == other.y

    def __str__(self):
        return f"{self.x}/{self.y}"

    def post_init(self):
        self.neighbors = [self.astar_map.nodes_2d[neighbor.x][neighbor.y] for neighbor in self.node.neighbors]

class AstarMap:
    def __init__(self, area_map, pos, target):
        self.target_node = target
        self.priority_queue = PriorityQueue()
        self.nodes_2d: List[List[AstarNode]] = []
        for x, row in enumerate(area_map):
            self.nodes_2d.append([])
            for y, node in enumerate(row):
                astar_node = AstarNode(node, area_map, self)

                self.nodes_2d[x].append(astar_node)

        pos_node = self.nodes_2d[int(pos.x)][int(pos.y)]
        pos_node.score = 0
        self.priority_queue.put((0, pos_node))
        for node in (n for row in self.nodes_2d for n in row):
            node.post_init()
        self.target_node = self.nodes_2d[target.x][target.y]

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
        outer_target = target
        def movement_task():
            try:
                current_pos = self.get_current_position()
                target = outer_target.parent_map[int(current_pos.x) + 5][ int(current_pos.y)] # TODO debug intercept
                self.get_logger().info(f'moving from {current_pos.x}/{current_pos.y} towards {target.x}/{target.y}')
            except ValueError:
                self.get_logger().info('Position not yet known, aborting movement planning')
                return
            astar_map = AstarMap(self.map, current_pos, target)
            while not len(astar_map.priority_queue) == 0:
                node_score, node = astar_map.priority_queue.pop()
                self.get_logger().info(f'Handling node {node.x}/{node.y} with score {node_score}')
                if node == target:
                    self.get_logger().info('Finished the path')
                    break
                #print(f'Number of neighbors {len(node.neighbors)}')
                for neighbor in node.neighbors:
                    neighbor_score_via_current = node_score + 1 + heuristic(neighbor, target)
                    if neighbor_score_via_current < neighbor.score:
                        print(f'Setting predecessor of {neighbor} to {node}')
                        neighbor.predecessor = node
                        neighbor.score = neighbor_score_via_current
                        #print('Updating ', neighbor, 'to score ', neighbor_score_via_current)
                        updated = astar_map.priority_queue.update_elem(neighbor, (neighbor_score_via_current, neighbor))
                        if not updated:
                            astar_map.priority_queue.put((neighbor_score_via_current, neighbor))
            else:
                self.task_list = self.task_list[:-1]
                raise ImpossibleRouteException()
            self.get_logger().info(f"Navigating towards {target.x}/{target.y}")
            start_node = None
            current_node = astar_map.target_node
            while current_node.predecessor is not None and not self.has_sight_line(current_pos, current_node):
                current_node = current_node.predecessor
            start_node = current_node.node
            def straight_line_navigation():
                if not self.is_aligned(start_node):
                    self.rotate_towards_node(start_node) # TODO implement
                if abs(current_pos.x - start_node.x) > 1 or abs(current_pos.y - start_node.y) > 1:
                    twist = move_twist()
                    self.command_movement.publish(twist)
                    self.get_logger().info("Moving to next node")
                else:
                    twist = stop_twist()
                    self.command_movement.publish(twist)
                    self.get_logger().info("Arrived at node")
            self.task_list.append(straight_line_navigation)
        return movement_task

    def has_sight_line(self, position, node):
        x_distance = node.x - position.x
        slope = (node.y - position.y) / x_distance
        previous_y = int(position.y)
        direction = 1 if slope > 0 else -1
        pass_through_nodes = []
        for x in range(int(position.x), node.x, direction):
            height = previous_y + slope
            pass_through_nodes += [self.map.node_2d[x][y] for y in range(int(previous_y), int(height) +1)]
            previous_y = height

        return any(p_node.obstructed for p_node in pass_through_nodes)

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
                    self.get_logger().info(f'Created Navigation to {node.x}/{node.y}')
                    return
                except ImpossibleRouteException:
                    self.task_list.append(self.explore)
                    raise
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
