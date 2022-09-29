# B22

N = int(input())
A = list(map(int, input().split())) + [0]
B = list(map(int, input().split())) + [0, 0]

INF = float('inf')
dp = [INF] * N
dp[0] = 0
for i in range(N):
    if i + 1 < N:
        dp[i + 1] = min(dp[i + 1], dp[i] + A[i])
    if i + 2 < N:
        dp[i + 2] = min(dp[i + 2], dp[i] + B[i])
print(dp[-1])