import sys
stack = []

cnt = int(sys.stdin.readline())

for i in range(cnt):
    cmd = sys.stdin.readline()

    cmd = cmd.split(' ')
    cmd1 = cmd[0].splitlines()

    if cmd1[0] == "push":
        num = cmd[1].splitlines()
        stack.append(num[0])
    elif cmd1[0] == "pop":
        if len(stack) == 0:
            print(-1)
        else:
            out = stack.pop()
            print(out)
    elif cmd1[0] == "size":
        print(len(stack))
    elif cmd1[0] == "empty":
        if len(stack) == 0:
            print(1)
        else:
            print(0)
    elif cmd1[0] == "top":
        if len(stack) == 0:
            print(-1)
        else:
            top = stack[-1]
            print(top)