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
from scipy.spatial.transform import Rotation

from .movementTask import ExploreTask, RevisitTask, AbsoluteMovementTask
from .position_history import Position
from .map_helper import AreaMap, free_threshold, obstruction_threshold, AreaNode
from .priority_queue import PriorityQueue
import rclpy
import sys
from rclpy.node import Node
from semmap_interfaces.msg import PositionHistory
from geometry_msgs.msg import Twist
from nav_msgs.msg import OccupancyGrid
import semmap_interfaces






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




class PathfindingNode(Node):
    def __init__(self) -> None:
        super().__init__("PathfindingNode")
        self.task = None
        self.map = None
        self.position_history: List[Position] = []
        self.main_loop_timer = self.create_timer(0.1, self.navigate)
        self.command_movement = self.create_publisher(Twist, "/cmd_vel", 10)
        self.create_subscription(PositionHistory, "/position_history", self.position_callback, 10)
        self.create_subscription(OccupancyGrid, "/map", self.map_callback, 10)
        self.create_subscription(semmap_interfaces.msg.Position, "/absolute_movement", self.absolute_movement, 10)
        self.create_subscription(semmap_interfaces.msg.Position, "/relative_movement", self.relative_movement, 10)
        self.get_logger().info("Pathfinding node initialized")

    def relative_movement(self, position: Position) -> None:
        if self.map is not None:
            try:
                current_position = self.get_current_position()
            except:
                return
            if position.x == 0 and position.y == 0 and position.rotation == 0:
                twist = stop_twist()
                twist.angular.z = 0.0
                self.command_movement.publish(twist)
            elif position.rotation == 0:
                current_rotation = Rotation.from_rotvec([0,0,current_position.rotation])
                movement_vector = (position.x, position.y, 0)
                final_vector = current_rotation.apply(movement_vector)
                self.task = AbsoluteMovementTask(self, self.map[int(final_vector[1] + final_vector[0])][
                    int(position.x + current_position.x)])
                self.get_logger().info("Relative movement task started for position {}".format(position))
            else:
                twist = spin_twist()
                twist.angular.z = position.rotation
                self.command_movement.publish(twist)

    def absolute_movement(self, position: Position) -> None:
        if self.map is not None:
            try:
                current_position = self.get_current_position()
            except:
                return
            if position.x == 0 and position.y == 0 and position.rotation == 0:
                twist = stop_twist()
                twist.angular.z = 0.0
                self.command_movement.publish(twist)
                self.get_logger().info("Stopping Movement Task")
            elif position.rotation == 0:
                self.task = AbsoluteMovementTask(self, self.map[int(position.y + current_position.y)][int(position.x + current_position.x)])
                self.get_logger().info("Relative movement task started for position {}".format(position))
            else:
                twist = spin_twist()
                twist.angular.z = position.rotation
                self.command_movement.publish(twist)


    def position_callback(self, msg):
        self.position_history = [Position(x, y, rotation, timestamp) for x,y,rotation,timestamp in zip(msg.x, msg.y, msg.rotation, msg.timestamp)]

    def map_callback(self, msg):
        self.map = AreaMap.from_msg(msg, self.get_logger())

    def navigate(self):
        if self.task is not None:
            if self.task.finished():
                self.task = None
        if self.task :
            self.task.execute()

    def get_current_position(self)-> Position:
        result = self._get_position_history()
        try:
            return result[-1]
        except IndexError:
            raise ValueError('position not yet known')

    def has_sight_line(self, position, node):
        x_distance = node.x - position.x
        slope = (node.y - position.y) / x_distance
        previous_y = int(position.y)
        direction = 1 if slope > 0 else -1
        pass_through_nodes = []
        for x in range(int(position.x), node.x + 1, direction):
            height = previous_y + slope
            pass_through_nodes += [self.map.node_2d[y][x] for y in range(int(previous_y), int(height) +1)]
            print(previous_y, height, slope)
            previous_y = height
        print(*pass_through_nodes)
        return any(p_node.obstructed for p_node in pass_through_nodes) or len(pass_through_nodes) == 0

    def _get_position_history(self) -> List[Position]:
        return self.position_history


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
