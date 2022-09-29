def is_ok(x):
    piece = 0
    l = 0
    for r in A:
        if r - l >= x and L - r >= x:
            piece += 1
            l = r
    return piece >= K

def bisect(ng, ok):
    while abs(ok - ng) > 1:
        mid = (ok + ng) // 2
        if is_ok(mid):
            ok = mid
        else:
            ng = mid
    return ok


N, L = map(int, input().split())
K = int(input())
A = list(map(int, input().split()))

ans = bisect(L + 1, -1)
print(ans)