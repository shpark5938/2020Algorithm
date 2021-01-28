#include <string>
#include <iostream>

using namespace std;

string solution(string phone_number) {
	string answer = "";

	answer = phone_number;
	for (int i = 0; i < phone_number.size() - 4; i++) {
		answer[i] = '*';
	}
	return answer;
}

int main() {
	cout << solution("01033334444");
}