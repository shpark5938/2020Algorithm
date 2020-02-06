#include <iostream>
using namespace std;

int main()
{
	int num, N, M;
	cin >> num;

	for (int t_case = 1; t_case <= num; t_case++)
	{
		cin >> N >> M;
		int fly[15][15];

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> fly[i][j];
			}
			int max = 0;
			for (int i = 0; i <= N - M; i++)
			{
				for (int j = 0; j <= N - M; j++)
				{
					int sum = 0;
					for (int k = i; k < i + M; k++)
					{
						for (int l = j; l < j + M; l++)
						{
							sum += fly[k][l];
						}
						if (sum > max)
							max = sum;
					}
					cout << t_case << max << endl;
				}
			}
		}
	}
}