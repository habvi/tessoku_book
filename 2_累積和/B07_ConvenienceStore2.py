from itertools import accumulate


T = int(input())
N = int(input())

t = [0] * (T + 1)
for _ in range(N):
    L, R = map(int, input().split())
    t[L] += 1
    t[R] -= 1
ac = list(accumulate(t))
print(*ac[:T])