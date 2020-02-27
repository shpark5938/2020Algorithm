#include <iostream>
using namespace std;

int T, N;
int num[7][7];
int main()
{
	
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
				cin >> num[i][j];
		}
		cout << '#' << tc << endl;
		for (int k = 0; k < N; k++)
		{
			for (int i = 0; i < N; i++)
				cout << num[N - 1 - i][k];
			cout << ' ';
			for (int i = 0; i < N; i++)
				cout << num[N - 1 - k][N - 1 - i];
			cout << ' ';
			for (int i = 0; i < N; i++)
				cout << num[i][N - 1 - k];
			cout << endl;
		}
	}
}

