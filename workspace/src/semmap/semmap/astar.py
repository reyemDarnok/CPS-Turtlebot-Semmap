from typing import Optional, List

from .map_helper import AreaMap
from .priority_queue import PriorityQueue

class ImpossibleRouteException(Exception):
    pass


def manhatten_distance(node_a, node_b):
        return abs(node_a.x - node_b.x) + abs(node_a.y - node_b.y)

class AstarNode:
    def __init__(self, node, area_map: 'AreaMap', astar_map: 'AstarMap'):
        self.x = node.x
        self.y = node.y
        self.node = node
        self.predecessor: Optional[AstarNode] = None
        self.neighbors = []
        self.parent_map = area_map
        self.obstructed = node.obstructed
        self.score = float('inf')
        self.astar_map = astar_map

    def __hash__(self):
        return hash((self.x, self.y))

    def __eq__(self, other):
        return self.x == other.x and self.y == other.y

    def __str__(self):
        return f"{self.x}/{self.y}"

    def post_init(self):
        self.neighbors = [self.astar_map.nodes_2d[neighbor.y][neighbor.x] for neighbor in self.node.neighbors]

class AstarMap:
    def __init__(self, area_map, pos, logger, heuristic=manhatten_distance):
        self.logger = logger
        self.heuristic = heuristic
        self.priority_queue = PriorityQueue()
        self.nodes_2d: List[List[AstarNode]] = []
        for y, row in enumerate(area_map):
            self.nodes_2d.append([])
            for x, node in enumerate(row):
                astar_node = AstarNode(node, area_map, self)
                self.nodes_2d[y].append(astar_node)

        pos_node = self.nodes_2d[int(pos.y)][int(pos.x)]
        pos_node.score = 0
        self.priority_queue.put((0, pos_node))
        for node in (n for row in self.nodes_2d for n in row):
            node.post_init()


    def run_astar(self, target):
        target = self.nodes_2d[int(target.y)][int(target.x)]
        while not len(self.priority_queue) == 0:
            node_score, node = self.priority_queue.pop()
            if node == target:
                self.logger.info('Finished the path to target')
                return node
            for neighbor in node.neighbors:
                if neighbor.obstructed:
                    continue
                neighbor_score_via_current = node_score + 1 + self.heuristic(neighbor, target)
                if neighbor_score_via_current < neighbor.score:
                    neighbor.predecessor = node
                    neighbor.score = neighbor_score_via_current
                    updated = self.priority_queue.update_elem(neighbor, (neighbor_score_via_current, neighbor))
                    if not updated:
                        self.priority_queue.put((neighbor_score_via_current, neighbor))
        raise ImpossibleRouteException(f"No Route to {target} found")
