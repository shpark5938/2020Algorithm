#include <iostream>
using namespace std;

bool Func(int* arr)
{
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < 1)
			return false;
		
	}
	return true;
}

int main()
{
	int T;
	cin >> T;
	int N;
	for (int tc = 1; tc <= T; tc++)
	{
		int input;
		cin >> input;

		int arr[10];
		int mul = 1;

		for (int i = 0; i < 10; i++)
		{
			arr[i] = 0;
		}

		while (true)
		{
			int num = input * mul;
			while (num != 0)
			{
				arr[num % 10] += 1;
				num /= 10;

			}
			if (Func(arr))
				break;
			else
				mul++;
		}
		cout << '#' << tc << ' ' << input*mul << endl;
		
	}
	return 0;
}