// Exam09_01.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Base {
public:
	void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	void f() { cout << "Derived::f() called" << endl; }
};


int main()
{
	Derived d, *pDer;
	pDer = &d; // 객체 d를 가리킨다.
	pDer->f(); // Derived의 멤버 f() 호출

	Base* pBase;
	pBase = pDer; // 업캐스팅. 객체 d를 가리킨다.
	pBase->f(); // Base의 멤버 f() 호출
    return 0;
}

