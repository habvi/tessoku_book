N, M = map(int, input().split())
A = []
for _ in range(M):
    a = int(''.join(input().split()), 2)
    A.append(a)

INF = float('inf')
dp = [INF] * (1 << N)
dp[0] = 0
for pre in range(1 << N):
    for a in sorted(A):
        nxt = pre | a
        dp[nxt] = min(dp[nxt], dp[pre] + 1)
ans = dp[-1]
print(ans if ans != INF else -1)