#include <iostream>
using namespace std;

/*선언부*/
class Rectangle { //Rectangle 클래스 선언
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea() {
	return width * height;
}

/*구현부*/
int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}
