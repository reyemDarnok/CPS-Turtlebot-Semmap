import logging
from argparse import ArgumentParser
from pathlib import Path

import rclpy
import sys
from rclpy.node import Node
from semmap_interfaces.msg import log_message

class LoggingNode(Node):
    def __init__(self, log_file: Path, log_level: int = logging.INFO) -> None:
        super().__init__("LoggingNode")
        self.create_subscription(log_message, "/logging", self.log_callback, 10)
        self.logger = logging.getLogger(__name__)
        self.logger.setLevel(log_level)
        fh = logging.FileHandler(log_file)
        fh.setLevel(log_level)
        formatter = logging.Formatter("%(asctime)s:%(levelname)s:%(message)s")
        fh.setFormatter(formatter)
        self.logger.addHandler(fh)

    def log_callback(self, msg: log_message) -> None:
        self.logger.log(msg.level, f"{msg.source}:{msg.message}")


def main(argv=sys.argv[1]):
    rclpy.init(args=argv)
    args = parse_args(argv)
    node = LoggingNode(log_file=args.log_file, log_level=args.log_level)
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()

def parse_args(args=None):
    if args is None:
        args = sys.argv
    parser = ArgumentParser()
    parser.add_argument("-f", "--file", dest="logfile", help="log file path", type=Path, default=Path("semmap.log"))
    parser.add_argument("-l", "--log-level", dest="log_level", help="log level", type=int, default=logging.INFO)
    return parser.parse_args()

if __name__ == "__main__":
    main()