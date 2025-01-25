import logging
from argparse import ArgumentParser
from dataclasses import dataclass
from pathlib import Path
from typing import Tuple, List

import rclpy
import sys
from rclpy.node import Node
from rcl_interfaces.msg import Log
from scipy.spatial.transform import Rotation
from semmap_interfaces.srv import PositionHistory
from nav_msgs.msg import Odometry, OccupancyGrid
@dataclass
class Position:
    x: float
    y: float
    rotation: float
    timestamp: float

resolution = 0.05

class LoggingNode(Node):
    def __init__(self) -> None:
        super().__init__("PositionHistoryNode")
        self.create_subscription(Odometry, "/odom", self.map_callback, 10)
        self.create_subscription(OccupancyGrid, "/map", self.origin_callback, 10)
        self.create_service(PositionHistory, "/position_history", self.position_callback)
        self.positions: List[Position] = []
        self.x_offset = None
        self.y_offset = None
        self.rotation_offset = None

    def origin_callback(self, msg: OccupancyGrid) -> None:
        height = msg.info.height / resolution
        width = msg.info.width / resolution
        self.x_offset = - msg.info.origin.position.x
        self.y_offset = height + msg.info.origin.position.y
        quat = msg.info.origion.orientation
        rot = Rotation.from_quat([quat.x, quat.y, quat.z, quat.w])
        self.rotation_offset = - rot.as_euler('xyz')[2]


    def map_callback(self, msg: Odometry) -> None:
        if self.x_offset is None:
            self.get_logger().info("x_offset is not yet determined, ignoring position")
            return
        if msg.child_frame_id == 'base_footprint':
            quat = msg.pose.pose.orientation
            rot = Rotation.from_quat([quat.x, quat.y, quat.z, quat.w])
            rot_euler = rot.as_euler('xyz')[2]
            current_position = Position(
                x= (msg.pose.pose.position.x + self.x_offset) / resolution,
                y = (msg.pose.pose.position.y + self.y_offset) / resolution,
                rotation=rot_euler + self.rotation_offset,
                timestamp = msg.header.stamp.sec + msg.header.stamp.nanosec/1e9
            )
            self.positions.append(current_position)

    def position_callback(self, msg: PositionHistory, response) -> None:
        response.x = [position.x for position in self.positions]
        response.y = [position.y for position in self.positions]
        response.rotation = [position.rotation for position in self.positions]
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