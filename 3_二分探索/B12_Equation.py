def is_ok(x):
    return x ** 3 + x <= N

def bisect(ng, ok):
    for _ in range(100):
        mid = (ok + ng) / 2
        if is_ok(mid):
            ok = mid
        else:
            ng = mid
    return ok


N = int(input())

ans = bisect(N + 1, 0)
print(ans)
