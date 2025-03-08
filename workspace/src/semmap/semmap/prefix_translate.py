import logging
from argparse import ArgumentParser
from dataclasses import dataclass
from pathlib import Path
from subprocess import run
from typing import Tuple, List

import rclpy
import sys
from rclpy.node import Node

@dataclass
class Position:
    x: float
    y: float
    rotation: float
    timestamp: float

resolution = 0.05
time_resolution = 0.1
class PrefixTranslatorNode(Node):
    """
    A node to manage the position information of the robot
    """
    def __init__(self, prefix="") -> None:
        super().__init__("PrefixTranslator")
        self.publishers = []
        topic_list_process = run(["ros2", "topic", "list"], capture_output=True, text=True)
        topics = topic_list_process.stdout.splitlines()
        for topic in topics:
            topic_info_process = run(["ros2", "topic", "info", topic], capture_output=True, text=True)
            info = topic_info_process.stdout.splitlines()[0]
            message_type = info[len("Type: "):]
            t = __import__(message_type.replace("/", "."))
            if topic.startswith(prefix):
                pub = self.create_publisher(t, topic[len(prefix):], 10)
                def translator(msg):
                    pub.publish(msg)
                self.create_subscription(t, topic, translator, 10)

def main():
    rclpy.init()
    args = parse_args()
    node = PrefixTranslatorNode(prefix=args.prefix)
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()

def parse_args():
    parser = ArgumentParser()
    parser.add_argument('-p', '--prefix', default="", help="The Prefix for the topics of the roboter")
    return parser.parse_args()


if __name__ == "__main__":
    main()