#include <iostream>
#define UP        1
#define DOWN    2
#define RIGHT    3
#define LEFT    4
using namespace std;

int main(void) {
	int T;
	cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int N, x, y, dir = RIGHT;
		cin >> N;
		int arr[20][20];
		int maxl = 0, maxr = N - 1, maxu = 1, maxd = N - 1;

		x = 0;
		y = 0;

		for (int i = 1; i <= N * N; i++) {
			arr[y][x] = i;

			if (dir == RIGHT) {
				if (x == maxr) {
					maxr--;
					dir = DOWN;
					y++;
				}
				else {
					x++;
				}
			}
			else if (dir == DOWN) {
				if (y == maxd) {
					maxd--;
					dir = LEFT;
					x--;
				}
				else {
					y++;
				}
			}
			else if (dir == LEFT) {
				if (x == maxl) {
					maxl++;
					dir = UP;
					y--;
				}
				else {
					x--;
				}
			}
			else if (dir == UP) {
				if (y == maxu) {
					maxu++;
					dir = RIGHT;
					x++;
				}
				else {
					y--;
				}
			}
		}

		cout << "#" << tc + 1 << "\n";

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << arr[i][j];
				if (j < N - 1)
					cout << " ";
			}
			cout << "\n";
		}

	}
}