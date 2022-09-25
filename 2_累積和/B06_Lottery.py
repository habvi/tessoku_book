from itertools import accumulate

N = int(input())
A = list(map(int, input().split()))

ac = [0] + list(accumulate(A))
Q = int(input())
for _ in range(Q):
    L, R = map(int, input().split())
    total = R - L + 1
    happy = ac[R] - ac[L - 1]
    sad = total - happy
    if happy > sad:
        ans = "win"
    elif happy == sad:
        ans = "draw"
    else:
        ans = "lose"
    print(ans)