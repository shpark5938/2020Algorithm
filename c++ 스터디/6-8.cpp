#include <iostream>
using namespace std;

int add(int a, int b) {	// ���� �Ű�����
	return a + b;
}

int add(int a, int &b) {	// ���� �Ű�����
	b = b + a;
	return b;
}

int main() {
	int s = 10, t = 20;
	cout << add(s, t);	// ������ ���� => call by value ���� call by reference ���� ��
}