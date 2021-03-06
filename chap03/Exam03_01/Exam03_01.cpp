// Exam03_01.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle { // 원이라는 클래스 선언부
public: // 
	int radius; // 반지름 변수
	double getArea(); // 넓이 구하는 메소드 선언
};

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main()
{
	Circle donut; // circle 인스턴스 생성해서 donut 변수에 넣음, 객체가 생성되면서 메모리가 할당됨
	donut.radius = 1; // donut 객체의 반지름을 1로 설정
	double area = donut.getArea(); // donut 객체의 면적 알아내기
	cout << "donut 면적은 " << area << endl;

	Circle pizza;// circle 인스턴스 생성해서 pizza 변수에 넣음
	pizza.radius = 30; // pizza 객체의 반지름을 30으로 설정
	area = pizza.getArea(); // pizza 객체의 면적 알아내기
	cout << "pizza 면적은 " << area << endl;

    return 0;
}

