from collections import deque

N, X = map(int, input().split())
X -= 1
A = list(input())

q = deque([X])
A[X] = '@'
while q:
    pos = q.popleft()
    i = pos - 1
    if i >= 0 and A[i] == '.':
        A[i] = '@'
        q.append(i)
    i = pos + 1
    if i < N and A[i] == '.':
        A[i] = '@'
        q.append(i)
print(''.join(A))