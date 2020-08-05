#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle(); // 소멸자
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름 " << radius << "원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

 /*전역 객체 생성*/
Circle globalDonut(1000); // line 18
Circle globalPizza(2000); // line 18

/*지역 객체 생성*/
void f() {
	Circle fDonut(100); // line 18
	Circle fPizza(200); // line 18
}
 /*지역 객체 생성*/
int main() {
	Circle mainDonut; // line 13
	Circle mainPizza(30); // line 18
	f();
}