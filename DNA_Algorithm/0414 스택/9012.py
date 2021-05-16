n = int(input())
for i in range(n):
    string = input()
    count = 0
    flag = 0
    for j in range(len(string)):
        if string[j] == '(':
            count = count + 1
        else :
            if count == 0:
                flag = 1
                break
            count = count - 1
    if count == 0 and flag == 0:
        print("YES")
    else:
        print("NO")