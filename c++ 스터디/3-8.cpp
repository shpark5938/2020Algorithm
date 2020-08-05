#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle(); // �Ҹ���
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << "�� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << "�� ����" << endl;
}

Circle::~Circle() {
	cout << "������ " << radius << "�� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

 /*���� ��ü ����*/
Circle globalDonut(1000); // line 18
Circle globalPizza(2000); // line 18

/*���� ��ü ����*/
void f() {
	Circle fDonut(100); // line 18
	Circle fPizza(200); // line 18
}
 /*���� ��ü ����*/
int main() {
	Circle mainDonut; // line 13
	Circle mainPizza(30); // line 18
	f();
}