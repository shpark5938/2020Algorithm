#include <iostream>
using namespace std;

/*선언부*/
class Circle { //Circle 클래스 선언
public:
	int radius;
	double getArea();
	/*	
		{ return 3.14*radius*radius; } 와 동일
	*/
};

double Circle::getArea() {
	return 3.14*radius*radius;
}

/*구현부*/
int main() {
	Circle donut; //Circle 클래스에 donut 객체 만듦
	donut.radius = 1; //donut객체의 radius를 1로 설정
	double area = donut.getArea(); //donut의 getArea()는 3.14*1*1
	cout << "donut 면적은: " << area << endl; //3.14


	Circle pizza;
	pizza.radius = 30; //pizza 객체의 반지름을 30으로 설정
	area = pizza.getArea(); //pizza 객체 면적
	cout << "pizza 면적은: " << area << endl; //3.14*30*30
}

