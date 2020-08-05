#include <iostream>
using namespace std;

int main()
{
	int num;
	int i, j;
	int arr[30];
	double avg;


	cin >> num;
	for (i = 1; i <= num; i++)
	{
		double sum = 0;
		for (j = 0; j < 10; j++)
		{
			cin >> arr[j];
			sum += arr[j];
			
		}
		avg = sum / 10.0;
		cout << "#" << i << " " << round(avg) << endl;
	}


}