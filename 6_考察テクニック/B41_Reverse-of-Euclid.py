def gcd(a, b):
    while not (a == b == 1):
        ans.append((a, b))
        if a > b:
            a, b = a - b, b
        else:
            a, b = a, b - a


X, Y = map(int, input().split())

ans = []
gcd(X, Y)
print(len(ans))
for a, b in ans[::-1]:
    print(a, b)
