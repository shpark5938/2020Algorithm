def solution(a, b):
    return sum(i * j for i, j in zip(a, b))


ta = [1, 2, 3, 4]
tb = [-3, -1, 0, 2]
print(solution(ta, tb))
