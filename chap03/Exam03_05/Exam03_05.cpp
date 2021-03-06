// Exam03_03.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); // 기본 생성자
	Circle(int r); // 매개 변수 있는 생성자
	~Circle(); // 소멸자 선언
	double getArea();
};

Circle::Circle() {
	radius = 1; // 반지름 값 초기화
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r; // 반지름 값 초기화
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() { // 소멸자 구현
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main()
{
	Circle donut; // circle 인스턴스 생성해서 donut 변수에 넣음, 객체가 생성되면서 메모리가 할당됨
	double area = donut.getArea(); // donut 객체의 면적 알아내기
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);// circle 인스턴스 생성해서 pizza 변수에 넣음
	area = pizza.getArea(); // pizza 객체의 면적 알아내기
	cout << "pizza 면적은 " << area << endl;
	return 0;
}

