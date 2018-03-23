// Exam05_03.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int &refn = n;
	n = 4;
	refn++; // refn=5, n=5
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i; // refn=1, n=1
	refn++; // refn=2, n=2
	cout << i << '\t' << n << '\t' << refn << endl;

	int *p = &refn; // p는 refn의 주소를 가짐. p는 n의 주소
	*p = 20; // refn=20, n=20
	cout << i << '\t' << n << '\t' << refn << endl;
    return 0;
}

