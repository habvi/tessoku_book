from bisect import bisect_left
from collections import defaultdict

N = int(input())
xy = defaultdict(list)
for _ in range(N):
    x, y = map(int, input().split())
    xy[x].append(y)

lis_y = [0]
ans = 0
for x in sorted(xy.keys()):
    xy[x].sort(reverse=True)
    for y in xy[x]:
        if lis_y[-1] < y:
            lis_y.append(y)
            ans += 1
        else:
            lis_y[bisect_left(lis_y, y)] = y
print(ans)
