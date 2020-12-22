#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";

	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());

	for (int i = 0; i < completion.size(); i++) {
		if (participant[i] != completion[i]) {
			return participant[i];
		}
	}
	
	return participant[participant.size() - 1];
}

int main() {
	vector<string> participant = {"leo", "kiki", "eden"};
	//vector<string> participant = { "marina", "josipa", "nikola", "vinko", "filipa" };
	//vector<string> participant = { "mislav", "stanko", "mislav", "ana" };
	vector<string> completion = { "eden", "kiki" };
	//vector<string> completion = { "josipa", "filipa", "marina", "nikola" };
	//vector<string> completion = { "stanko", "ana", "mislav" };
	cout << solution(participant, completion) << endl;

	return 0;
}