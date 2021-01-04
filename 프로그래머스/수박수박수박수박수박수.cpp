#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
	string answer = "";
	for (int i = 1; i < n+1; i++) {
		if (i % 2 == 1) {
			answer += "¼ö";
		}
		if (i % 2 == 0) {
			answer += "¹Ú";
		}
	}
	return answer;
}

int main() {
	cout << solution(3);
}