#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int N;
	for (int tc = 1; tc <= T; tc++)
	{
		cin >> N;
		cout << N / 50000 << ' ';
		N %= 50000;
		cout << N / 10000 << ' ';
		N %= 10000;
		cout << N / 5000 << ' ';
		N %= 5000;
		cout << N / 1000 << ' ';
		N %= 1000;
		cout << N / 500 << ' ';
		N %= 500;
		cout << N / 100 << ' ';
		N %= 100;
		cout << N / 50 << ' ';
		N %= 50;
		cout << N / 10 << ' ' <<endl;
		

	}
}