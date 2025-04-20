def floyd_warshall(graph):
    # Deep copy of the graph without using map/lambda
    V = len(graph)
    dist = []
    for i in range(V):
        row = []
        for j in range(V):
            row.append(graph[i][j])
        dist.append(row)

    # Core Floyd-Warshall algorithm
    for k in range(V):
        for i in range(V):
            for j in range(V):
                if dist[i][k] + dist[k][j] < dist[i][j]:
                    dist[i][j] = dist[i][k] + dist[k][j]
    return dist

# Graph with 'INF' representing no direct edge
INF = 99999
graph = [
    [0, 3, INF, 7],
    [8, 0, 2, INF],
    [5, INF, 0, 1],
    [2, INF, INF, 0]
]

# Run and print the shortest paths
result = floyd_warshall(graph)
for row in result:
    print(row)
