#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int N;

bool mysort(string a, string b) {
	if (a.at(N) != b.at(N)) {
		return a.at(N) < b.at(N);
	}
	else {
		return a < b;
	}
}

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer;
	answer = strings;
	N = n;
	sort(answer.begin(), answer.end(), mysort);
	return answer;
}

int main() {
	vector<string> str = { "sun", "bed", "car" };
	int num = 1;
	solution(str, num);

	return 0;
}