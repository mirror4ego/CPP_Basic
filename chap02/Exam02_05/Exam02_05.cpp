// Exam02_05.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <cstring> // strcmp() 함수를 사용하기 위함 헤더 파일
using namespace std;

int main()
{
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while (true) {
		cout << "암호>>";
		cin >> password; // 연산자를 이용해 문자열을 입력받을 경우 입력에 공백이 있으면 그 뒤의 문자열은 입력이 안됨
		//cin객체의 getline멤버 함수를 이용하면 공백이 포함된 문자열을 입력 받을 수 있음
		cout << "문자 최대 99개 입력가능>>";
		char address[100];
		cin.getline(address, 100, ' '); // 엔터키가 입력될 때까지 최대 99개의 문자 입력, 마지막 매개변수는 생략가능
		if (strcmp(password, "C++") == 0) {
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다~~" << endl;
	}
    return 0;
}

