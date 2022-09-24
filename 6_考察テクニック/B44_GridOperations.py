N = int(input())
A = [tuple(map(int, input().split())) for _ in range(N)]

row = list(range(N))

Q = int(input())
for _ in range(Q):
    q, x, y = map(int, input().split())
    x, y = x - 1, y - 1
    if q == 1:
        row[x], row[y] = row[y], row[x]
    else:
        x = row[x]
        print(A[x][y])
