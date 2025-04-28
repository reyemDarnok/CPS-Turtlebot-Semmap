import math
from abc import abstractmethod, abstractproperty
import datetime
from random import choice, shuffle
import random

import numpy as np
from geometry_msgs.msg import Twist

from .astar import AstarMap, ImpossibleRouteException
from .map_helper import free_threshold, obstruction_threshold

def angle_between_vectors(u, v):
    """
    Determine the angle between two vectors.
    :param u: One vector
    :param v: Other vector
    :return: The angle in radians
    """
    ax = u[0]
    ay = u[1]
    bx = v[0]
    by = v[1]
    return math.atan2(ax * by - ay * bx, ax * bx + ay * by)

class MovementTask:
    """Abstract base class for movement tasks."""
    def __init__(self, pathfinding):
        self.pathfinding = pathfinding
        self._finished = False

    @abstractmethod
    def execute(self):
        """
        This checks if this movement task needs to do anything and does it if necessary.
        """
        pass

    def finished(self):
        """
        This method checks if this movement task has finished.
        :return: True if this task can be discarded, false otherwise.
        """
        return self._finished
    def get_angle_offset(self, node, verbose=False):
        """
        Get the offset between the current orientation and the orientation required for the target node
        :param node: The node to get the offset to
        :param verbose: Whether to log
        :return: The offset in radians
        """
        try:
            current_position = self.pathfinding.get_current_position()
        except ValueError:
            # system not yet ready
            self.pathfinding.get_logger().info('Position not yet known')
            raise
        current_angle = current_position.rotation % (2 * math.pi)
        if verbose:
            self.pathfinding.get_logger().info('Current angle: %f' % current_angle)
        # find the vector between the current position and the target
        goal_vector = (int(node.x) - current_position.x, int(node.y) - current_position.y)
        if verbose:
            self.pathfinding.get_logger().info(f'Goal vector: {goal_vector}')
        # find the angle between x-axis and goal_vector
        vector_angle = angle_between_vectors((1,0), goal_vector)
        vector_angle = vector_angle % (2 * math.pi)
        if verbose:
            self.pathfinding.get_logger().info('Target angle: %f' % vector_angle)
        # find difference between vectors
        if vector_angle > current_angle:
            vector_angle += 2 * math.pi
        angle_difference = vector_angle - current_angle
        if angle_difference > math.pi:
            angle_difference = - (2 * math.pi - angle_difference)
        if verbose:
            self.pathfinding.get_logger().info('Angle difference: %f' % angle_difference)
        return angle_difference

    def stop(self):
        """
        Stop all movement
        """
        twist = stop_twist()
        self.pathfinding.command_movement.publish(twist)
        self.pathfinding.get_logger().info("Stopped movement")

def unit_vector(vector):
    """ Returns the unit vector of the vector.  """
    return vector / np.linalg.norm(vector)

def stop_twist():
    """Stop the robot"""
    twist = Twist()
    twist.linear.x = 0.0
    twist.linear.y = 0.0
    twist.linear.z = 0.0
    twist.angular.x = 0.0
    twist.angular.y = 0.0
    twist.angular.z = 0.0
    return twist


def move_twist():
    """Move forward"""
    twist = Twist()
    twist.linear.x = 0.1
    twist.linear.y = 0.0
    twist.linear.z = 0.0
    twist.angular.x = 0.0
    twist.angular.y = 0.0
    twist.angular.z = 0.0
    return twist


def spin_twist():
    """Start spinnig"""
    twist = Twist()
    twist.linear.x = 0.0
    twist.linear.y = 0.0
    twist.linear.z = 0.0
    twist.angular.x = 0.0
    twist.angular.y = 0.0
    twist.angular.z = 0.1
    return twist


