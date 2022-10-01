# B39
from collections import defaultdict
from heapq import heappop, heappush

N, D = map(int, input().split())
xy = defaultdict(list)
for _ in range(N):
    x, y = map(int, input().split())
    xy[x].append(y)

hq = []
ans = 0
for day in range(1, D + 1):
    for y in xy[day]:
        heappush(hq, -y)
    if hq:
        ans += -heappop(hq)
print(ans)