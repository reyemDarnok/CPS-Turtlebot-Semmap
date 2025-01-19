import logging
from argparse import ArgumentParser
from enum import Enum, auto
from pathlib import Path
from .priority_queue import PriorityQueue
import rclpy
import sys
from rclpy.node import Node
from semmap_interfaces.msg import EmergencyStop
from geometry_msgs.msg import Twist

from .emergency_stop import Causes


class PathfindingNode(Node):
    def __init__(self) -> None:
        super().__init__("PathfindingNode")
        self.task_list = [self.explore]
        self.e_stop_mode = False
        self.main_loop_timer = self.create_timer(0.2, self.navigate)
        self.command_movement = self.create_publisher(Twist, "/cmd_vel", 10)
        self._full_turn_rate = self.create_rate(1, self.get_clock())

    def navigate(self):
        if not self.e_stop_mode:
            self.task_list[-1]() # execute the most recent task

    def emergency_stop(self, message):
        self.stop()
        self.e_stop_mode = True
        if message.solvable_by_backup:
            self.backup() # move backwards
            self.e_stop_mode = False
        elif message.cause == Causes.ALL_CLEAR:
            self.task_list = [task for task in self.task_list if task is not self.stop]
            self.e_stop_mode = False
        else:
            self.task_list.append(self.stop)


    def backup(self):
        logging.info("Backing turtlebot up")
        twist = Twist()
        twist.linear.x = 0.0
        twist.linear.y = 0.0
        twist.linear.z = 0.0
        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = 1.0
        self.command_movement.publish(twist)
        self._full_turn_rate.sleep()
        twist = Twist()
        twist.linear.x = 1.0
        twist.linear.y = 0.0
        twist.linear.z = 0.0
        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = 0.0
        self.command_movement.publish(twist)
        self._full_turn_rate.sleep()
        twist = Twist()
        twist.linear.x = 0.0
        twist.linear.y = 0.0
        twist.linear.z = 0.0
        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = 0.0
        self.command_movement.publish(twist)
        self.get_logger().info("Finished backing up turtlebot")

    def create_absolute_movement_task(self, target):
        def movement_task():
            current_pos = None
            astar_map = self._create_astar_graph(current_pos, target)
            astar_map.priority_queue = PriorityQueue()
            while not len(astar_map.priority_queue) == 0:
                prio, node = astar_map.priority_queue.pop()
                if node == target:
                    break
                for distance, neighbor in node.neighbors:
                    n_prio = prio + distance
                    if n_prio < prio:
                        neighbor.predecessor = node
                        astar_map.priority_queue.update_elem(distance, (n_prio, neighbor))
            start_node = None
            current_node = astar_map.target_node
            while current_node.predecessor is not None:
                start_node = current_node
            if self.is_aligned(start_node): # TODO implement
                twist = Twist()
                twist.linear.x = 0.0
                twist.linear.y = 0.0
                twist.linear.z = 0.0
                twist.angular.x = 1.0
                twist.angular.y = 0.0
                twist.angular.z = 0.0
                self.command_movement.publish(twist)
                self.get_logger().info("Moving to next node")
            else:
                self.align_to(start_node) # TODO implement
        return movement_task

    def stop(self):
        twist = Twist()
        twist.linear.x = 0.0
        twist.linear.y = 0.0
        twist.linear.z = 0.0
        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = 0.0
        self.command_movement.publish(twist)
        self.get_logger().info("Stopping turtlebot")

    def explore(self):
        pass # TODO

    def revisit(self):
        pass # TODO

    def return_to_dock(self):
        pass # TODO


def main():
    rclpy.init()
    args = parse_args()
    node = PathfindingNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


def parse_args():
    parser = ArgumentParser()
    return parser.parse_args()


if __name__ == "__main__":
    main()
