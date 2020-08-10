#include <iostream>
using namespace std;

class Person {	// Person 클래스 선언
	char *name;
public:
	Person(int id, const char *name);	// 생성자
	void f(Person person);	// 복사 생성자
	Person g();
	~Person();	// 소멸자
	void changeName(const char *name);
	
};

void f(Person person) {
	person.changeName("dummy");
}

Person g() {
	Person mother(2, "Jane");
	return mother;
}

Person::~Person() {	// 소멸자
	if (name)	// 만일 name에 동적 할당된 배열이 있으면
		delete[] name;	// 동적 할당 메모리 소멸
}

void Person::changeName(const char* name) {	// 이름 변경
	if (strlen(name) > strlen(this->name))
		return;		// 현재 name에 할당된 메모리보다 긴 이름으로 바꿀 수 없다
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");
	Person son = father;	// 복사 생성자 호출
	f(father);	// 복사 생성자 호출
	g();	// 복사 생서자 호출
}
