#include <iostream>
using namespace std;

// C++ ����ü ����
struct StructCircle {
private:
	int radius;
public:
	StructCircle(int r) { // ����ü�� ������
		radius = r;
	}
	double getArea();
};

double StructCircle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	StructCircle waffle(3); // line 9 -> radius=3
	cout << "������ " << waffle.getArea(); 
}