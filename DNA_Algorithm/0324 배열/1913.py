a = int(input())
num = int(input())
arr = [[0 for col in range(a)]for row in range(a)]
x = 0
y = 0
n = a*a
b = a
for i in range(b):
    arr[y][x] = n
    n = n-1
    y= y+1
y = y-1
b = b-1
while b>0:
    for i in range(b):
        x = x+1
        arr[y][x] = n
        n = n-1
    for i in range(b):
        y = y-1
        arr[y][x] = n
        n = n-1
    b = b - 1
    for i in range(b):
        x = x-1
        arr[y][x] = n
        n = n-1
    for i in range(b):
        y = y+1
        arr[y][x] = n
        n = n-1
    b = b-1
for i in range(a):
    for j in range(a):
        print(arr[i][j],end=" ")
    print("")
num_x = 0
num_y = 0
for i in range(a):
    for j in range(a):
        if arr[i][j] == num:
            num_x = i+1
            num_y = j+1
print("{} {}".format(num_x,num_y))