#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	int hour = 0;
	int min = 0;
	int hour1, min1, hour2, min2;
	

	for (int i = 1; i <= T; i++)
	{
		cin >> hour1 >> min1 >> hour2 >> min2;
		
		hour = hour1 + hour2;
		min = min1 + min2;

		if (min >= 59)
		{
			min -= 60;
			hour++;
		}
		if (hour >= 12)
			hour -= 12;

		cout << '#' << i <<' '<< hour << ' ' << min;
	}

}