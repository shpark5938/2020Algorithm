#include <iostream>
using namespace std;

int score[101];
int temp, ans;

int main()
{
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		cin >> temp;
		for (int i = 0; i < 1000; i++)
		{
			cin >> temp;
			score[temp]++;
		}
		temp = -1; ans = -1;
		for (int i = 0; i < 101; i++)
		{
			if (temp<=score[i])
			{
				temp = score[i];
				ans = i;

			}
			score[i] = 0;
		}
		cout << '#' << tc << ' ' <<ans<< endl;
	}
}
	