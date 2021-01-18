#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
	vector<int> answer;

	answer = arr;
	sort(arr.begin(), arr.end(), greater<>());
	
	for (int i = 0; i < answer.size(); i++) {
		answer.erase(find(answer.begin(), answer.end(), arr[0]));
		break;
	}

	if (answer.empty()) {
		answer.push_back(-1);
	}
	return answer;
}

int main() {

}