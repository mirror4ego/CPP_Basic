// Exam05_02.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius;; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
};

Circle getCircle() {
	Circle tmp(30);
	return tmp; // 객체 tmp를 리턴한다.
}

int main()
{
	Circle c; // 객체가 생성된다. radius = 1로 초기화된다.
	cout << c.getArea() << endl;
	
	c = getCircle();
	cout << c.getArea() << endl;
	return 0;
}


