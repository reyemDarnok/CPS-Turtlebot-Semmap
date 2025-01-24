from itertools import product
from typing import List

obstruction_threshold = 0.65
free_threshold = 0.25
resolution = 0.05 # in meters
bot_size = 4 # radius in resolution steps - intentionally to large

class AreaMap:
    def __init__(self, height: int, width: int, data_2d: List[List[float]]):
        self.data_2d = data_2d
        self.height = height
        self.width = width

    def all_nodes(self):
        return [x for x in [column for column in self.data_2d]]

    def __getitem__(self, item):
        return self.data_2d[item]

    def __len__(self):
        return len(self.data_2d)

    @classmethod
    def create_from_subscription(cls, msg):
        width = msg.info.width
        height = msg.info.height
        data = msg.data
        normalized_data = [normalize(x) for x in data]
        data_2d = [normalized_data[i:i+width] for i in range(0, len(normalized_data), width)]
        return cls(height, width, data_2d)

class AreaNode:
    def __init__(self, x, y, obstruction, parent_map):
        self.x = x
        self.y = y
        self.obstruction = obstruction
        self.parent_map = parent_map
        self.obstructed = self.is_obstruction_within(bot_size)

    def is_obstruction_within(self, search_distance: int) -> bool:
        x_coords = [x for x in range(self.x - search_distance, self.x + search_distance)
                    if 0 <= x < len(self.parent_map)]
        y_coords = [y for y in range(self.x - search_distance, self.x + search_distance)
                    if 0 <= y < len(self.parent_map[0])]
        return any(node.obstruction > obstruction_threshold for node in (
            self.parent_map[x][y] for x, y in product(x_coords, y_coords)
        ))

def normalize(x):
    if x == -1:
        return x
    else:
        return x / 100