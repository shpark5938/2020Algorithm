#include <iostream>
using namespace std;

class Person {	// Person Ŭ���� ����
	char *name;
public:
	Person(int id, const char *name);	// ������
	void f(Person person);	// ���� ������
	Person g();
	~Person();	// �Ҹ���
	void changeName(const char *name);
	
};

void f(Person person) {
	person.changeName("dummy");
}

Person g() {
	Person mother(2, "Jane");
	return mother;
}

Person::~Person() {	// �Ҹ���
	if (name)	// ���� name�� ���� �Ҵ�� �迭�� ������
		delete[] name;	// ���� �Ҵ� �޸� �Ҹ�
}

void Person::changeName(const char* name) {	// �̸� ����
	if (strlen(name) > strlen(this->name))
		return;		// ���� name�� �Ҵ�� �޸𸮺��� �� �̸����� �ٲ� �� ����
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");
	Person son = father;	// ���� ������ ȣ��
	f(father);	// ���� ������ ȣ��
	g();	// ���� ������ ȣ��
}
