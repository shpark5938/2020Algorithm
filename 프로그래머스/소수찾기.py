def solution(n):
    answer = 0
    numset = set(range(2, n + 1))
    for i in range(2, n + 1):
        if i in numset:
            numset -= set(range(2 * i, n + 1, i))
    answer = len(numset)
    return answer
