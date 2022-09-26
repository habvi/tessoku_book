class BIT:
    def __init__(self, len_a):
        self.N = len_a + 10
        self.tree = [0]*(len_a + 10)
    def prod(self, i):
        res = 0
        while i:
            res += self.tree[i]
            i -= i & (-i)
        return res
    def update(self, i, x):
        while i < self.N:
            self.tree[i] += x
            i += i & (-i)

def inversion_number(A, n):
    bit = BIT(n)
    count_ = 0
    for a in A:
        count_ += bit.prod(n) - bit.prod(a)
        bit.update(a, 1)
    return count_

def plus_num(A):
    for a in A:
        if a:
            return a


N = int(input())
P = [tuple(map(int, input().split())) for _ in range(N)]

row = [plus_num(p) for p in P]
col = [plus_num(p) for p in zip(*P)]
ans = inversion_number(row, N + 1) + inversion_number(col, N + 1)
print(ans)