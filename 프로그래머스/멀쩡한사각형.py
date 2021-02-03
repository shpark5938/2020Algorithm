def gcd(a, b):
    while b != 0:
        c = a % b
        a = b
        b = c
    return a


def solution(w, h):
    W = w
    H = h
    tmp = (w + h) - gcd(w, h)
    return (W * H) - tmp


print(solution(8, 12))
