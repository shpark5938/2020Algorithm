def solution(participant, completion):
    participant.sort()
    completion.sort()

    for i in range(len(completion)):
        if participant[i] != completion[i]:
            return participant[i]

    return participant[i + 1]


tparticipant = ["marina", "josipa", "nikola", "vinko", "filipa"]
tcompletion = ["marina", "josipa", "nikola", "filipa"]
print(solution(tparticipant, tcompletion))
