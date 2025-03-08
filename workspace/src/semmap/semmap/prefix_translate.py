import logging
from argparse import ArgumentParser
from dataclasses import dataclass
from pathlib import Path
from subprocess import run
from typing import Tuple, List

import rclpy
import sys
from rclpy.node import Node

robot_input_topics = ["cmd_audio", "cmd_lightring", "cmd_vel", ]
class PrefixTranslatorNode(Node):
    """
    A node to manage the position information of the robot
    """
    def __init__(self, prefix="") -> None:
        super().__init__("PrefixTranslator")
        self.translate_publishers = []
        p = run(["ros2", "topic", "list"], capture_output=True, text=True)
        self.get_logger().info(p.stdout)
        topics = p.stdout.splitlines()
        robot_output_topics = [topic for topic in topics if topic.startswith(prefix) and topic[len(prefix):] not in robot_input_topics]
        self.get_logger().info(f"{robot_output_topics=}")
        for topic in robot_output_topics:
            topic_info_process = run(["ros2", "topic", "info", topic], capture_output=True, text=True)
            self.get_logger().info(topic_info_process.stdout)
            info = topic_info_process.stdout.splitlines()[0]
            message_type = info[len("Type: "):].split('/')
            t = __import__('.'.join(message_type[:-1])).__getattr__(message_type[-1])
            pub = self.create_publisher(t, topic[len(prefix):], 10)
            self.translate_publishers.append(pub)
            def translator(msg):
                pub.publish(msg)
            self.create_subscription(t, topic, translator, 10)
        for topic in robot_input_topics:
            topic_info_process = run(["ros2", "topic", "info", topic], capture_output=True, text=True)
            self.get_logger().info(topic_info_process.stdout)
            info = topic_info_process.stdout.splitlines()[0]
            message_type = info[len("Type: "):].split('/')
            t = __import__('.'.join(message_type[:-1])).__getattr__(message_type[-1])
            pub = self.create_publisher(t, topic[len(prefix):], 10)
            self.translate_publishers.append(pub)
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