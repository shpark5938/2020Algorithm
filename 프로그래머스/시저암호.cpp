#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
	string answer = "";

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			answer += " ";
		}
		else {
			if (((s[i] + n > 122)) || ((s[i] <= 96) && (s[i] + n >= 91))) {
				answer += (s[i] + n - 26);
			}
			else {
				answer += (s[i] + n);
			}
		}
	}
	return answer;
}

int main() {
	cout << solution("a B z", 4);
}