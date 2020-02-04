#include <iostream>
using namespace std;

int Game(int n)
{
	int count = 0;
	while (true)
	{
		int digit = n % 10;
		if (digit == 3 || digit == 6 || digit == 9)
			count++;
		n /= 10;
		if (n == 0)
			break;

	}
	return count;
}
int main()
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int count = Game(i);
		if (count == 0)
		{
			cout << i << endl;
			continue;
		}
		for (int j = 0; j < count; j++)
			cout << '-' << endl;
		
	}
}
