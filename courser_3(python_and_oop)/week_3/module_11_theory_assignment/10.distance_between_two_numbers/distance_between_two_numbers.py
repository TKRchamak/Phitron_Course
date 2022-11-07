class Graph:
    def __init__(self, first, second):
        self.first = first
        self.second = second

    def find_distance(self):
        x = self.first[0] - self.second[0]
        y = self.first[1] - self.second[1]
        if (x < 0):
            x = x * -1

        if (y < 0):
            y = y * -1

        return (x, y)


if __name__ == '__main__':
    curr_graph = Graph((-3, -3), (3, 3))
    res = curr_graph.find_distance()
    print(res)
