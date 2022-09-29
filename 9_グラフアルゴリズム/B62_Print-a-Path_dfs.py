import sys
sys.setrecursionlimit(10 ** 7)
from collections import defaultdict

def dfs(v, route):
    if v == N - 1:
        print(*route)
        exit()
    for nv in g[v]:
        if seen[nv]:
            continue
        seen[nv] = 1
        route.append(nv + 1)
        dfs(nv, route)
        route.pop()


N, M = map(int, input().split())
g = defaultdict(list)
for _ in range(M):
    a, b = map(lambda x: int(x) - 1, input().split())
    g[a].append(b)
    g[b].append(a)

seen = [0] * N
seen[0] = 1
dfs(0, [1])
