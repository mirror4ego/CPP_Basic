// Exam06_11.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle {
private:
	static int numOfCircles; // 생성된 원의 개수 기억
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircles--; }// 생성된 원의 개수 감소
	double getArea() { return 3.14*radius*radius; }
	static int getNumofCircles() { return numOfCircles; }
};

Circle::Circle(int r) {
	radius = r;
	numOfCircles++; // 생성된 원의 개수 증가
}

int Circle::numOfCircles = 0; // 0으로 초기화

int main()
{
	Circle *p = new Circle[10]; // 10개의 생성자 실행
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumofCircles() << endl;

	delete[] p; // 10개의 소멸자 실행
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumofCircles() << endl;

	Circle a; // 생성자 실행
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumofCircles() << endl;

	Circle b; // 생성자 실행
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumofCircles() << endl;
    return 0;
}

