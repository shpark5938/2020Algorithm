#include <iostream>
#include "3-11_Calculator.h"
#include "3-11_Adder.h"
using namespace std;

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ���>> ";
	int a, b;
	cin >> a >> b; // ���� �� �� �Է�
	Adder adder(a, b); // ������ ����
	cout << adder.process(); // ���� ���
}