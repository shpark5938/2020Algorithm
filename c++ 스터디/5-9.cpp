#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(Circle &c);	// ���� ������ ����
	Circle() { 
		radius = 1; 
	}
	Circle(int radius) { 
		this->radius = radius;
	}
	double getArea() { 
		return 3.14*radius*radius; 
	}
};