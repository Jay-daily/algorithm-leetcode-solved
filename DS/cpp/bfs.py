from collections import deque

class Graph:
    def __init__(self):
        self.adj_list = {}

    def add_edge(self, start, to):
        if start not in self.adj_list:
            self.adj_list[start] = []
        if to not in self.adj_list:
            self.adj_list[to] = []
        self.adj_list[start].append(to)

    def bfs(self, start):
        visited = set()
        queue = deque([start])

        while queue:
            node = queue.popleft()
            if node not in visited:
                print(node, end=' ')
                visited.add(node)
                for neighbor in self.adj_list[node]:
                    if neighbor not in visited:
                        queue.append(neighbor)

graph = Graph()
graph.add_edge(0,1)
graph.add_edge(1,2)
graph.add_edge(1,3)
graph.add_edge(2,4)
graph.add_edge(4,2)

graph.bfs(0)
