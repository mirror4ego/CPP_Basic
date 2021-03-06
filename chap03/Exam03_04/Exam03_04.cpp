// Exam03_04.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	Rectangle();
	Rectangle(int width, int height);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle() {
	width = 1;
	height = 1;
}
Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}
Rectangle::Rectangle(int length) {
	width = length;
	height = length;
}
bool Rectangle::isSquare() {
	if (width == height) {
		return true;
	}
	else {
		return false;
	}
		
}

int main()
{
	Rectangle rect1;
	Rectangle rect2(3,5);
	Rectangle rect3(3);
	cout << rect2.height;
	cout << rect2.width;
	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;

    return 0;
}

