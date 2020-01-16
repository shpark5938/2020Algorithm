#include <iostream>
using namespace std;

int main()
{
	int num, num1, num2;
	int i;

	cin >> num;
	for (i = 1; i <= num; i++)
	{
		cin >> num1 >> num2;
		char result = '=';
		if (num1 > num2)
			result = '>';
		else if (num1 < num2)
			result = '<';
	
		cout << "#" << i << " " << result << endl;

	}

}