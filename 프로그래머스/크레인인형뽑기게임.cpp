#include <string>
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	stack<int> st;

	for (int i = 0; i < moves.size(); i++) {
		for (int j = 0; j < board.size(); j++) {
			if (board[j][moves[i] - 1] != 0) {	// 0이 아닌게 있으면
				int character = board[j][moves[i] - 1];
				if (!st.empty()) {
					if (character == st.top()) {
						answer += 2;
						st.pop();
					}
					else {
						st.push(character);
					}
				}
				else {
					st.push(character);
				}
				board[j][moves[i] - 1] = 0;
				break;
			}
		}
	}
	return answer;
}

int main() {
	vector<vector<int>> board = { {0, 0, 0, 0, 0},{0, 0, 1, 0, 3},{0, 2, 5, 0, 1},{4, 2, 4, 4, 2},{3, 5, 1, 3, 1} };
	vector<int> moves = { 1, 5, 3, 5, 1, 2, 1, 4 };

	cout << solution(board, moves);
	

	/*for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board.size(); j++) {
			cout << board[i][j];
		}
		cout << endl;
	}*/

	return 0;
}