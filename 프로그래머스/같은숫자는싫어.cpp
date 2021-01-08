#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	answer.push_back(arr[0]);
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i - 1] != arr[i])   answer.push_back(arr[i]);
	}
	return answer;
}


int main() {
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(0);
	arr.push_back(1);
	arr.push_back(1);
	solution(arr);

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
}