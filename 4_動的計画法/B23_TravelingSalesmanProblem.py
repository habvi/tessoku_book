def dist(x1, y1, x2, y2) -> float:
    return ((x1 - x2)**2 + (y1 - y2)**2) ** 0.5


N = int(input())
xy = [tuple(map(int, input().split())) for _ in range(N)]

INF = float('inf')
dp = [[INF] * (1 << N) for _ in range(N)]
start = 0
x1, y1 = xy[0]
for i, (x2, y2) in enumerate(xy):
    if start == i:
        continue
    cost = dist(x1, y1, x2, y2)
    dp[i][1 << i] = cost

for pre in range(1 << N):
    for i, (x1, y1) in enumerate(xy):
        if not pre >> i & 1:
            continue
        for j, (x2, y2) in enumerate(xy):
            if (i == j) or (pre >> j & 1):
                continue
            cost = dist(x1, y1, x2, y2)
            nxt = pre | 1 << j
            dp[j][nxt] = min(dp[j][nxt], dp[i][pre] + cost)
print(dp[0][-1])
