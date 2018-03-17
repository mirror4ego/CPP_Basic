// Exam04_06.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	//double *d = new double;
	//*d = 3.14;

	//int *arrayint = new int[];
	//cout << "5개의 정수를 입력>>";
	//for (int i = 0; i < 5; i++) {
	//	cout << i + 1 << "번째 정수: "; // 프롬프트 출력
	//	cin >> arrayint[i]; // 키보드로부터 정수 입력
	//}

	cout << "입력할 정수의 개수는?";
	int n;
	cin >> n; // 정수의 개수 입력
	if (n <= 0) return 0;
	int *p = new int[n]; // n 개의 정수 배열 동적 할당
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 정수: "; // 프롬프트 출력
		cin >> p[i]; // 키보드로부터 정수 입력
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];
	cout << "평균 = " << sum / n << endl;

	delete[] p; // 배열 메모리 반환

	return 0;
}


