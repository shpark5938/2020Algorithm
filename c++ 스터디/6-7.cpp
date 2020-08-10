#include <iostream>
using namespace std;

float square(float a) {
	return a * a;
}

double square(double a) {
	return a * a;
}

int main() {
	cout << square(3.0);	// sqaure(double a); 호출
	cout << square(3);		// 컴파일 오류 =? int 인지 double 인지 모름
}