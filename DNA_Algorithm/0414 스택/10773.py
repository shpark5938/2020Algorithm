N = int(input())
Z = []
for i in range(N):
    inp = int(input())
    if inp == 0:
        Z.pop()
    else:
        Z.append(inp)
print(sum(Z))