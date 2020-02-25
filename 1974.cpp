#include <iostream>
using namespace std;

int T;
int puzzle[9][9];
int PUZZLE()
{
	for (int i = 0; i < 9; i++)
	{
		int vsum = 0;
		int hsum = 0;
		for (int j = 0; j < 9; j++)
		{
			vsum += puzzle[i][j];
			hsum += puzzle[j][i];

		}
		if (vsum != 45)
			return 0;
		if (hsum != 45)
			return 0;
	}
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			int sum = 0;
			for (int k = 0; k < 3; k++) 
			{
				for (int l = 0; l < 3; l++) 
				{
					sum += puzzle[i * 3 + k][j * 3 + l];
				}
			}
			if (sum != 45) 
				return 0;

		}
	}
	return 1;
	
}

int main()
{
	
	cin >> T;
	
	for (int tc = 1; tc <= T; tc++)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cin >> puzzle[i][j];
			}
		}
		cout << '#' << tc << ' ' << PUZZLE();
	}
}