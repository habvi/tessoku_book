import sys
sys.setrecursionlimit(10 ** 7)
from collections import defaultdict

def dfs(v, p):
    for nv in g[v]:
        if nv == p:
            continue
        dfs(nv, v)
        rank[v] = max(rank[v], rank[nv] + 1)


N, T = map(int, input().split())
T -= 1
g = defaultdict(list)
for _ in range(N - 1):
    a, b = map(lambda x: int(x) - 1, input().split())
    g[a].append(b)
    g[b].append(a)

rank = [0] * N
dfs(T, -1)
print(*rank)