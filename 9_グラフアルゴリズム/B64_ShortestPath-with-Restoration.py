from heapq import heappop, heappush
from collections import defaultdict

def dijkstra(st):
    INF = float('inf')
    dist = [INF] * N
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
            par[nv] = v
            heappush(hq, (c + nc, nv))
    return dist


N, M = map(int, input().split())
g = defaultdict(list)
for _ in range(M):
    x, y, c = map(int, input().split())
    x, y = x - 1, y - 1
    g[x].append((c, y))
    g[y].append((c, x))

st = 0
par = [None] * N
dist = dijkstra(st)

v = N - 1
ans = [v + 1]
while v:
    v = par[v]
    ans.append(v + 1)
print(*ans[::-1])