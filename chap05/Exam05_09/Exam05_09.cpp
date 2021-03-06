// Exam05_09.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(Circle& c); // 복사 생성자 선언
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
};

Circle::Circle(Circle& c) { // 복사 생성자 구현
	this->radius = c.radius;
	cout << "복사 생성자 실행 radius = " << radius << endl;
}

int main()
{
	Circle src(30); // src 객체의 보통 생성자 호출
	Circle dest(src); // dest 객체의 복사 생성자 호출

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본의 면적 = " << dest.getArea() << endl;
    return 0;
}

