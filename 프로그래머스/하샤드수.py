def check(n):
    answer = 0
    while n > 0:
        answer += n % 10
        n //= 10
    return answer


def solution(x):
    if x % check(x) == 0:
        return True
    else:
        return False


print(solution(10))
