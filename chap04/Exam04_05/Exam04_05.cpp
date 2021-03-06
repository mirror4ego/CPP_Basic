// Exam04_05.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int *p; // 포인터 변수 선언

	p = new int; // int 타입 1개 할당
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	*p = 5; // 할당 받은 정수 공간에 5 기록
	int n = *p; // 포인터 변수 p에 있던 값을 소환해서 n에 기입
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;

    return 0;
}