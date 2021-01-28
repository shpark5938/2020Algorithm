#include <string>
#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> arr) {
	double answer = 0;
	double sum = 0;

	for (int i = 0; i < arr.size(); i++) {
		sum += arr[i];
	}
	answer = sum / arr.size();

	return answer;
}

int main() {
	vector<int> ar;

	for (int i = 1; i <= 4; i++) {
		ar.push_back(i);
	}
	cout << solution(ar);
}