from collections import Counter

N = int(input())
A = list(map(int, input().split()))

c = Counter()
ans = 0
for a in A:
    ans += c[(100 - a) % 100]
    c[a % 100] += 1
print(ans)