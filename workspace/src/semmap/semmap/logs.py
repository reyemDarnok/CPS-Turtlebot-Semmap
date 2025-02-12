import logging
from argparse import ArgumentParser
from pathlib import Path

import rclpy
import sys
from rclpy.node import Node
from rcl_interfaces.msg import Log

class LoggingNode(Node):
    """
    A node that writes ros 2 logs to disk
    """
    def __init__(self, log_file: Path, log_level: int = logging.INFO) -> None:
        super().__init__("LoggingNode")
        self.create_subscription(Log, "/rosout", self.log_callback, 10)
        self.logger = logging.getLogger(__name__)
        self.logger.setLevel(log_level)
        fh = logging.FileHandler(log_file)
        fh.setLevel(log_level)
        formatter = logging.Formatter("%(message)s")
        fh.setFormatter(formatter)
        self.logger.addHandler(fh)

    def log_callback(self, msg: Log) -> None:
        """Receives the ros 2 log message and writes it to python logging"""
        self.logger.log(msg.level,
                        f"{msg.stamp.sec}.{msg.stamp.nanosec:08}:"
                        f"{msg.file}:"
                        f"{msg.function}:"
                        f"{msg.line if msg.line != 0 else ''}:"
                        f"{msg.msg}")


def main():
    rclpy.init()
    args = parse_args()
    node = LoggingNode(log_file=args.logfile, log_level=args.log_level)
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()

def parse_args():
    parser = ArgumentParser()
    parser.add_argument("-f", "--file", dest="logfile", help="log file path", type=Path, default=Path("semmap.log"))
    parser.add_argument("-l", "--log-level", dest="log_level", help="log level", type=int, default=logging.INFO)
    return parser.parse_args()

if __name__ == "__main__":
    main()