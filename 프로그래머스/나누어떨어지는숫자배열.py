def solution(arr, divisor):
    answer = []
    for i in arr:
        if i % divisor == 0:
            answer.append(i)
    if len(answer) == 0:
        answer.append(-1)
    answer.sort()

    return answer


tarr = [5, 9, 7, 10]
tdivisor = 5

print(solution(tarr, tdivisor))
