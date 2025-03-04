from typing import List, Tuple

import rclpy
from rclpy.node import Node
from semmap_interfaces.msg import Object
from semmap_interfaces.msg import Position
from semmap_interfaces.srv import SemanticMap
import math

class SemanticMapNode(Node):
    def __init__(self):
        super().__init__('semantic_map_node')

        self.object_list: List[Tuple[str, Tuple[float, float, float]]] = []
        self.robot_position = (0, 0, 0)

        self.create_subscription(
            Object, '/detected_objects', self.object_callback, 10
        )

        self.create_subscription(
            Position, '/position', self.robot_location_callback, 10 # TODO correct service
        )

        self.create_service(
            SemanticMap, '/get_semantic_map', self.handle_get_semantic_map_request
        )

        self.get_logger().info("Semantic Map Node Initialized")


    def robot_location_callback(self, msg):

        robot_x = msg.x
        robot_y = msg.y
        robot_orientation = msg.rotation  #in radians

        self.robot_position = (robot_x, robot_y, robot_orientation)


    def to_global_coordinates(self, local_x, local_y): #cuz robots position matters

        robot_x, robot_y, robot_orientation = self.robot_position

        global_x = robot_x + (local_x * math.cos(robot_orientation) - local_y * math.sin(robot_orientation))
        global_y = robot_y + (local_x * math.sin(robot_orientation) + local_y * math.cos(robot_orientation))

        return global_x, global_y


    def object_callback(self, msg):

        if msg.distance is None or msg.angle is None:
            self.get_logger().warning(f"Missing depth data for object '{msg.tag}'. Skipping.")
            return

        distance = msg.distance
        angle = msg.angle
        elevation = msg.elevation

        #convert polar (robots pov) to cartesian (map fitting) coordinates
        local_x = distance * math.cos(math.radians(angle))
        local_y = distance * math.sin(math.radians(angle))
        z = distance * math.tan(math.radians(elevation))

        #convert local robot-relative coordinates to global map-relative coordinates
        global_x, global_y = self.to_global_coordinates(local_x, local_y)

        if not self._is_object_in_map(msg.tag, (global_x, global_y, z)):
            self.object_list.append((msg.tag, (global_x, global_y, z)))

        self.get_logger().info(f"Object added to Map: {msg.tag} at ({global_x}, {global_y}, {z})")

    def _is_object_in_map(self, tag, position):
        for obj in self.object_list:
            if obj[0] == tag:
                list_position = obj[1]
                distance = math.sqrt((list_position[0] - position[0]) ** 2
                                     + (list_position[1] - position[1]) ** 2
                                     + (list_position[2] - position[2]) ** 2)
                if distance < 0.1:
                    return True
        return False

    def handle_get_semantic_map_request(self, request, response):

        if not self.object_list:
            self.get_logger().warning("Semantic map is empty.")
            return response

        response.x = [obj[1][0] for obj in self.object_list]
        response.y = [obj[1][1] for obj in self.object_list]
        response.elevation = [obj[1][2] for obj in self.object_list]
        response.tag = [obj[0] for obj in self.object_list]

        self.get_logger().info(f"Semantic Map Response: {response.object_tags}")
        return response


def main(args=None):

    rclpy.init(args=args)
    node = SemanticMapNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
