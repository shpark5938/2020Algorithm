def solution(n):
    answer = 0
    temp = ''
    while n:
        temp += str(n % 3)
        n = int(n / 3)
    multi = 1
    for i in reversed(temp):
        answer += int(i) * multi
        multi *= 3
    return answer


print(solution(45))
