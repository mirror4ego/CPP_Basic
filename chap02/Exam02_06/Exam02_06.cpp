// Exam02_06.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "주소를 입력하세요>>";

	char address[100];
	cin.getline(address, 100, '&'); // 엔터키가 입력될 때까지 최대 99개의 문자 입력, 마지막 매개변수는 생략가능
									//cin.getline(address, 100, '\n'); 
									//cin.getline(address, 100, ' '); 
									// 맨 뒤의 매개변수는 어떤 명령어가 와야 입력이 끝인지를 표시해주는것, \n은 엔터키를 뜻하고 ' '는 스페이스 공백 입력 뜻함, &를 넣으면 & 문자가 오면 끝

	cout << "주소는" << address << "입니다\n"; // 주소출력

	int c = 'a';
	cout << "c문자 변수는 공백인가? " << isspace(c) << '\n';

    return 0;
}

