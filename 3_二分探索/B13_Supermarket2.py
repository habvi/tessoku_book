from collections import deque

N, K = map(int, input().split())
A = list(map(int, input().split()))

d = deque()
total = 0
ans = 0
for a in A:
    d.append(a)
    total += a
    while total > K:
        rm = d.popleft()
        total -= rm
    ans += len(d)
print(ans)