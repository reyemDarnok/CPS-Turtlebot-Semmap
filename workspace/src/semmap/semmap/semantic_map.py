from dataclasses import dataclass
from datetime import datetime
import random
from typing import List, Tuple, Dict, Optional

import rclpy
import setuptools.namespaces
from rclpy.node import Node
from semmap_interfaces.msg import Object
from semmap_interfaces.msg import Position
from semmap_interfaces.srv import SemanticMap
from  visualization_msgs.msg import Marker
import math

from workspace.src.semmap.semmap.movementTask import angle_between_vectors


@dataclass(frozen=True)
class ObjectPosition:
    x: float
    y: float
    elevation: float

@dataclass(frozen=True)
class SemObject:
    tag: str
    position: ObjectPosition
    id: int

class SemanticMapNode(Node):
    def __init__(self, prefix: str):
        super().__init__('semantic_map_node')

        self.object_list: List[SemObject] = []
        self.recent_objects: Dict[SemObject, datetime] = {}
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

        self.marker_pub = self.create_publisher(Marker, f'{prefix}/marker', 10) #TODO rviz topic


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
        sem_object = SemObject(tag=msg.tag,position=ObjectPosition(global_x, global_y, z), id=random.randint())

        old_object = self._find_eq_object(sem_object)
        if old_object is None:
            self.object_list.append(sem_object)
            self.recent_objects[sem_object] = datetime.now()
        else:
            self.object_list.remove(old_object)
            average_pos = ObjectPosition(x=(old_object.position.x + sem_object.position.x) / 2,
                                         y=(old_object.position.y + sem_object.position.y) / 2,
                                         elevation=(old_object.position.elevation + sem_object.position.elevation) / 2,)
            new_object = SemObject(tag=old_object.tag,position=average_pos, id=old_object.id)
            self.object_list.append(new_object)
            self.recent_objects.pop(old_object)
            self.recent_objects[new_object] = datetime.now()
            self.update_map_marker(new_object)

        self.get_logger().info(f"Object added to Map: {msg.tag} at ({global_x}, {global_y}, {z})")

    def update_map_marker(self, to_mark: SemObject):
        self.remove_map_marker(to_mark)
        self.add_map_marker(to_mark)

    def remove_map_marker(self, to_mark: SemObject):
        marker = self._create_basic_marker("/objects", to_mark.id)
        marker_label = self._create_basic_marker("/object_labels", to_mark.id)
        marker.action = Marker.DELETE
        marker_label.action = Marker.DELETE
        self.marker_pub.publish(marker)
        self.marker_pub.publish(marker_label)

    def add_map_marker(self, to_mark: SemObject):
        marker = self._create_basic_marker("/objects", to_mark.id)
        marker_label = self._create_basic_marker("/object_labels", to_mark.id)
        marker.pose.position.x = to_mark.position.x
        marker.pose.position.y = to_mark.position.y
        marker.pose.position.z = to_mark.position.elevation
        marker_label.pose.position.x = to_mark.position.x
        marker_label.pose.position.y = to_mark.position.y
        marker_label.pose.position.z = to_mark.position.elevation + 1
        marker_label.text = to_mark.tag
        marker_label.type = Marker.TEXT_VIEW_FACING
        self.marker_pub.publish(marker)
        self.marker_pub.publish(marker_label)

    def _create_basic_marker(self, namespace: str, id: int):
        marker = Marker()

        marker.header.frame_id = "/my_frame"
        marker.header.stamp = self.get_clock().now().to_msg()

        marker.ns = namespace
        marker.id = id

        marker.type = Marker.SPHERE

        marker.action = Marker.ADD # ADD

        marker.pose.position.x = 0
        marker.pose.position.y = 0
        marker.pose.position.z = 0

        marker.scale.x = 0.1
        marker.scale.y = 0.1
        marker.scale.z = 0.1

        marker.color.r = 0.0
        marker.color.g = 1.0
        marker.color.b = 0.0
        marker.color.a = 1.0
        return marker

    def _find_eq_object(self, sem_object: SemObject) -> Optional[SemObject]:
        for obj in self.object_list:
            if obj.tag == sem_object:
                distance = math.sqrt((obj.position.x - sem_object.position.x) ** 2
                                     + (obj.position.y - sem_object.position.y) ** 2
                                     + (obj.position.elevation - obj.position.elevation) ** 2)
                if distance < 0.1:
                    return obj
        return None

    def cull_moved_objects(self):
        self.object_list = [obj for obj in self.object_list if (obj not in self.recent_objects.keys())
                            and self.is_looking_at(obj.position)]

    def is_looking_at(self, position: ObjectPosition) -> bool:
        horizontal_vector = (position.x - self.robot_position[0], position.y - self.robot_position[1])
        horizontal_angle = angle_between_vectors((1, 0), horizontal_vector)
        angle_diff = (horizontal_angle - self.robot_position[2]) % (2 * math.pi)
        angle_diff = angle_diff if angle_diff < 0 else -angle_diff
        if not ((- math.radians(34) < angle_diff < math.radians(34))
                or (math.radians(180 + 34) > angle_diff > math.radians(180 - 34))):
            return False
        distance = math.sqrt(horizontal_vector[0] ** 2 + horizontal_vector[1] ** 2)
        if not position.elevation < distance * math.tan(math.radians(34)):
            return False
        return True

    def handle_get_semantic_map_request(self, request, response):

        if not self.object_list:
            self.get_logger().warning("Semantic map is empty.")
            return response

        response.x = [obj.position.x for obj in self.object_list]
        response.y = [obj.position.y for obj in self.object_list]
        response.elevation = [obj.position.elevation for obj in self.object_list]
        response.tag = [obj.tag for obj in self.object_list]

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
