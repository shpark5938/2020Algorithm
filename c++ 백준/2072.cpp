#include <iostream>
using namespace std;

int main()
{
	int num;
	int i, j;
	int arr[30];


	cin >> num;
	for (i = 1; i <= num; i++)
	{
		int sum = 0;
		for (j = 0; j < 10; j++)
		{
			cin >> arr[j];
			if (arr[j] % 2 == 1)
				sum += arr[j];
		}
	cout << "#" << i << " " << sum << endl;
	}
	

}