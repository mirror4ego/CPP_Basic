// Exam04_01.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle { // 서클 클래스 선언
	int radius; // 반지름 변수 선언
public: // 클래스 밖에서 사용 가능하도록 한 접근제한자
	Circle() { radius = 1; } // 반지름을 무조건 1로 하는 생성자
	Circle(int r) { radius = r; } // 반지름을 매개변수갑승로 하는 생성자
	double getArea(); // 사용할 메서드 구조를 선언, 이 메서드를 사용하면 이 클래스의 어떤 변수를 사용해서 크기를 구하고 그 값을 double 타입으로 반환
};

double Circle::getArea() { // getArea 메소드의 실제 구현체
	return 3.14*radius*radius; // 내부 동작... 원을 구하는 공식을 적용한것이다.
}

int main()
{
	Circle donut; // 도넛 객체를 원 타입으로 생성, 기본생성자 사용
	Circle pizza(30); // 피자 객체를 원 타입으로 생성, 매개변수가 있는 생성자 사용

	// 객체 이름으로 멤버 접근
	cout << donut.getArea() << endl;

	// 객체 포인터로 멤버 접근
	Circle *p; // 서클의 객체 주소를 저장할 포인터 변수 선언
	p = &donut; // 포인터 변수에 donut객체의 주소를 집어 넣는다. 
	cout << p->getArea() << endl; // donut의 getArea() 호출
	cout << (*p).getArea() << endl; // donut의 getArea() 호출

	p = &pizza; // 이번엔 포인터 변수에 pizza 객체의 주소를 집어 넣음
	cout << p->getArea() << endl; // pizza의 getArea() 호출
	cout << (*p).getArea() << endl; // pizza의 getArea() 호출

    return 0;
}

