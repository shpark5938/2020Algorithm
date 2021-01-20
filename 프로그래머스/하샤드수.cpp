#include <string>
#include <vector>
#include <iostream>

using namespace std;

int check(int n)
{
	int answer = 0;

	while (n > 0) {
		answer += n % 10;
		n /= 10;
	}

	return answer;
}

bool solution(int x) {
	bool answer = true;

	if (x%check(x) == 0) {
		return true;
	}
	else {
		return false;
	}

	return answer;
}

int main() {
	cout << solution(10);
}