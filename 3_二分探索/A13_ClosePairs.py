from collections import deque

N, K = map(int, input().split())
A = list(map(int, input().split()))

d = deque()
ans = 0
for a in A:
    d.append(a)
    while a - d[0] > K:
        rm = d.popleft()
    ans += len(d) - 1
print(ans)