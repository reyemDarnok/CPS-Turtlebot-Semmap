import math
from abc import abstractmethod, abstractproperty
import datetime

import numpy as np
from geometry_msgs.msg import Twist

from .astar import AstarMap, ImpossibleRouteException
from .map_helper import free_threshold, obstruction_threshold


class MovementTask:
    def __init__(self, pathfinding):
        self.pathfinding = pathfinding
        self._finished = False

    @abstractmethod
    def execute(self):
        pass

    def finished(self):
        return self._finished
    def get_angle_offset(self, node):
        try:
            current_position = self.pathfinding.get_current_position()
        except ValueError:
            self.pathfinding.get_logger().info('Position not yet known')
            raise
        current_angle = current_position.rotation % (2 * math.pi)
        goal_vector = (int(current_position.x) - node.x, int(current_position.y) - node.y)
        # noinspection PyTypeChecker
        goal_vector = unit_vector(goal_vector)
        vector_angle = np.arccos(np.clip(np.dot(goal_vector, (-1, 0)), -1.0, 1.0))
        vector_angle = vector_angle % (2 * math.pi)
        if vector_angle > current_angle:
            vector_angle += 2 * math.pi
        angle_difference = vector_angle - current_angle
        if angle_difference > math.pi:
            angle_difference = - (2 * math.pi - angle_difference)
        return angle_difference

    def stop(self):
        twist = stop_twist()
        self.pathfinding.command_movement.publish(twist)
        self.pathfinding.get_logger().info("Stopped movement")

def unit_vector(vector):
    """ Returns the unit vector of the vector.  """
    return vector / np.linalg.norm(vector)

def stop_twist():
    twist = Twist()
    twist.linear.x = 0.0
    twist.linear.y = 0.0
    twist.linear.z = 0.0
    twist.angular.x = 0.0
    twist.angular.y = 0.0
    twist.angular.z = 0.0
    return twist


def move_twist():
    twist = Twist()
    twist.linear.x = 0.1
    twist.linear.y = 0.0
    twist.linear.z = 0.0
    twist.angular.x = 0.0
    twist.angular.y = 0.0
    twist.angular.z = 0.0
    return twist


def spin_twist():
    twist = Twist()
    twist.linear.x = 0.0
    twist.linear.y = 0.0
    twist.linear.z = 0.0
    twist.angular.x = 0.0
    twist.angular.y = 0.0
    twist.angular.z = 0.1
    return twist


class RotationTask(MovementTask):
    def __init__(self, pathfinding, to_align_node):
        super().__init__(pathfinding)
        self.to_align_node = to_align_node

    def execute(self):
        tolerance = 1 * math.pi / 180
        angle_offset = self.get_angle_offset(self.to_align_node)
        if - tolerance < angle_offset < tolerance:
            self._finished = True
            self.pathfinding.get_logger().info("Stopped spin")
            self.stop()
        elif angle_offset > 0:
            twist = spin_twist()
            twist.angular.z = 0.1
            self.pathfinding.command_movement.publish(twist)

        else:
            twist = spin_twist()
            twist.angular.z = -0.1
            self.pathfinding.command_movement.publish(twist)





class ForwardTask(MovementTask):
    def __init__(self, pathfinding, to_reach_node):
        super().__init__(pathfinding)
        self.to_reach_node = to_reach_node

    def execute(self):
        current_pos = self.pathfinding.get_current_position()
        if abs(current_pos.x - self.to_reach_node.x) < 1 and abs(current_pos.y - self.to_reach_node.y) < 1:
            self._finished = True
            self.pathfinding.get_logger().info(f'Reached goal at {self.to_reach_node}')
            self.stop()
        else:
            twist = move_twist()
            self.pathfinding.command_movement.publish(twist)

class SlamSpinTask(MovementTask):
    def __init__(self, pathfinding):
        super().__init__(pathfinding)
        self.started_spin_at = None

    def execute(self):
        if (self.started_spin_at is None
                or self.started_spin_at + datetime.timedelta(seconds=2) > datetime.datetime.now()):
            self.stop()
            twist = move_twist()
            self.pathfinding.command_movement.publish(twist)
            if self.started_spin_at is None:
                self.started_spin_at = datetime.datetime.now()
        else:
            self.stop()
            self._finished = True


