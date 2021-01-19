#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
	int answer = 0;
	long long tmp = num;
	while (1) {
		if (tmp == 1) {
			break;
		}
		if(tmp %2==0){
			tmp /= 2;
		}
		else {
			tmp *= 3;
			tmp += 1;
		}
		answer++;
		if (answer == 500) {
			return -1;
		}
	}
	return answer;
}

int main() {
	cout << solution(626331);
}