def solution(n):
    import math
    num = math.sqrt(n)

    if math.sqrt(n) == int(math.sqrt(n)):
        return int(pow(num+1, 2))
    else:
        answer = -1


    #     return int(pow(num + 1, 2))

    return answer


print(solution(121))
