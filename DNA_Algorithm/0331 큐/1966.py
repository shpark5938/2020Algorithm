from collections import deque
import sys
test = int(input())
count_list = deque()
for i in range(0,test):
    N, M = map(int, sys.stdin.readline().rstrip().split())
    doq = deque()
    important = deque()
    for j in range(0,N):
        doq.append(j+1)
    im = list(map(int, sys.stdin.readline().rstrip().split()))
    for j in range(0,N):
        important.append(im[j])
    count = 1
    for j in range(0,N):
        while important[0] != max(important):
            doq.append(doq.popleft())
            important.append(important.popleft())
        if(doq[0]==M+1):
            break
        doq.popleft()
        important.popleft()
        count = count + 1
    count_list.append(count)
for i in range(0,test):
    print(count_list[i])