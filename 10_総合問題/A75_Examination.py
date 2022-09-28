N = int(input())
td = [tuple(map(int, input().split())) for _ in range(N)]

td.sort(key=lambda x: (x[1], x[0]))
INF = float('inf')
mx = 1440
dp = [-INF] * (mx + 1)
dp[0] = 0
for t, d in td:
    for i in reversed(range(mx + 1)):
        nxt = i + t
        if nxt <= min(mx, d):
            dp[nxt] = max(dp[nxt], dp[i] + 1)
print(max(dp))
