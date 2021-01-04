#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) {
	string answer = "";
	string str1 = "김서방은 ";
	string str2 = "에 있다.";
	for (int i = 0; i < seoul.size(); i++) {
		if (seoul[i] == "Kim") {
			return str1 + to_string(i) + str2;
		}
	}
	return answer;
}

int main() {
	vector<string> str = { "Jane", "Kim" };
	cout << solution(str);
}