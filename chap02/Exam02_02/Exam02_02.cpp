// Exam02_02.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;
using namespace std; // std이름에 선언된 모든 이름에 대해 std::를 생략하고자 할때

double area(int r); // 함수의 원형 선언

double area(int r) { // 함수 구현
	return 3.14*r*r; // 반지름 r의 원 면적 리턴
}

int main()
{
	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "면적은 " << area(n) << std::endl; // 함수 area()의 리턴 값 출력

	std::cout << "홍길동\n" << "서울 영등포구 동구동" << std::endl;
	cout << "std 사용 선언" << endl;
    return 0;
}

