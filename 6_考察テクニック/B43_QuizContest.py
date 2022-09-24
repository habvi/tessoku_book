from collections import Counter

N, M = map(int, input().split())
A = list(map(lambda x: int(x) - 1, input().split()))

c = Counter(A)
for i in range(N):
    print(M - c[i])