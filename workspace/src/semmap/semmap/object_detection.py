from argparse import ArgumentParser

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from semmap_interfaces.msg import Object
from cv_bridge import CvBridge
import numpy as np
from ultralytics import YOLO

class ObjectDetectionNode(Node):
    def __init__(self, prefix=""):
        super().__init__('object_detection_node')
        self.bridge = CvBridge()

        self.camera_sub = self.create_subscription(
            Image, f'${prefix}/oakd/rgb/preview/image_raw', self.image_callback, 10
        )
        self.depth_sub = self.create_subscription(
            Image, f'${prefix}/oakd/rgb/preview/depth', self.depth_callback, 10
        )
        self.object_pub = self.create_publisher(Object, 'detected_objects', 10)

        self.model = YOLO("yolov8s.pt")
        self.horizontal_fov = 81  #check if its correct values of our turtlebot!!!
        self.vertical_fov = 52 #check if its correct values of our turtlebot!!!
        self.depth_data = None
        self.get_logger().info("Object Detection Node Initialized")

    def image_callback(self, msg):
        try:
            frame = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        except Exception as e:
            self.get_logger().error(f"Error converting image: {e}")
            return

        try:
            results = self.model(frame)
        except Exception as e:
            self.get_logger().error(f"Error during YOLO inference: {e}")
            return


        h, w = frame.shape[:2]
        for box in results[0].boxes:
            x_center, y_center, width, height = box.xywh[0].cpu().numpy()
            conf = box.conf[0].cpu().numpy()
            class_idx = box.cls[0].cpu().numpy()

            if conf < 0.5:
                continue

            x = int(x_center - width / 2)
            y = int(y_center - height / 2)

            obj_msg = Object()
            obj_msg.tag = self.model.names[int(class_idx)]
            depth = self.get_depth(int(x_center), int(y_center))

            if depth is not None:
                obj_msg.distance = depth
                obj_msg.angle = self.calculate_angle(int(x_center), w)
                obj_msg.elevation = self.calculate_elevation(int(y_center), h, obj_msg.distance)

                self.get_logger().info(
                    f"Published: {obj_msg.tag}, Distance: {obj_msg.distance}, Angle: {obj_msg.angle}, Elevation: {obj_msg.elevation}"
                )
            else:
                self.get_logger().info(f"Published: {obj_msg.tag}. Depth data not available.")

            self.object_pub.publish(obj_msg)


    def depth_callback(self, msg):
        try:
            self.depth_data = self.bridge.imgmsg_to_cv2(msg, "32FC1")
        except Exception as e:
            self.get_logger().error(f"Error converting depth image: {e}")

    def get_depth(self, x, y):
        if self.depth_data is None:
            return None
        depth =  self.depth_data[y, x]  #in meters
        if np.isnan(depth) or depth <= 0:
            return None
        return depth

    def calculate_angle(self, center_x, width):
        center_x_normalized = (center_x / width) * 2 - 1
        angle = center_x_normalized * (self.horizontal_fov / 2)
        return angle

    def calculate_elevation(self, center_y, height, depth):
        center_y_normalized = (center_y / height) * 2 - 1
        elevation = center_y_normalized * (self.vertical_fov / 2) * depth
        return elevation


def main(args=None):
    rclpy.init(args=args)
    args = parse_args()
    node = ObjectDetectionNode(prefix=args.prefix)
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

def parse_args():
    parser = ArgumentParser()
    parser.add_argument('-p', '--prefix', default="", help="The Prefix for the topics of the roboter")
    return parser.parse_args()

if __name__ == "__main__":
    main()
