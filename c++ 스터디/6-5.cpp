#include <iostream>
using namespace std;

void fillLine(int n = 25, char c = '*') {	// n개의 c문자를 한 라인에 출력
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}

int main() {
	fillLine();	// 25개의 '*'을 한 라인에 출력
	fillLine(10, '%');	// 10개의 '%'을 한 라인에 출력
}