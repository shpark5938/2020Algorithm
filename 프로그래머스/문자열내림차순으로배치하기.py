def solution(s):
    return "".join(sorted(s, reverse=True))


ts = "Zabcdefg"
print(solution(ts))