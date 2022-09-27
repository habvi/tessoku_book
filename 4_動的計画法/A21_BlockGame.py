N = int(input())
pa = [tuple(map(int, input().split())) for _ in range(N)]

INF = float('inf')
dp = [[-INF] * N for _ in range(N)]
dp[0][N - 1] = 0
for width in reversed(range(1, N)):
    for l in range(N - width):
        r = l + width
        p, a = pa[l]
        p -= 1
        if l < p <= r:
            dp[l + 1][r] = max(dp[l + 1][r], dp[l][r] + a)
        else:
            dp[l + 1][r] = max(dp[l + 1][r], dp[l][r])
        p, a = pa[r]
        p -= 1
        if l <= p < r:
            dp[l][r - 1] = max(dp[l][r - 1], dp[l][r] + a)
        else:
            dp[l][r - 1] = max(dp[l][r - 1], dp[l][r])

ans = 0
for i in range(N):
    ans = max(ans, dp[i][i])
print(ans)