class RotationTask(MovementTask):
    """
    This Task spins towards a target node
    """
    def __init__(self, pathfinding, to_align_node):
        super().__init__(pathfinding)
        self.pathfinding.get_logger().info(f'Rotating towards {to_align_node}')
        self.to_align_node = to_align_node
        self.first_run = True

    def execute(self):
        self.pathfinding.get_logger().info('Executing RotationTask')
        tolerance = 1 * math.pi / 180
        # be verbose in first run to log initial angle offset (and calculation)
        angle_offset = self.get_angle_offset(self.to_align_node, verbose=self.first_run)
        self.first_run = False
        if - tolerance < angle_offset < tolerance:
            # offset is within tolerance - finished
            self._finished = True
            self.pathfinding.get_logger().info("Stopped spin")
            self.stop()
        elif angle_offset > 0:
            # right spin
            twist = spin_twist()
            twist.angular.z = -0.1
            self.pathfinding.command_movement.publish(twist)

        else:
            # left spin
            twist = spin_twist()
            twist.angular.z = 0.1
            self.pathfinding.command_movement.publish(twist)





class ForwardTask(MovementTask):
    """
    This Task moves forward until the target node is reached.
    Rotation is assumed to already be correct
    """
    def __init__(self, pathfinding, to_reach_node):
        super().__init__(pathfinding)
        self.pathfinding.get_logger().info(f'Moving towards {to_reach_node}')
        self.to_reach_node = to_reach_node

    def execute(self):
        current_pos = self.pathfinding.get_current_position()
        # check if x and y position is (near) correct, if so, this is finished
        if abs(current_pos.x - self.to_reach_node.x) < 1 and abs(current_pos.y - self.to_reach_node.y) < 1:
            self._finished = True
            self.pathfinding.get_logger().info(f'Reached goal at {self.to_reach_node}')
            self.stop()
        else:
            twist = move_twist()
            self.pathfinding.command_movement.publish(twist)

class SlamSpinTask(MovementTask):
    """
    This Task spins the node in place to enhance the quality of the map
    """
    def __init__(self, pathfinding):
        super().__init__(pathfinding)
        self.target_rotation = random.uniform(- math.pi, math.pi)
        self.started_spin_at = None

    def execute(self):
        try:
            current_position = self.pathfinding.get_current_position()
        except ValueError:
            # system not yet ready
            self.pathfinding.get_logger().info('Position not yet known')
            raise
        current_angle = current_position.rotation % (2 * math.pi)
        angle_offset = (current_angle - self.target_rotation) % (2 * math.pi)
        tolerance = 1 * math.pi / 180
        if - tolerance < angle_offset < tolerance:
            # offset is within tolerance - finished
            self._finished = True
            self.pathfinding.get_logger().info("Stopped spin")
            self.stop()
        elif angle_offset > 0:
            # right spin
            twist = spin_twist()
            twist.angular.z = 0.1
            self.pathfinding.command_movement.publish(twist)

        else:
            # left spin
            twist = spin_twist()
            twist.angular.z = -0.1
            self.pathfinding.command_movement.publish(twist)


class ExploreTask(MovementTask):
    """
    This task explores the map
    """
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
            # all nodes that are nearby unknown nodes, useful for investigating the above
            candidates = list(node for node in self.pathfinding.map.all_nodes() if
                              not node.obstructed and node.neighbors_unknown and not node.complete_unknown)
            print(candidates)
            print(len(candidates))
            print(self.pathfinding.map.height * self.pathfinding.map.width)
            candidates = [candidate for candidate in candidates if any(
                (free_threshold <= neighbor.obstruction <= obstruction_threshold)
                or neighbor.complete_unknown
                for neighbor in candidate.nodes_in_range(4))
                          ]
            if len(candidates) == 0:
                # no nodes are unknown anymore
                self._finished = True
                return
            shuffle(candidates)
            # Try navigating near target nodes
            for candidate in candidates:
                try:
                    self.pathfinding.get_logger().info(f"Trying {candidate}")
                    movement_task = AbsoluteMovementTask(self.pathfinding, candidate)
                    self.task = movement_task
                    return
                except ImpossibleRouteException:
                    print("route impossible")
                    pass
        # no interesting nodes can be reached - finished exploring
        exit(5)
        self._finished = True

