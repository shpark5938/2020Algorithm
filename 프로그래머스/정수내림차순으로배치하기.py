def solution(n):
    answer = 0

    ls = list(str(n))
    ls.sort(reverse=True)
    return int("".join(ls))

    return answer


print(solution(118372))
