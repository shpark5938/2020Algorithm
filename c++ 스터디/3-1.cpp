#include <iostream>
using namespace std;

/*�����*/
class Circle { //Circle Ŭ���� ����
public:
	int radius;
	double getArea();
	/*	
		{ return 3.14*radius*radius; } �� ����
	*/
};

double Circle::getArea() {
	return 3.14*radius*radius;
}

/*������*/
int main() {
	Circle donut; //Circle Ŭ������ donut ��ü ����
	donut.radius = 1; //donut��ü�� radius�� 1�� ����
	double area = donut.getArea(); //donut�� getArea()�� 3.14*1*1
	cout << "donut ������: " << area << endl; //3.14


	Circle pizza;
	pizza.radius = 30; //pizza ��ü�� �������� 30���� ����
	area = pizza.getArea(); //pizza ��ü ����
	cout << "pizza ������: " << area << endl; //3.14*30*30
}

