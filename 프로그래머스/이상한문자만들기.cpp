#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
	string answer = "";

	int index = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			answer.push_back(' ');
			index = 0;
			continue;
		}
		if (index % 2 == 0) {
			if (s[i] > 90)
				answer.push_back(s[i] - 32);
			else
				answer.push_back(s[i]);
		}
		else {
			if (s[i] < 97)
				answer.push_back(s[i] + 32);
			else
				answer.push_back(s[i]);
		}
		index++;
	}

	return answer;
}

int main() {
	cout << solution("try hello world");
}