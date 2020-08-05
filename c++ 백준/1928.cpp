#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int Decode(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c -= 65;
	else if ((c >= 'a') && (c <= 'z'))
		c -= 71;
	else if ((c >= '0') && (c <= '9'))
		c += 4;
	else if (c == '+')
		c += 19;
	else if (c == '/')
		c += 16;	
	return c;
}
int main()
{
	int T, num;
	vector<int> binary(60000);
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		string input, output = "";
		cin >> input;
		
		for (int i = 1; i <= input.length(); i++)
		{
			int result = Decode(input[i-1]);
			for (int pos = 1; pos <= 5; pos++)
			{
				binary[i*6-pos] = result % 2;
				result /= 2;
			}
			binary[6*(i-1)] = result;
		}
		printf("#%d ", tc);
		for (int i = 0; i < input.length() * 6; i += 8)
		{
			
			int sum = 0;
			for (int j = 0; j < 8; j++)
			{
				num = binary[i + j] * pow(2, 7 - j);
				//cout << num << ' ';
				
				sum += num;
				

			}
			
			printf("%c", sum);
			
		}
		
	}
}