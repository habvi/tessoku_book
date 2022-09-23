def is_ok(x):
    total = 0
    for a in A:
        total += x // a
    return total >= K

def bisect(ng, ok):
    while abs(ok - ng) > 1:
        mid = (ok + ng) // 2
        if is_ok(mid):
            ok = mid
        else:
            ng = mid
    return ok


N, K = map(int, input().split())
A = list(map(int, input().split()))

mx = 10 ** 9
ans = bisect(0, mx + 1)
print(ans)