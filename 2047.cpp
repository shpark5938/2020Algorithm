#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, j;
	string str;

	cin >> str;
	
	for (i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]);
	}
	cout << str << endl;
	

}