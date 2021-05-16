import sys, collections

n, k = map(int, sys.stdin.readline().rstrip().split())
arr = []

for i in range(1, n+1):
    arr.append(i)

q = collections.deque(arr)
yose = collections.deque([])

while len(q) != 0:
    for i in range(1, k):
        q.append(q.popleft())
    yose.append(q.popleft())

print('<', end='')
while len(yose) != 0:
    if len(yose) != 1:
        print(yose.popleft(), end=', ')
    else:
        print(yose.popleft(), end='>')