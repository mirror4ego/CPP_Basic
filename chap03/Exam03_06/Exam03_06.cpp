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

Circle globalDonut(1000); // 전역 객체 생성
Circle globalPizza(2000);

void f() {
	Circle fDonut(100); //  지역 객체 생성
	Circle fPizza(200);
}

int main()
{
	Circle mainDonut; // 지역 객체 생성
	Circle mainPizza(30);
	return 0;
}

