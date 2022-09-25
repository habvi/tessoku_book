H, W, K = map(int, input().split())
C = [list(input()) for _ in range(H)]

ans = 0
for bit in range(1 << H):
    if bin(bit).count('1') > K:
        continue

    A = [c[:] for c in C]
    total = 0
    row = 0
    for i in range(H):
        if bit >> i & 1:
            for j in range(W):
                A[i][j] = '#'
            row += 1

    col = []
    for a in zip(*A):
        black = a.count('#')
        total += black
        col.append(H - black)
    col.sort(reverse=True)

    res = K - row
    total += sum(col[:res])
    ans = max(ans, total)
print(ans)