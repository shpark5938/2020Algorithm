def solution(n, m):
    answer = []
    a = n
    b = m
    while b != 0:
        r = a % b
        a = b
        b = r
    answer.append(a)
    answer.append(n * m // a)

    return answer


print(solution(3, 12))
