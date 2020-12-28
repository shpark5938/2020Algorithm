def solution(a, b):
    answer = ["FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"]
    month = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    sum = b-1
    for i in range(a - 1):
        sum += month[i]
    return answer[sum % 7]


print(solution(5, 24))