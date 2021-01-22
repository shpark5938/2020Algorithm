def solution(s):
    clist = []
    for char in s.split(' '):
        idx = 0
        for i in char:
            if idx % 2 == 0:
                clist.append(i.upper())
            else:
                clist.append(i.lower())
            idx += 1
        clist.append(" ")
    clist.pop()

    return "".join(clist)


print(solution("try hello world"))
