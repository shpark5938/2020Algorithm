#include <iostream>
using namespace std;

int main()
{
	int num;
	int i, j, mid;
	int arr[200];

	cin >> num;
	mid = num / 2;
	for (i = 1; i <= num; i++)
	{
		cin >> arr[i];
	}
	for (i = 0; i <= num; i++)
	{
		int min = i;
		for (j = i + 1; j < num; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		int tmp = arr[min];
		arr[min] = arr[i];
		arr[i] = tmp;
	}
	cout << arr[mid] << endl;

}