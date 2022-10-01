from collections import Counter

N = int(input())

c = Counter()
ans = 0
for _ in range(N):
    a = int(input())
    ans += c[a]
    c[a] += 1
print(ans)