// Exam02_01.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
/*
	소스: SimpleC++.cpp
	cout과 << 연산자를 이용하여 화면에 출력한다.
*/

#include "stdafx.h"
#include <iostream> // cout과 << 연산자 포함

// C++ 프로그램은 main() 함수에서부터 실행을 시작한다.
int f() {
	std::cout << "함수 f 소환됨\n";
	return -1;
}

int main()
{
	std::cout << "Hello\n"; // 화면에 Hello를 출력하고 다음 줄로 넘어감
	std::cout << "첫 번째 맛보기입니다.\n";

	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << n << "hello" << true << '\n';
	std::cout << "n + 5 =" << n + 5 << '\n';
	std::cout << f() << '\n'; // 함수 f()의 리턴값 출력, 이 해당 f메소드를 소환 하려면 메인 함수의 위쪽에 f함수가 존재하여야 한다.
	std::cout << "Hello" << std::endl; // 다음줄로 넘어가는 조작자

    return 0; // main() 함수가 종료하면 프로그램이 종료됨
}



