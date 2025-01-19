import logging
from argparse import ArgumentParser
from enum import Enum, auto
from pathlib import Path

import rclpy
import sys
from rclpy.node import Node
from semmap_interfaces.msg import EmergencyStop

from . import emergency_stop


class LEDNode(Node):
    def __init__(self) -> None:
        super().__init__("LoggingNode")
        self.create_subscription(EmergencyStop, "/emergency_stop", self.e_stop_callback, 10)

        self.e_stop_publisher = self.create_publisher(EmergencyStop, "/emergency_stop", 10)

    def e_stop_callback(self, msg: EmergencyStop) -> None:
        if msg.cause == emergency_stop.Causes.ALL_CLEAR:
            pass
            # TODO return control to system
        else:
            if msg.solvable_by_backup:
                pass
                # TODO make LED Yellow
            else:
                pass
                # TODO make LED RED

def main():
    rclpy.init()
    args = parse_args()
    node = LEDNode()
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
