import logging
from itertools import product
from typing import List

obstruction_threshold = 0.65
free_threshold = 0.25
resolution = 0.05 # in meters
bot_size = 4 # radius in resolution steps - intentionally to large

class AreaMap:
    def __init__(self, height: int, width: int, data_2d: List[List[float]], logger):
        self.height = height
        if len(data_2d[0]) != height:
            logger.warning('Reported height of map does not match data height, using data height')
            self.height = len(data_2d[0])
        self.width = width
        if len(data_2d) != width:
            logger.warning('Reported width of map does not match data width, using data width')
            self.width = len(data_2d)
        self.node_2d = []
        self.logger = logger
        for x, row in enumerate(data_2d):
            self.node_2d.append([])
            for y, value in enumerate(row):
                self.node_2d[x].append(AreaNode(x, y, value, self))
        for node in self.all_nodes():
            node.post_init()


    def all_nodes(self):
        return [x for column in self.node_2d for x in column]

    def __getitem__(self, item):
        return self.node_2d[item]

    def __len__(self):
        return len(self.node_2d)

    @classmethod
    def from_msg(cls, msg, logger):
        width = msg.info.width
        height = msg.info.height
        data = msg.data
        normalized_data = [normalize(x) for x in data]
        data_2d = [normalized_data[i:i+width] for i in range(0, len(normalized_data), width)]
        return cls(height, width, data_2d, logger)

class AreaNode:
    def __init__(self, x, y, obstruction, parent_map):
        self.x = x
        self.y = y
        self.obstruction = obstruction
        self.parent_map = parent_map
        self.complete_unknown = obstruction == -1
        self.obstructed = None

    def post_init(self):
        self.is_obstruction_within(bot_size)

    def is_obstruction_within(self, search_distance: int) -> bool:
        x_coords = [x for x in range(self.x - search_distance, self.x + search_distance)
                    if 0 <= x < self.parent_map.width]
        y_coords = [y for y in range(self.x - search_distance, self.x + search_distance)
                    if 0 <= y < self.parent_map.height]
        return any(node.obstruction > obstruction_threshold for node in (
            self.parent_map[x][y] for x, y in product(x_coords, y_coords)
        ))


def normalize(x):
    if x == -1:
        return x
    else:
        return x / 100