def solution(answers):
    answer = []
    temp = []
    score0 = 0
    score1 = 0
    score2 = 0

    per1 = [1, 2, 3, 4, 5]
    per2 = [2, 1, 2, 3, 2, 4, 2, 5]
    per3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    for i in range(len(answers)):
        if answers[i] == per1[i % 5]: score0 += 1
        if answers[i] == per2[i % 8]: score1 += 1
        if answers[i] == per3[i % 10]: score2 += 1

    temp = [score0, score1, score2]
    for person, score in enumerate(temp):
        if score == max(temp):
            answer.append(person + 1)

    return answer


ans = [1, 2, 3, 4, 5]
print(solution(ans))
