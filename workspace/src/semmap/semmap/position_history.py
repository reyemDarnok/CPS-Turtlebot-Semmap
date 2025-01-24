import logging
from argparse import ArgumentParser
from dataclasses import dataclass
from pathlib import Path
from typing import Tuple, List

import rclpy
import sys
from rclpy.node import Node
from rcl_interfaces.msg import Log
from visualization.msg import MarkerArray
from semmap_interfaces.srv import PositionHistory

@dataclass
class Position:
    x: int
    y: int
    timestamp: float

class LoggingNode(Node):
    def __init__(self) -> None:
        super().__init__("PositionHistoryNode")
        self.create_subscription(MarkerArray, "/trajectory_node_list", self.map_callback, 10)
        self.create_service(PositionHistory, "/position_history", self.position_callback, 10)
        self.positions: List[Position] = []

    def map_callback(self, msg: MarkerArray) -> None:
        if msg.id == 2:
            sum_x = 0
            sum_y = 0
            for point in msg.points:
                sum_x = sum_x + point.x
                sum_y = sum_y + point.y
            current_position = Position(
                x= sum_x / len(msg.points),
                y = sum_y / len(msg.points),
                timestamp = msg.header.stamp.sec + msg.header.stamp.nanosec/1e9
            )
            self.positions.append(current_position)

    def position_callback(self, msg: PositionHistory, response) -> None:
        response.x = [position.x for position in self.positions]
        response.y = [position.y for position in self.positions]
        response.timestamp = [position.timestamp for position in self.positions]
        return response
def main():
    rclpy.init()
    args = parse_args()
    node = LoggingNode()
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