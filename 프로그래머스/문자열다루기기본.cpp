#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) {
	bool answer = true;
	if (s.size() != 4 && s.size() != 6) {
		answer = false;
	}
	else{
		for (int i = 0; i < s.size(); i++) {
			if (!(s.at(i) >= '0' && s.at(i) <= '9')) {
				answer = false;
				break;
			}
		}
	}
	return answer;
}

int main() {
	cout << solution("1234");
}