class ExploreTask(MovementTask):
    def __init__(self, pathfinding):
        super().__init__(pathfinding)
        self.task = None

    def execute(self):
        if (self.task is not None) and (not self.task.finished()):
            self.task.execute()
        else:
            self.pathfinding.get_logger().info("Executing explore task")
            area_map = self.pathfinding.map
            if area_map is None:
                self.pathfinding.get_logger().info("No map available, waiting")
                return  # System not yet initialized
            for node in area_map.all_nodes():
                if node.complete_unknown or free_threshold < node.obstruction < obstruction_threshold:
                    try:
                        movement_task = AbsoluteMovementTask(self.pathfinding, node)
                        self.task = movement_task
                        self.pathfinding.get_logger().info(f'Created Navigation to {node}')
                        return
                    except ImpossibleRouteException:
                        pass

class RevisitTask(MovementTask):
    def __init__(self, pathfinding):
        super().__init__(pathfinding)
        self.task = None

    def execute(self):
        if (self.task is not None) and (not self.task.finished()):
            self.task.execute()
        else:
            position_history = self.pathfinding.get_path_history()
            area_map = self.pathfinding.map
            oldest_node = area_map.all_nodes()[0]
            best_score = float("inf")
            most_recent_time = max(position.timestamp for position in position_history)
            for node in area_map.all_nodes():
                if not node.obstructed:
                    node_score = self._score_node(node, position_history, most_recent_time)
                    if node_score < best_score:
                        best_score = node_score
                        oldest_node = node
            try:
                movement_task = AbsoluteMovementTask(self.pathfinding, oldest_node)
                self.task = movement_task
                self.pathfinding.get_logger().info(f'Creating Navigation to {oldest_node.x}/{oldest_node.y}')
                return
            except ImpossibleRouteException:
                pass

    @staticmethod
    def _score_node(node, path_history, time):
        score = 0
        e_factor = 0.98851 # halflife of 1 minute (x^60 = 1/2)
        for position in path_history:
            distance = (position.x - node.x) ** 2 + (position.y - node.y) ** 2
            time_delta = time - position.timestamp
            score += distance * (e_factor ** time_delta)
        return score

class AbsoluteMovementTask(MovementTask):
    def __init__(self, pathfinding, target_node):
        super().__init__(pathfinding)
        self.pathfinding.get_logger().info(f'Creating movement towards {target_node}')
        self.target_node = target_node
        self.task_list = []
        self.find_path()

    def execute(self):
        self.task_list = [task for task in self.task_list if not task.finished()]
        if len(self.task_list) == 0:
            current_position = self.pathfinding.get_current_position()
            if abs(current_position.x - self.target_node.x) < 1 and abs(current_position.y - self.target_node.y) < 1:
                self._finished = True
                self.pathfinding.get_logger().info(
                    f'Finished route to {self.target_node}')

            else:
                try:
                    self.find_path()
                except ImpossibleRouteException:
                    self.pathfinding.get_logger().info(f'Could not complete Route to {self.target_node} due to new obstacle')
                    self._finished = True
        else:
            self.task_list[-1].execute()

    def find_path(self):
        try:
            current_pos = self.pathfinding.get_current_position()
            #self.target_node = self.target_node.parent_map[int(current_pos.x)][int(current_pos.y) + 5]  # TODO debug intercept
        except ValueError:
            self.pathfinding.get_logger().info('Position not yet known, aborting movement planning')
            return
        astar_map = AstarMap(self.pathfinding.map, current_pos, self.pathfinding.get_logger())
        end_node = astar_map.run_astar(self.target_node)

        self.pathfinding.get_logger().info(f"Navigating towards {self.target_node} from {current_pos}")
        current_node = end_node
        path = []
        while current_node.predecessor is not None:# and not self.pathfinding.has_sight_line(current_pos, current_node):
            #self.pathfinding.get_logger().info(f'No sight line from {current_pos.x}/{current_pos.y} to {current_node}, checking next node')
            path = [current_node] + path
            current_node = current_node.predecessor
        print(*path)
        start_node = current_node.node
        self.task_list = [SlamSpinTask(self.pathfinding),
                          ForwardTask(self.pathfinding, start_node),
                          RotationTask(self.pathfinding, start_node)]

done_once = False