N = input()

ans = 0
for i, s in enumerate(N[::-1]):
    if s == '1':
        ans |= (1 << i)
print(ans)

# print(int(N, 2))