class RevisitTask(MovementTask):
    """
    A Task to revisit locations long not visited
    """
    def __init__(self, pathfinding):
        super().__init__(pathfinding)
        self.task = None

    def execute(self):
        if (self.task is not None) and (not self.task.finished()):
            self.task.execute()
        else:
            position_history = self.pathfinding._get_position_history()
            area_map = self.pathfinding.map
            oldest_node = area_map.all_nodes()[0]
            best_score = float("inf")
            most_recent_time = max(position.timestamp for position in position_history)
            all_nodes = area_map.all_nodes()
            # sort nodes by least recent known information
            all_nodes = sorted(all_nodes, key=lambda current_node: self._score_node(current_node,
                                                                       position_history, most_recent_time))
            for node in all_nodes:
                # move to the first node that is navigable
                try:
                    movement_task = AbsoluteMovementTask(self.pathfinding, oldest_node)
                    self.task = movement_task
                    self.pathfinding.get_logger().info(f'Creating Navigation to {oldest_node.x}/{oldest_node.y}')
                    return
                except ImpossibleRouteException:
                    pass

    @staticmethod
    def _score_node(node, path_history, time):
        """
        Scores a given node
        :param node: The node to score
        :param path_history: A history of locations of the robot
        :param time: The current time
        :return: A score for the node. Bigger is better.
        """
        score = 0
        e_factor = 0.98851 # halflife of 1 minute (x^60 = 1/2)
        for position in path_history:
            distance = (position.x - node.x) ** 2 + (position.y - node.y) ** 2
            time_delta = time - position.timestamp
            score += distance * (e_factor ** time_delta)
        return score

class AbsoluteMovementTask(MovementTask):
    """
    A Task to move the Robot to a given position
    """
    def __init__(self, pathfinding, target_node):
        """
        :param pathfinding: The pathfinding node that executes this task
        :param target_node: The target to navigate to
        :raises ImpossibleRouteException: If the target node is not reachable
        """
        super().__init__(pathfinding)
        self.pathfinding.get_logger().info(f'Creating movement towards {target_node}')
        self.target_node = target_node
        self.task_list = []
        self.find_path()

    def execute(self):
        self.task_list = [task for task in self.task_list if not task.finished()]
        if len(self.task_list) == 0:
            # if no task is assigned, check if current position is target
            try:
                current_position = self.pathfinding.get_current_position()

            except ValueError:
                return
            if abs(current_position.x - self.target_node.x) < 2 and abs(current_position.y - self.target_node.y) < 2:
                # if current position is target, this task is finished
                self._finished = True
                self.pathfinding.get_logger().info(
                    f'Finished route to {self.target_node}')

            else:
                # if not, navigate to the target
                try:
                    self.find_path()
                except ImpossibleRouteException:
                    self.pathfinding.get_logger().info(f'Could not complete Route to {self.target_node} due to new obstacle')
                    self._finished = True
        else:
            # execute the current task if any exist
            self.task_list[-1].execute()

    def find_path(self):
        """
        Find the path to the target node and create subtasks to navigate there
        """
        self.pathfinding.get_logger().info("Finding path")
        try:
            current_pos = self.pathfinding.get_current_position()
            self.pathfinding.get_logger().info(f'Creating movement towards {self.target_node}')
        except ValueError:
            self.pathfinding.get_logger().info('Position not yet known, aborting movement planning')
            raise

        astar_map = AstarMap(self.pathfinding.map, current_pos, self.pathfinding.get_logger())
        end_node = astar_map.run_astar(self.target_node)
        self.pathfinding.get_logger().info(f"Navigating towards {self.target_node} from {current_pos}")
        current_pos_node = self.pathfinding.map[int(current_pos.y)][int(current_pos.x)]
        traversal_node = end_node
        while not self.pathfinding.map.has_line_of_sight(current_pos_node, traversal_node):
            if traversal_node.predecessor is not None:
                traversal_node = traversal_node.predecessor
            else:
                raise ImpossibleRouteException("No line of sight to path found")
        #path = []
        # trace the path from the target node to the current node
        self.pathfinding.get_logger().info(f"Moving towards {traversal_node}")
        self.task_list = [SlamSpinTask(self.pathfinding),
                          ForwardTask(self.pathfinding, traversal_node.node),
                          RotationTask(self.pathfinding, traversal_node.node)]
