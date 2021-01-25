#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
	vector<int> answer;

	while (n > 0) {
		answer.push_back(n % 10);
		n /= 10;
	}

	return answer;
}

int main() {
	cout << solution(12345);
}