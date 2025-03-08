import logging
from argparse import ArgumentParser
from dataclasses import dataclass
from pathlib import Path
from subprocess import run
from typing import Tuple, List
from rclpy.qos import ReliabilityPolicy
import rclpy
import sys
from rclpy.node import Node

robot_input_topics = ["/cmd_audio", "/cmd_lightring", "/cmd_vel", ]
class PrefixTranslatorNode(Node):
    """
    A node to manage the position information of the robot
    """
    def __init__(self, prefix="") -> None:
        super().__init__("PrefixTranslator")
        self.translate_publishers = []
        p = run(["ros2", "topic", "list"], capture_output=True, text=True)
        topics = p.stdout.splitlines()
        robot_output_topics = [topic for topic in topics if topic.startswith(prefix) and topic[len(prefix):] not in robot_input_topics]
        self.get_logger().info(f"{robot_output_topics=}")
        for topic in robot_output_topics:
            prefix_topic = topic
            bare_topic = topic[len(prefix):]
            self.transfer_messages(prefix_topic, bare_topic)
        for topic in robot_input_topics:
            prefix_topic = prefix + topic
            bare_topic = topic
            self.transfer_messages(bare_topic, prefix_topic)
        self.get_logger().info(f"Translator finished initialising")

    def transfer_messages(self, from_topic, to_topic):
        topic_type_process = run(["ros2", "topic", "type", from_topic], capture_output=True, text=True)
        info = topic_type_process.stdout.splitlines()[0]
        message_type = info.split('/')
        t = getattr(__import__('.'.join(message_type[:-1]), fromlist=[message_type[-1]]), message_type[-1])
        topic_info_process = run(["ros2", "topic", "info", from_topic, "-v"], capture_output=True, text=True)
        reliability_line = [line for line in topic_info_process.stdout.splitlines() if line.startswith("  Reliability")][0]
        reliability = reliability_line.split()[-1]
        pub = self.create_publisher(t, to_topic, getattr(ReliabilityPolicy, reliability))
        self.translate_publishers.append(pub)

        def translator(msg):
            pub.publish(msg)

        self.create_subscription(t, from_topic, translator, getattr(ReliabilityPolicy, reliability))


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