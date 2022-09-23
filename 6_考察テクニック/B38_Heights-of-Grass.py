N = int(input())

if N == 1:
    print(1)
    exit()

S = input()

m = N
if S[-1] == 'B':
    S += 'A'
    m += 1

ct = [1] * m
b = 0
for i, s in enumerate(S):
    if s == 'A':
        if b:
            for j in range(i, i - b, -1):
                ct[j - 1] = max(ct[j - 1], ct[j] + 1)
            b = 0
        ct[i + 1] = max(ct[i + 1], ct[i] + 1)
    else:
        b += 1
print(sum(ct[:N]))