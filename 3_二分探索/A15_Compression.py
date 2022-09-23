N = int(input())
A = list(map(int, input().split()))

d = {a : i for i, a in enumerate(sorted(set(A)), 1)}
print(*(d[a] for a in A))