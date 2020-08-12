#include <iostream>
#include <cmath> // pow�� sqrt ���
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
	cout << "�ﰢ�� �Ҹ�" << endl;
}

bool Triangle::isTriangle() {
	return e + f > g && f + g > e && g + e > f;
}

double Triangle::Area() {
	return sqrt(s*(s - e)*(s - f)*(s - g));

}

int main() {
	int e, f, g;
	cout << "�ﰢ���� �� ���� ���̸� �Է��ϼ���";
	cin >> e >> f >> g;

	Triangle tri(e, f, g);

	if (tri.isTriangle())
		cout << "�ﰢ���� ���̴� : " << tri.Area() << endl;
	else
		cout << "�ﰢ���� ���� �� �����ϴ�." << endl;

	return 0;
}