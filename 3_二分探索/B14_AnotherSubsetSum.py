from bisect import bisect

def calc(A):
    tmp = []
    m = len(A)
    for bit in range(1 << m):
        total = 0
        for i in range(m):
            if bit >> i & 1:
                total += A[i]
        tmp.append(total)
    return tmp


N, K = map(int, input().split())
A = list(map(int, input().split()))

mid = N // 2
B = calc(A[:mid])
C = calc(A[mid:])
C.sort()
for b in B:
    x = K - b
    bi = bisect(C, x)
    if C[bi - 1] == x:
        print("Yes")
        exit()
print("No")