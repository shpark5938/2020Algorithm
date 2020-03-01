#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int N;
	int command, acc;
	for (int tc = 1; tc <= T; tc++)
	{
		cin >> N;
		int RC_speed = 0;
		int RC_distance = 0;
		for (int i = 0; i < N; i++)
		{
			cin >> command;
			switch (command)
			{
			case 1:
				cin >> acc;
				RC_speed += acc;
				break;
			case 2:
				cin >> acc;
				RC_speed += acc;
				break;
				if (RC_speed < 2)
					RC_speed = 0;
			}
			RC_distance = i * RC_speed;
		}
		cout << '#' << tc << ' ' << RC_distance;

	}
}