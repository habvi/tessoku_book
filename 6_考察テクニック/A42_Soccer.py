N, K = map(int, input().split())
ab = [tuple(map(int, input().split())) for _ in range(N)]

ans = 0
for mn_a in range(1, 101):
    for mn_b in range(1, 101):
        mx_a = mn_a + K
        mx_b = mn_b + K
        total = 0
        for a, b in ab:
            total += (mn_a <= a <= mx_a and mn_b <= b <= mx_b)
        ans = max(ans, total)
print(ans)