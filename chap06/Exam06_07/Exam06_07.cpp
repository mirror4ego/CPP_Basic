// Exam06_07.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

float square(float a) {
	return a * a;
}

double square(double a) {
	return a * a;
}

int main()
{
	cout << square(3.0); // square(double a); 호출
	cout << square(3); // 중복된 함수에 대한 모호한 호출로서, 컴파일 오류
    return 0;
}

