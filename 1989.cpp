#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	string input;
	for (int tc = 1; tc <= T; tc++) {
		bool answer = true;

		cin >> input;
		int len = input.length();
		for (int i = 0; i < len / 2; i++)
		{
			if (input[i] != input[len - 1 - i])
			{
				answer = false;
				break;
			}
				
		}
		cout << '#' << tc << " " << answer << endl;
		
	
	}
}