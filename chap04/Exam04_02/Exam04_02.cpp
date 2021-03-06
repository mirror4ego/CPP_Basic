// Exam04_02.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; } // 외부에서 radius 변수에 접근해서 수정할수 있게 하는 메서드
	double getArea();
};

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main()
{
	Circle circleArray[3]; // (1) Circle 객체 배열 생성, 기본생성자로 간단하게 객체 배열을 만드는 것
	Circle circleArrayCons[3] = { Circle(1), Circle(3), Circle(6) }; // 다른 생성자를 사용한 Circle 객체의 배열
	// 배열의 각 원소 객체의 멤버 접근
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) // 배열의 각 원소 객체의 멤버 접근
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;

	Circle *p; // 서클 타입을 담을 수 있는 포인터 변수 p 선언
	p = circleArray; //  포인터 변수 p에 서클객체배열의 주소를 담음
	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++; // p는 배열의 다음 원소를 가리킴
	}
	p--;
	cout << "Circle " << "1" << "의 면적은 " << p->getArea() << endl;
	cout << "Circle " << "1" << "의 면적은 " << p->getArea() << endl;
    return 0;
}

