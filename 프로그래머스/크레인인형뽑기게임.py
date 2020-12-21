def solution(board, moves):
    answer = 0
    stack = list()

    while moves:
        move = moves.pop(0)
        character = -1
        for i in range(len(board)):
            if board[i][move - 1] != 0:
                character = board[i][move - 1]
                board[i][move - 1] = 0
                break

        if character == -1:
            continue
        if not stack:
            stack.append(character)
        else:
            top = stack[0]
            if top == character:
                answer += 2
                stack.pop(0)
            else:
                stack.insert(0, character)
    return answer


tboard = [[0, 0, 0, 0, 0], [0, 0, 1, 0, 3], [0, 2, 5, 0, 1], [4, 2, 4, 4, 2], [3, 5, 1, 3, 1]]
tmoves = [1, 5, 3, 5, 1, 2, 1, 4]
solution(tboard, tmoves)
