#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int mul = 1;
	for (int i = 1; i <= num; i++)
	{
		cout << mul << " ";
		mul *= 2;
	}
}