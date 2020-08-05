#include <iostream>
using namespace std;

// C++ 구조체 선언
struct StructCircle {
private:
	int radius;
public:
	StructCircle(int r) { // 구조체의 생성자
		radius = r;
	}
	double getArea();
};

double StructCircle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	StructCircle waffle(3); // line 9 -> radius=3
	cout << "면적은 " << waffle.getArea(); 
}