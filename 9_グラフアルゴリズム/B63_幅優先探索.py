from collections import deque

DXY = [(0, 1), (1, 0), (0, -1), (-1, 0)]

def bfs(sy, sx):
    dist = [[-1] * C for _ in range(R)]
    dist[sy][sx] = 0
    que = deque([])
    que.append((sy, sx))
    while que:
        y, x = que.popleft()
        for dy, dx in DXY:
            ny, nx = y + dy, x + dx
            if not (0 <= ny < R and 0 <= nx < C) or S[ny][nx] == '#':
                continue
            if dist[ny][nx] != -1:
                continue
            dist[ny][nx] = dist[y][x] + 1
            que.append((ny, nx))
    return dist[gy][gx]


R, C = map(int, input().split())
sy, sx = map(lambda x: int(x) - 1, input().split())
gy, gx = map(lambda x: int(x) - 1, input().split())
S = [input() for _ in range(R)]

print(bfs(sy, sx))