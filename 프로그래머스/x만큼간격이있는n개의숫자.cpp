#include <vector>
#include <iostream>

using namespace std;

vector<long long> solution(int x, int n) {
	vector<long long> answer;

	for (int i = 1; i <= n; i++) {
		answer.push_back(i*x);
	}
	return answer;
}

int main() {
	cout << solution(2, 5);
}