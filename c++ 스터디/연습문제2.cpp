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
	string getNAme() {	// �̸� �б�
		return name;
	}
	string getSnum() {	// �й� �б�
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
	cout << "�л��� ���� �Է��ϼ���: ";
	cin >> n;

	Student* sarray = new Student[n];
	//vector<Student> student(num);
	/*char name[10], search[10];
	int age, id;*/

	for (int i = 0; i < n; i++)
	{
		cout << "�л� �̸�: ";
		cin >> name;
		cout << "�й�: ";
		cin >> num;
		//student[i].info(name, id);
		sarray[i].setInfo(name, num);
	}
	/* �׽�Ʈ ����
	for (int i = 0; i < n; i++) {
		cout << sarray[i].getNAme() << endl;
	}*/
	while (true) {
		cout << "�й��� ã����� �л��� �̸�: ";
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