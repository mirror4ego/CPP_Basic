// Exam05_07.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
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

void readRadius(Circle &c) {
	int radius;
	cout << "정수 값으로 반지름을 입력하세요>>";
	cin >> radius; // 반지름 값 입력
	c.setRadius(radius); // 반지름 설정
}

int main()
{
	Circle donut;
	readRadius(donut);
	cout << "donot의 면적 = " << donut.getArea() << endl;
    return 0;
}

