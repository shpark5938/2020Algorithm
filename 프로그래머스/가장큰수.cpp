#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool standard(string A, string B) {
	if (A + B > B + A)
		return true;
	return false;
}

string solution(vector<int> numbers) {
	string answer = "";
	vector<string> arr;
	for (int i = 0; i < numbers.size(); i++) 
		arr.push_back(to_string(numbers[i]));

	sort(arr.begin(), arr.end(), standard);

	for (int i = 0; i < arr.size(); i++)
		answer = answer + arr[i];

	if (answer[0] == '0')
		answer = "0";

	return answer;
}

