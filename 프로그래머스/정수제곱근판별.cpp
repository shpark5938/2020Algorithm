#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(long long n) {
	long long answer = 0;
	long long num = sqrt(n);

	if (num * num == n) {
		answer = (num + 1)  * (num + 1);
	}
	else {
		answer = -1;
	}
	return answer;
}

int main() {
	cout << solution(121);
}