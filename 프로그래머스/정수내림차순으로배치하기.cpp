#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
	long long answer = 0;
	vector<int> vec;
	int num = 1;

	while (n != 0) {
		vec.push_back(n % 10);
		n /= 10;
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < vec.size(); i++) {
		answer += vec[i] * num;
		num *= 10;
	}
		
	return answer;
}

int main() {
	cout << solution(118372);
}