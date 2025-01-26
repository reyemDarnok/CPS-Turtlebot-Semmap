import rclpy
from rclpy.node import Node
from semmap_interfaces.msg import Object
from semmap_interfaces.msg import Position
from semantic_map.srv import SemanticMap
import math

class SemanticMapNode(Node):
    def __init__(self):
        super().__init__('semantic_map_node')

        self.object_list = []
        self.current_obj_detections = []
        self.robot_position = (0, 0, 0)

#check if topic names are correct!!!
        self.create_subscription(
            Object, 'detected_objects', self.object_callback, 10
        )

        self.create_subscription(
            Position, '/position', self.robot_location_callback, 10 # TODO correct service
        )

        self.create_service(
            SemanticMap, 'get_semantic_map', self.handle_get_semantic_map_request
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

        if not self.current_detections:
            self.current_detections = []

        distance = msg.distance
        angle = msg.angle
        elevation = msg.elevation

        #convert polar (robots pov) to cartesian (map fitting) coordinates
        local_x = distance * math.cos(math.radians(angle))
        local_y = distance * math.sin(math.radians(angle))
        z = distance * math.tan(math.radians(elevation))

        #convert local robot-relative coordinates to global map-relative coordinates
        global_x, global_y = self.to_global_coordinates(local_x, local_y)

        self.object_list.append((msg.tag, global_x, global_y, z))
        self.current_obj_detections.append((msg.tag, global_x, global_y, z))

        #after every 5th detected object, check for ghost objects (might want to change timing of when to check for ghosts?)
        if len(self.object_list) % 5 == 0:
            self.get_logger().info("Checking for ghost objects.")
            self.remove_ghost_objects(detected_objects=self.current_obj_detections)
            self.current_obj_detections = []

        self.get_logger().info(f"Object added to Map: {msg.tag} at ({global_x}, {global_y}, {z})")


    def remove_ghost_objects(self, detected_objects, threshold = 0.2):

        updated_object_list = []

        for obj in self.object_list:
            tag, obj_x, obj_y, obj_z = obj
            is_ghost = True

            for detected_obj in detected_objects:
                detected_tag, detected_x, detected_y, detected_z = detected_obj

                if tag == detected_tag:
                    distance = math.sqrt(
                        (detected_x - obj_x) ** 2 +
                        (detected_y - obj_y) ** 2 +
                        (detected_z - obj_z) ** 2
                    )

                    # If the distance is within the threshold, its regarded as the same object
                    if distance <= threshold:
                        is_ghost = False
                        break


            if is_ghost:
                self.get_logger().info(f"Ghost object removed: {tag} at ({obj_x}, {obj_y}, {obj_z})")
            else:
                updated_object_list.append((detected_tag, detected_x, detected_y, detected_z))


        self.object_list = updated_object_list


    def handle_get_semantic_map_request(self, request, response):

        if not self.object_list:
            self.get_logger().warning("Semantic map is empty.")
            return response

        tags = [obj[0] for obj in self.object_list]
        coordinates = [(obj[1], obj[2], obj[3]) for obj in self.object_list]

        response.positive_and0_x = [coord[0] >= 0 for coord in coordinates]
        response.negative_x = [coord[0] < 0 for coord in coordinates]
        response.positive_and0_y = [coord[1] >= 0 for coord in coordinates]
        response.negative_y = [coord[1] < 0 for coord in coordinates]
        response.object_tags = tags
        response.object_x = [coord[0] for coord in coordinates]
        response.object_y = [coord[1] for coord in coordinates]
        response.object_elevation = [coord[2] for coord in coordinates]

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
