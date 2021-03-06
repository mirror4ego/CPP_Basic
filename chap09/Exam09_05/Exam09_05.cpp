// Exam09_05.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Base {
public:
	virtual ~Base() {
		cout << "~Base()" << endl;
	}
};

class Derived : public Base {
public:
	virtual ~Derived() {
		cout << "~Derived()" << endl;
	}
};


int main()
{
	Derived *dp = new Derived();
	Base *bp = new Derived();

	delete dp; // Derived의 포인터로 소멸
	delete bp; // Base의 포인터로 소멸
    return 0;
}

