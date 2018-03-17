// Exam03_02.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Rectangle { // Rectangle 클래스 선언
public:
	int width;
	int height;
	double getArea();
};

double Rectangle::getArea() {
	return width * height;
}

int main()
{
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
    return 0;
}

