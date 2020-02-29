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
		int a = 0, b = 0, c = 0, d = 0, e = 0;
		while (N % 2 == 0)
		{
			N /= 2;
			a++;
		}
		while (N % 3 == 0)
		{
			N /= 3;
			b++;
		}
		while (N % 5 == 0)
		{
			N /= 5;
			c++;
		}
		while (N % 7 == 0)
		{
			N /= 7;
			d++;
		}
		while (N % 11 == 0)
		{
			N /= 11;
			e++;
		}

		cout << '#' << tc << ' ' << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
	}

}