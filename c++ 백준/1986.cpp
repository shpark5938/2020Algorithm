#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int N;
	
	for (int tc=1;tc<=T;tc++)
	{
		cin >> N;
		int sum = 0;
		for (int i= 1; i <= N; i++)
		{
			if (i % 2 == 0)
			{
				sum -= i;
			}
			if (i % 2 != 0)
			{
				sum += i;
			}
		}

		cout << '#' << tc << " " << sum << endl;
	}
}