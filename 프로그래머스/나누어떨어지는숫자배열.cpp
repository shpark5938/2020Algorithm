#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
	vector<int> answer;

	int cnt = 0;
	for (int i = 0; i < arr.size(); i++) {
		if ((arr[i] % divisor) == 0) {
			answer.push_back(arr[i]);
			cnt++;
		}
	}
	if (cnt == 0) {
		answer.push_back(-1);
	}

	sort(answer.begin(), answer.end());
	return answer;
}

int main() {
	vector<int> array = { 5, 9, 7, 10 };
	int div = 5;
	cout << solution(array, div) << endl;

	return 0;
}
