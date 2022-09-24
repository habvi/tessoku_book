N, W = map(int, input().split())

INF = float('inf')
mx = 1000 * N
dp = [INF] * (mx + 1)
dp[0] = 0
for _ in range(N):
    w, v = map(int, input().split())
    for i in reversed(range(mx + 1)):
        nxt = i + v
        if nxt <= mx:
            dp[nxt] = min(dp[nxt], dp[i] + w)

for v in reversed(range(mx + 1)):
    if dp[v] <= W:
        print(v)
        exit()