def solution(arr):
    if len(arr) > 1:
        arr.remove((min(arr)))
        return arr
    else:
        return [-1]


tmp = [4, 3, 2, 1]
print(solution(tmp))