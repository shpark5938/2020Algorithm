#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool memo[1000000]{ false };

int solution(int n) {
	int answer = 0;
	for (int i = 2; i <= n; i++) {
		if (memo[i - 1])
			continue;
		answer++;
		for (int j = i + i; j <= n; j += i) {
			memo[j - 1] = true;
		}
	}
	return answer;
}

int main() {
	cout << solution(10);
}