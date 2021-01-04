def solution(seoul):
    answer = ''
    str1 = "김서방은 "
    str2 = "에 있다"
    for i in range(len(seoul)):
        if seoul[i]=="Kim":
            return str1+str(i)+str2
    return answer


tseoul = ["Jane", "Kim"]
print(solution(tseoul))
