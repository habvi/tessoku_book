def solve(o, u):
    total = 0
    for a, b in ab:
        if not o:
            a = -a
        if not u:
            b = -b
        if a + b > 0:
            total += a + b
    return total


N = int(input())
ab = [tuple(map(int, input().split())) for _ in range(N)]

ans = 0
for o in range(2):
    for u in range(2):
        ans = max(ans, solve(o, u))
print(ans)
