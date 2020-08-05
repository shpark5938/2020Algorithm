#include <iostream>
#include <string>
using namespace std;

bool Cal(int month, int day)
{
	bool cal;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (day <= 31)
		{
			cal = true;
		}
		else
			cal = false;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (day <= 30)
		{
			cal = true;
		}
		else
			cal = false;
		break;
	case 2:
		if (day <= 28)
			cal = true;
		else
			cal = false;
		break;
	default:
		cal = false;
		break;
	}
	return cal;
}
int main()
{
	int num;
	int i;
	int year;
	int month=0;
	int day=0;

	string str;
	string YEAR;
	string MONTH;
	string DAY;

	cin >> num;

	for (i = 1; i <= num; i++)
	{
		
		cin >> str;

		year = stoi(str.substr(0, 4));
		month = stoi(str.substr(4, 2));
		day = stoi(str.substr(6, 2));

		YEAR = str.substr(0, 4);
		MONTH = str.substr(4, 2);
		DAY = str.substr(6, 2);

		cout << "#" << i << " ";
		if (Cal(month, day))
		{
			cout << YEAR << "/" << MONTH << "/" << DAY << endl;

		}
		else {
			cout << "-1" << endl;
		}
	}
}