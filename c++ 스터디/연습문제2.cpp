#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
	string name;
	string snum;
public:
	string getNAme() {	// 이름 읽기
		return name;
	}
	string getSnum() {	// 학번 읽기
		return snum;
	}
	void setInfo(string name, string snum)
	{
		this->name = name;
		this->snum = snum;
	}
};

int main() {
	int n;
	string name, num;
	cout << "학생의 수를 입력하세요: ";
	cin >> n;

	Student* sarray = new Student[n];
	//vector<Student> student(num);
	/*char name[10], search[10];
	int age, id;*/

	for (int i = 0; i < n; i++)
	{
		cout << "학생 이름: ";
		cin >> name;
		cout << "학번: ";
		cin >> num;
		//student[i].info(name, id);
		sarray[i].setInfo(name, num);
	}
	/* 테스트 위함
	for (int i = 0; i < n; i++) {
		cout << sarray[i].getNAme() << endl;
	}*/
	while (true) {
		cout << "학번을 찾고싶은 학생의 이름: ";
		cin >> name;
		if (name == "exit")
			break;
		for (int i = 0; i < n; i++) {
			if (name == sarray[i].getNAme()) {
				cout << sarray[i].getNAme() << endl;
				break;
			}
		}
	}
	delete[] sarray;
}