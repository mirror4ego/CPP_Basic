// Exam02_03.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "너비를 입력하세요>>";

	int width;
	cin >> width; // 키보드로부터 정수 값 너비를 읽어 width 변수에 저장

	cout << "높이를 입력하세요>>";

	int height;
	cin >> height; // 키보드로부터 정수 값 높이를 읽어 height 변수에 저장, &height 이것처럼 주소값을 주어서는 안된다.

	int area = width * height; // 사각형의 면적 계산
	cout << "면적은 " << area << "\n"; // 면적을 출력하고 다음줄로 넘어감

	cout << "도형의 문자, 높이, 너비를 입력하세요>>";
	char c; // c언어는 모든변수가 실행문 전에 선언되어야하나 c++에서는 프로그램 어디서나 변수 선언이 가능
	cin >> c >> height >> width; // 한번에 여러개의 값을 입력받기
	cout << c << '\n' << height << '\n' << width << '\n';

    return 0;
}

