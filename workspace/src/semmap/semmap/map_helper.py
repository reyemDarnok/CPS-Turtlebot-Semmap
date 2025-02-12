import logging
from itertools import product
from typing import List

obstruction_threshold = 0.65
"""Above this threshold nodes are considered blocked"""
free_threshold = 0.25
"""Below this threshold nodes are considered free"""
resolution = 0.05
"""The resolution of the map in meters"""
bot_size = 4
"""The radius of the bot in resolution steps, rounded up"""

class AreaMap:
    """A class representing the explored area"""
    def __init__(self, height: int, width: int, data_2d: List[List[float]], logger):
        self.height = height
        if len(data_2d) != height:
            logger.warning('Reported height of map does not match data height, using data height')
            self.height = len(data_2d[0])
        self.width = width
        if len(data_2d[0]) != width:
            logger.warning('Reported width of map does not match data width, using data width')
            self.width = len(data_2d)
        self.node_2d = []
        self.logger = logger
        for y, row in enumerate(data_2d):
            self.node_2d.append([])
            for x, value in enumerate(row):
                self.node_2d[y].append(AreaNode(x, y, value, self, logger))
        for node in self.all_nodes():
            node.post_init()


    def all_nodes(self):
        """Returns all nodes in the map, row by row"""
        return [x for row in self.node_2d for x in row]

    def __getitem__(self, item):
        """indexes into the 2d map"""
        return self.node_2d[item]

    def __len__(self):
        """Number of rows in the map"""
        return len(self.node_2d)

    @classmethod
    def from_msg(cls, msg, logger):
        """
        Create a map from a ros 2 message
        :param msg: The ros 2 message
        :param logger: The logger of the calling ros2 node
        :return: An AreaMap instance from the ros 2 message
        """
        width = msg.info.width
        height = msg.info.height
        data = msg.data
        normalized_data = [normalize(x) for x in data]
        data_2d = [normalized_data[i:i+width] for i in range(0, len(normalized_data), width)]
        data_2d.reverse()
        return cls(height, width, data_2d, logger)

class AreaNode:
    """A single resolution x resolution square of the map"""
    def __init__(self, x, y, obstruction, parent_map, logger):
        self.x = x
        self.y = y
        self.obstruction = obstruction
        self.parent_map = parent_map
        self.complete_unknown = obstruction == -1
        self.obstructed = None
        self.neighbors = []
        self.logger = logger

    def __str__(self):
        return f"{self.x}/{self.y}"

    def post_init(self):
        """Checks the nodes surroundings after all nodes have been created"""
        self.obstructed = self.is_obstruction_within(bot_size)
        self.neighbors = self.nodes_in_range(1)



    def is_obstruction_within(self, search_distance: int) -> bool:
        """
        Find all obstructions within a distance of search_distance
        :param search_distance: The distance to search
        :return: if any of the considered nodes were obstructed
        """
        return any(node.obstruction > obstruction_threshold for node in self.nodes_in_range(search_distance))

    def nodes_in_range(self, search_distance):
        """
        Returns all nodes within a distance of search_distance
        Diagonal, horizontal and vertical travel are one unit of distance
        :param search_distance: The maximum Distance for the node
        :return: The nodes within a distance of search_distance
        """
        return (
            self.parent_map[y][x] for x, y in product(*self._coords_in_range(search_distance))
        )

    def _coords_in_range(self, search_distance):
        """
        Find all coordinates within a distance of search_distance
        :param search_distance: The distance to search
        :return: A tupel of all valid x coordinates and y coordinates
        """
        x_coords = [x for x in range(self.x - search_distance, self.x + search_distance + 1)
                    if 0 <= x < self.parent_map.width and x != self.x]
        y_coords = [y for y in range(self.y - search_distance, self.y + search_distance + 1)
                    if 0 <= y < self.parent_map.height and y != self.y]
        return x_coords, y_coords


def normalize(x):
    """
    Transforms the obstruction values from the ros2 message to a normalized value
    :param x: The obstruction value from the ros2 message
    :return: The obstruction value for this algorithm
    """
    if x == -1:
        return x
    else:
        return x / 100