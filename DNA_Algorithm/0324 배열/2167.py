from sys import stdin
n, m = list(map(int, stdin.readline().split()))

arr = []
for i in range(0, n):
    line = list(map(int, stdin.readline().split()))
    arr.append(line)

k = int(stdin.readline())

for k in range(0, k):
    i, j, x, y = stdin.readline().split()
    i = int(i)
    j = int(j)
    x = int(x)
    y = int(y)
    sum = 0
    for a in range(i-1, x):
        for b in range(j-1, y):
            sum += arr[a][b]
    print(sum)