// Exam11_13.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

istream& question(istream& ins) {
	cout << "거울아 거울아 누가 제일 예쁘니?";
	return ins;
}

int main() {
	string answer;
	cin >> question >> answer;
	cout << "세상에서 제일 예쁜 사람은 " << answer << "입니다." << endl;
}