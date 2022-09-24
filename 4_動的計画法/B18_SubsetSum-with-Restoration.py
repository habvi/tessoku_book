N, S = map(int, input().split())
A = list(map(int, input().split()))

dp = [0] * (S + 1)
dp[0] = 1
par = [-1] * (S + 1)
Ai = [-1] * (S + 1)
for ai, a in enumerate(A, 1):
    for i in reversed(range(S + 1)):
        nxt = i + a
        if dp[i] and nxt <= S:
            dp[nxt] = 1
            if par[nxt] == -1:
                par[nxt] = i
                Ai[nxt] = ai

if not dp[-1]:
    print(-1)
    exit()
ans = []
i = S
while i:
    ans.append(Ai[i])
    i = par[i]
print(len(ans))
print(*ans[::-1])