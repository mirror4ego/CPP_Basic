// Exam05_05.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool average(int a[], int size, int& avg) {
	if (size <= 0)
		return false;
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];
	avg = sum / size;
	return true;
}


int main()
{
	int x[] = { 0,1,2,3,4,5 };
	int avg;
	if (average(x, 6, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;

	if (average(x, -2, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;
    return 0;
}

