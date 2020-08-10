#include <iostream>
using namespace std;

int add(int a, int b) {	// 보통 매개변수
	return a + b;
}

int add(int a, int &b) {	// 참조 매개변수
	b = b + a;
	return b;
}

int main() {
	int s = 10, t = 20;
	cout << add(s, t);	// 컴파일 오류 => call by value 인지 call by reference 인지 모름
}