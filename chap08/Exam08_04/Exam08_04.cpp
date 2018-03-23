// Exam08_04.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : private Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

int main() {
	Derived x;
	x.a = 5; 		// ①
	x.setA(10);		// ②
	x.showA(); 		// ③
	x.b = 10; 		// ④
	x.setB(10);		// ⑤
	x.showB(); 		// ⑥
}
