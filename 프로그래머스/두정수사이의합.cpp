#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int a, int b) {
	long long answer = 0;

	if (a > b) {
		for (int i = b; i <= a; i++) {
			answer += i;
		}
	}
	else if (b > a) {
		for (int i = a; i <= b; i++) {
			answer += i;
		}
	}
	else {
		answer = a;
	}
	return answer;
}

int main() {
	cout << solution(3, 5);
	cout << solution(3, 3);
	cout << solution(5, 3);
}