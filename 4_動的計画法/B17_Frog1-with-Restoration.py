N = int(input())
H = list(map(int, input().split()))

INF = float('inf')
dp = [INF] * N
dp[0] = 0
par = [-1] * N
for i in range(1, N):
    pre = dp[i - 1] + abs(H[i] - H[i - 1])
    if pre < dp[i]:
        dp[i] = pre
        par[i] = i - 1
    pre = dp[i - 2] + abs(H[i] - H[i - 2])
    if pre < dp[i]:
        dp[i] = pre
        par[i] = i - 2

i = N - 1
ans = [i + 1]
while i:
    i = par[i]
    ans.append(i + 1)
print(len(ans))
print(*ans[::-1])