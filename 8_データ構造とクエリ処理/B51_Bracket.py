S = input()

stack = []
for i, s in enumerate(S):
    if stack:
        if stack[-1][1] == '(' and s == ')':
            j, _ = stack.pop()
            print(j + 1, i + 1)
            continue
    stack.append((i, s))
