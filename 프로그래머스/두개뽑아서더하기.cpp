#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	int sum;
	for (int i = 0; i < numbers.size(); i++) {
		for (int j = i + 1; j < numbers.size(); j++) {
			sum = numbers[i] + numbers[j];
			if (find(answer.begin(), answer.end(), sum) == answer.end()) {
				answer.push_back(sum);
			}
		}
	}
	sort(answer.begin(), answer.end());
	return answer;
}

int main() {
	vector<int> num = { 2, 1, 3, 4, 1 };
	cout << solution(num);

	return 0;
}