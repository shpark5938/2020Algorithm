#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		
		int P, Q, R, S, W;
		int priceB = 0;
		int priceA = 0;
		cin >> P >> Q >> R >> S >> W;
		
		priceA = P * W;

		if (W <= R)
			priceB = Q;
		else
			priceB = Q + S * (W-R);
		cout << '#' << tc << ' ';
		if (priceA <= priceB)
			cout << priceA;
		else
			cout << priceB;

		cout << endl;

	}
}