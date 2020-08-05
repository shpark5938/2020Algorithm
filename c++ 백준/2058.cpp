#include <iostream>
using namespace std;

int main()
{
	int num, sum;
	int i;
	int arr[4];

	cin >> num;
	arr[0] = num / 1000;
	arr[1] = (num % 1000) / 100;
	arr[2] = (num % 1000 % 100) / 10;
	arr[3] = num % 1000 % 100 % 10;

	sum = 0;
	for (i = 0; i < 4; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;
}