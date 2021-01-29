def solution(phone_number):
    answer = ''

    for i in range(len(phone_number) - 4):
        answer = phone_number[i]
        answer[i] = '*'
    return answer


print(solution("01033334444"))
