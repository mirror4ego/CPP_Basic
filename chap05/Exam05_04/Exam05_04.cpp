// Exam05_04.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
};


int main()
{
	Circle circle;
	Circle &refc = circle;
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea(); // 두 호출은 동일 객체에 대한 호출
    return 0;
}

