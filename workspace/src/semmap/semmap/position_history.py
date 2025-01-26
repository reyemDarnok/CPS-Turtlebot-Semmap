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
from semmap_interfaces.msg import PositionHistory
from nav_msgs.msg import Odometry, OccupancyGrid
@dataclass
class Position:
    x: float
    y: float
    rotation: float
    timestamp: float

resolution = 0.05
time_resolution = 0.1
class LoggingNode(Node):
    def __init__(self) -> None:
        super().__init__("PositionHistoryNode")
        self.create_subscription(Odometry, "/odom", self.map_callback, 10)
        self.create_subscription(OccupancyGrid, "/map", self.origin_callback, 10)
        self.p_history_publisher = self.create_publisher(PositionHistory, "/position_history", 10)
        self.positions: List[Position] = []
        self.map_offset_x = None
        self.map_offset_y = None
        self.rotation_offset = None
        self.odom_offset_x = None
        self.odom_offset_y = None

    def origin_callback(self, msg: OccupancyGrid) -> None:
        self.map_offset_x = - msg.info.origin.position.x
        self.map_offset_y = msg.info.height * resolution + msg.info.origin.position.y
        quat = msg.info.origin.orientation
        rot = Rotation.from_quat([quat.x, quat.y, quat.z, quat.w])
        self.rotation_offset = - rot.as_euler('xyz')[2]


    def map_callback(self, msg: Odometry) -> None:
        if self.map_offset_x is None:
            self.get_logger().info("x_offset is not yet determined, ignoring position")
            return
        if self.odom_offset_x is None:
            self.odom_offset_x = - msg.pose.pose.position.x
            self.odom_offset_y = - msg.pose.pose.position.y
        if msg.child_frame_id == 'base_footprint':
            quat = msg.pose.pose.orientation
            rot = Rotation.from_quat([quat.x, quat.y, quat.z, quat.w])
            rot_euler = rot.as_euler('xyz')[2]
            offset_corrected_x = msg.pose.pose.position.x + self.map_offset_x + self.odom_offset_x
            offset_corrected_y = msg.pose.pose.position.y + self.map_offset_y + self.odom_offset_y
            current_position = Position(
                x= offset_corrected_x / resolution,
                y = offset_corrected_y / resolution,
                rotation=rot_euler + self.rotation_offset,
                timestamp = msg.header.stamp.sec + msg.header.stamp.nanosec/1e9
            )
            if len(self.positions) == 0 or current_position.timestamp - self.positions[-1].timestamp > time_resolution:
                self.positions.append(current_position)
                result = PositionHistory()
                result.x = [position.x for position in self.positions]
                result.y = [position.y for position in self.positions]
                result.rotation = [position.rotation for position in self.positions]
                result.timestamp = [position.timestamp for position in self.positions]
                self.p_history_publisher.publish(result)

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