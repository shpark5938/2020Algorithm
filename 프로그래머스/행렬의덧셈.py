def solution(arr1, arr2):
    answer = []
    v = []
    for i in range(len(arr1)):
        for j in range(len(arr1[i])):
            v.append(arr1[i][j]+arr2[i][j])
        answer.append(v)
        v = []
    return answer


ar1 = [[1, 2], [2, 3]]
ar2 = [[3, 4], [5, 6]]
print(solution(ar1, ar2))
