import sys
sys.setrecursionlimit(10 ** 7)

def root(x):
    if rank[x] < 0:
       return x
    rank[x] = root(rank[x])
    return rank[x]
def unite(x, y):
    x, y = root(x), root(y)
    if x == y:
        return False
    if rank[x] > rank[y]:
        x, y = y, x
    rank[x] += rank[y]
    rank[y] = x
    return True
def is_same(x, y):
    return root(x) == root(y)
def size(x):
    return -rank[root(x)]


N, M = map(int, input().split())
ab = [tuple(map(lambda x: int(x) - 1, input().split())) for _ in range(M)]

Q = int(input())
yet = set()
qs = []
for i in range(Q):
    q, *x = tuple(map(lambda x: int(x) - 1, input().split()))
    if q == 0:
        yet.add(x[0])
    qs.append((q, x))

rank = [-1] * N
for i, (a, b) in enumerate(ab):
    if i not in yet:
        unite(a, b)

ans = []
for q, x in qs[::-1]:
    if q == 0:
        a, b = ab[x[0]]
        unite(a, b)
    else:
        a, b = x
        ans.append("Yes" if is_same(a, b) else "No")
print(*ans[::-1])