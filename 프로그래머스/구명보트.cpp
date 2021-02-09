#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
	int answer = 0;
	int cnt = 0;
	int begin = 0;
	int end = 1;
	sort(people.begin(), people.end());
	while (true) {
		int first = people[people.size() - end++];
		cnt++;
		if (limit - first >= people[begin]) {
			begin++;
			cnt++;
		}
		answer++;
		if (cnt >= people.size())
			break;
	}
	return answer;
}

void print(vector<int> people, int limit, int answer) {
	int t = solution(people, limit);
	if (t == answer)        
		cout << "정답" << endl;
	else        
		cout << "틀림" << endl;
}

int main() {
	print({ 70, 50, 80, 50 }, 100, 3);
	print({ 70, 80, 50 }, 100, 3);
	return 0;
}