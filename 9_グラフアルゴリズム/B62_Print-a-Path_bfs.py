from collections import defaultdict, deque

def bfs(u):
    seen = [0] * N
    seen[u] = 1
    que = deque([])
    que.append(u)
    while que:
        v = que.popleft()
        for nv in g[v]:
            if seen[nv]:
                continue
            seen[nv] = 1
            par[nv] = v
            que.append(nv)

N, M = map(int, input().split())
g = defaultdict(list)
for i in range(M):
    a, b = map(lambda x: int(x) - 1, input().split())
    g[a].append(b)
    g[b].append(a)

par = [-1] * N
bfs(0)

v = par[-1]
ans = [N]
while v != -1:
    ans.append(v + 1)
    v = par[v]
print(*ans[::-1])