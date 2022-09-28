from bisect import bisect, bisect_left

N, W, L, R = map(int, input().split())
X = [0] + list(map(int, input().split()))
MOD = 10**9 + 7

N += 1
if X[-1] != W:
    X.append(W)
    N += 1

dp = [0] * N
dp[0] = 1
for i, x in enumerate(X[1:], 1):
    l = bisect_left(X, x - R)
    r = bisect(X, x - L)
    total = 0
    if r > 0:
        total += dp[r - 1]
    if l > 0:
        total -= dp[l - 1]
    dp[i] = (dp[i - 1] + total) % MOD
    if i == N - 1:
        print(total % MOD)
