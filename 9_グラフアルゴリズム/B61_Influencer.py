from collections import defaultdict

N, M = map(int, input().split())
g = defaultdict(list)
for _ in range(M):
    a, b = map(lambda x: int(x) - 1, input().split())
    g[a].append(b)
    g[b].append(a)

cand = [(len(g[v]), v + 1) for v in range(N)]
cand.sort()
print(cand[-1][1])