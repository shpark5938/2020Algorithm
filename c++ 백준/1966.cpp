#include <iostream>
#include <algorithm>
using namespace std;

int T, N;
int num[50];
int main()
{
	
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		cin >> N;

		
		for (int i = 0; i < N; i++)
			cin >> num[i];
		sort(num, num + N);
		cout << '#' << tc << ' ';
		for (int i = 0; i < N; i++)
			cout << num[i] << ' ';
		cout << endl;
	}

}