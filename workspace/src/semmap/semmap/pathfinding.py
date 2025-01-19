import logging
from argparse import ArgumentParser
from enum import Enum, auto
from pathlib import Path

import rclpy
import sys
from rclpy.node import Node
from semmap_interfaces.msg import EmergencyStop
from geometry_msgs.msg import Twist

from .emergency_stop import Causes


class PathfindingNode(Node):
    def __init__(self) -> None:
        super().__init__("PathfindingNode")
        self.task_list = []
        self.e_stop_mode = False
        self.main_loop_timer = self.create_timer(0.2, self.navigate)
        self.command_movement = self.create_publisher(Twist, "/cmd_vel", 10)
        self._full_turn_rate = self.create_rate(1, self.get_clock())

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
        twist = Twist()
        twist.linear.x = 0.0
        twist.linear.y = 0.0
        twist.linear.z = 0.0
        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = 1.0
        self.command_movement.publish(twist)
        self._full_turn_rate.sleep()
        twist = Twist()
        twist.linear.x = 1.0
        twist.linear.y = 0.0
        twist.linear.z = 0.0
        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = 0.0
        self.command_movement.publish(twist)
        self._full_turn_rate.sleep()
        twist = Twist()
        twist.linear.x = 0.0
        twist.linear.y = 0.0
        twist.linear.z = 0.0
        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = 0.0
        self.command_movement.publish(twist)
        self.get_logger().info("Finished backing up turtlebot")

    def create_absolute_movement_task(self, target):
        def movement_task():
            pass
        return movement_task

    def stop(self):
        twist = Twist()
        twist.linear.x = 0.0
        twist.linear.y = 0.0
        twist.linear.z = 0.0
        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = 0.0
        self.command_movement.publish(twist)
        self.get_logger().info("Stopping turtlebot")

    def explore(self):
        pass

    def revisit(self):
        pass

    def return_to_dock(self):
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


if __name__ == "__main__":
    main()
