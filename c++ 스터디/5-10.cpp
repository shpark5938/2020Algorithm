#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {	// Person 클래스 선언
	char *name;
	int id;
public:
	Person(int id, const char *name);	// 생성자
	~Person();	// 소멸자
	void changeName(const char *name);
	void show() {
		cout << id << ',' << name << endl;
	}
};

Person::Person(int id, const char *name) {		// 생성자
	this->id = id;
	int len = strlen(name);						// name의 문자개수
	this->name = new char[len + 1];				// name문자열 공간 할당
	strcpy(this->name, name);					// name 에 문자열 복사
}

Person::~Person() {								// 소멸자
	if (name)									// 만약 name에 동적 할당된 배열이 있으면
		delete[]name;							// 동적 할당 메모리 소멸 -> name 메모리 반환
}

void Person::changeName(const char *name) {		//이름 변경
	if (strlen(name) > strlen(this->name))
		return;									// 현재 name에 할당된 메모리보다 긴 이름으로 바꿀 수 없다.
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kite");					// (1) father 객체 생성
	Person daughter(father);					// (2) daughter 객체 복사 생성, 복사생성자호출		(컴파일러가 삽입한 디폴트 복사 생성자 호출)

	cout << "daughter 객체 생성 직후 =====" << endl;
	father.show();								// (3) father 객체 출력
	daughter.show();							// (3) daughter 객체 출력

	daughter.changeName("Grace");				// (4) daughter 객체의 name 문자열을 "Grace"로 변경
	cout << "daughter 이름을 Grace 로 변경한 후 ====" << endl;

	father.show();								// (5) father 객체 출력
	daughter.show();							// (5) daughter 객체 출력

	return 0;									// (6), (7) daughter, father 객체 소멸
												// ==> daughter, father 객체 순으로 소멸 -> father 이 소멸할 때, 이미 daughter가 소멸될 때 이미 반환한 메모리를 다시 반환하게 되므로 프로그램 비정상 종료됨
}