// Exam03_08.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct StructCircle {
private:
	int radius;
public:
	StructCircle(int r) {
		radius = r;
	}
	double getArea();
};

double StructCircle::getArea() {
	return 3.14*radius*radius;
}

int main()
{
	StructCircle waffle(3);
	cout << "면적은 " << waffle.getArea();
    return 0;
}

