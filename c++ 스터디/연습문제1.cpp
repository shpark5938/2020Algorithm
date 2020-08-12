#include <iostream>
#include <cmath> // pow및 sqrt 사용
using namespace std;

class Triangle {
private:
	int e, f, g;
	double s;
public:
	Triangle(int a, int b, int c);
	~Triangle();
	double Area();
	bool isTriangle();
};
 
Triangle::Triangle(int a, int b, int c) {
	e = a; f - b; g - c;
	s = ((double)e + f + g) / 2;
}

Triangle::~Triangle() {
	cout << "삼각형 소멸" << endl;
}

bool Triangle::isTriangle() {
	return e + f > g && f + g > e && g + e > f;
}

double Triangle::Area() {
	return sqrt(s*(s - e)*(s - f)*(s - g));

}

int main() {
	int e, f, g;
	cout << "삼각형의 세 변의 길이를 입력하세오";
	cin >> e >> f >> g;

	Triangle tri(e, f, g);

	if (tri.isTriangle())
		cout << "삼각형의 넓이는 : " << tri.Area() << endl;
	else
		cout << "삼각형을 만들 수 없습니다." << endl;

	return 0;
}