// Exam02_04.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

/*
키보드로 문자열 입력
*/

#include "stdafx.h"
#include <iostream>
#include <cstring> // c스트링을 다루기 위한 라이브러리, c++ 표준이므로 <string.h> 보다는 이것을 인클루드 하는것이 바람직하다
#include <string.h> // cstring을 사용하는것이 바람직
using namespace std;


int main()
{
	char name1[6] = { 'G', 'r', 'a', 'c', 'e', '\0' }; // name1은 배열의 맨 끝에 \0이 있기 때문에 문자열 "Grace"
	char name2[5] = { 'G', 'r', 'a', 'c', 'e'}; // name2은 문자열이 아니라 단순한 문자의 배열이다
	cout << name1 << '\n';
	// cout << name2 << '\n'; // 문자의 배열들이므로 이상하게 출력됨
	char name3[6] = "Grace"; //  이런식으로도 문자열 표현 가능
	char name4[] = "Grace"; // 배열 크기를 지정하지 않고 문자열을 집어 넣을 경우 문자의 갯수 + 1이 배열의 크기가 자동으로 된다.
	cout << name3 << '\n';
	cout << name4 << '\n';
	char name5[10] = "Grace"; // 배열의 크기가 문자열의 크기보다 크기만 하면 상관 없으며 빈 나머지 공간은 \0으로 채워진다.
	cout << name5 << '\n';

	char name[11]; // 한글은 5개 글자, 영문은 10까지 저장할 수 있다
	cout << "이름을 입력하세요\n";
	cin >> name; // 키보드로부터 문자열을 읽는다.
	cout << "이름은 " << name << "입니다\n"; // 10char를 초과하면 오류가남
    return 0;
}

