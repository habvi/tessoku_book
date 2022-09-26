from heapq import heappop, heappush
from collections import defaultdict

def dijkstra(st):
    dist[st] = 0
    hq = [(0, st)]
    while hq:
        c, v = heappop(hq)
        if c > dist[v]:
            continue
        for nc, nv in g[v]:
            if c + nc >= dist[nv]:
                continue
            dist[nv] = c + nc
            heappush(hq, (c + nc, nv))


N, M = map(int, input().split())
g = defaultdict(list)
base = 10 ** 5
for _ in range(M):
    x, y, c, d = map(int, input().split())
    x, y = x - 1, y - 1
    c = c * base - (d == 1)
    g[x].append((c, y))
    g[y].append((c, x))

st = 0
INF = float('inf')
dist = [INF] * N
dijkstra(st)

tree = base - dist[-1] % base
print((dist[-1] + tree) // base, tree)