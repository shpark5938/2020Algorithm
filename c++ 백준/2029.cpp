#include <iostream>
using namespace std;

int main()
{
	int num;
	int a, b;

	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		cin >> a >> b; 
		cout << '#' << i << a / b << " " << a % b << endl;
	}
	

}