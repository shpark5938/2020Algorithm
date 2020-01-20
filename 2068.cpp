#include <iostream>
using namespace std;

int main()
{
	int num;
	int arr[30];
	int i, j;

	cin >> num;
	for (i = 1; i <= num; i++)
	{
		int max = 0;
		for (j = 0; j < 10; j++)
		{
			cin >> arr[j];
			if (max < arr[j])
				max = arr[j];


		}
		cout << "#" << i << " " << max << endl;
	}

}