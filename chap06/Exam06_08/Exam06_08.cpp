// Exam06_08.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int add(int a, int &b) {
	b = b + a;
	return b;
}


int main()
{
	int s = 10, t = 20;
	cout << add(s, t); // 컴파일 오류. 참조 매개 변수로 인해 함수 호출이 모호함
    return 0;
}

