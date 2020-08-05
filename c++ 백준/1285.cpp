#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int x = 1; x <= T; x++)
	{
		int count = 0;
		int N;
		int distance[10000] = { 0 };
		int min = 100001;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> distance[i];
			if (distance[i] < 0)
				distance[i] = -distance[i];
			if (distance[i] < min)
				min = distance[i];
		}
		count = 0;
		for (int i = 0; i < N; i++)
		{
			if (distance[i] == min)
				count++;
		}
		cout << '#' << x << ' ' << min << ' ' << count << endl;

		

	}
}