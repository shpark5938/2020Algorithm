#include <iostream>
using namespace std;

int main()
{
	int T;
	int min, max, result, sum;
	cin >> T;
	int arr[10];
	

	for (int tc = 1; tc <=T; tc++)
	{
		
		for (int i = 0; i < 10; i++)
		{
			cin >> arr[i];
			max = 0;
			min = 10000;
			sum = 0;
			for (int i = 0; i < 10; i++)
			{
				if (arr[i] > max)
					max = arr[i];
				if (arr[i] <min)
					min = arr[i];
				sum += arr[i];
			}
		}
		
		result = (sum - max - min)/8.0f;

		cout << '#' << tc << " " << result << endl;

	}
	

}