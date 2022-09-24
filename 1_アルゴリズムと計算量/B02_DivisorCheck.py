A, B = map(int, input().split())

for x in range(A, B + 1):
    if not 100 % x:
        print("Yes")
        exit()
print("No")