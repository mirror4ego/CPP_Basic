// Exam06_02.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int sum(int a, int b) { // a에서 b까지 합하기
	int s = 0;
	for (int i = a; i <= b; i++)
		s += i;
	return s;
}

int sum(int a) { // 0에서 a까지 합하기
	int s = 0;
	for (int i = 0; i <= a; i++)
		s += i;
	return s;
}


int main()
{
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
    return 0;
}

