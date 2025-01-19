import logging
from argparse import ArgumentParser
from enum import Enum, auto
from pathlib import Path

import rclpy
import sys
from rclpy.node import Node
from semmap_interfaces.msg import EmergencyStop

class StopNode(Node):
    def __init__(self) -> None:
        super().__init__("LoggingNode")
        self.create_subscription(Log, "/rosout", self.log_callback, 10)
        #TODO
        # self.create_subscription(WheelWeight, "/wheelWeight", self.wheel_weight_callback, 10)
        #TODO
        # self.create_subscription(cliff, "/cliff", self.cliff_callback, 10)
        #TODO
        # self.create_subscription(bumper, "/bumper", self.bumper_callback, 109
        #TODO
        # self.create_subscription(IR, "/ir_intensity", self.ir_callback, 10)

        self.e_stop_publisher = self.create_publisher(EmergencyStop, "/emergency_stop",  10)


    def wheel_weight_callback(self, msg):
        e_stop_message = EmergencyStop()
        e_stop_message.solvable_by_backup = False
        e_stop_message.cause = Causes.WHEEL_LIFT
        self.get_logger().critical("Wheel weight sensor reports wheel lift. Waiting until safety")
        self.e_stop_publisher.publish(e_stop_message)

    def cliff_callback(self, msg):
        e_stop_message = EmergencyStop()
        e_stop_message.solvable_by_backup = True
        e_stop_message.cause = Causes.CLIFF
        self.get_logger().critical("Turtlebot encountered cliff. Trying to back up")
        self.e_stop_publisher.publish(e_stop_message)

    def bumper_callback(self, msg):
        e_stop_message = EmergencyStop()
        e_stop_message.solvable_by_backup = True
        e_stop_message.cause = Causes.BUMPER
        self.get_logger().critical("Turtlebot bumped into something. Trying to back up. "
                                "This obstacle should have been detected earlier")
        self.e_stop_publisher.publish(e_stop_message)

    def ir_callback(self, msg):
        if msg: # distance very low
            e_stop_message = EmergencyStop()
            e_stop_message.solvable_by_backup = True
            e_stop_message.cause = Causes.IR
            self.get_logger().critical("IR Sensor reports close obstacle. Backing up")
            self.e_stop_publisher.publish(e_stop_message)


def main():
    rclpy.init()
    args = parse_args()
    node = StopNode()
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

class Causes(Enum):
    ALL_CLEAR = auto()
    WHEEL_LIFT = auto()
    CLIFF = auto()
    BUMPER = auto()
    IR = auto()