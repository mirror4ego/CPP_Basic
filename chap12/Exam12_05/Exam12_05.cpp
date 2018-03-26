// Exam12_05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini");
	if (!fin) {
		cout << "c:\\windows\\system.ini 열기 실패" << endl;
		return 0;
	}

	char buf[81]; // 한 라인이 최대 80개의 문자로 구성된다고 가정
	while (true) {
		fin.getline(buf, 81); // 한 라인이 최대 80개의 문자로 구성
		if (fin.eof()) break; // 읽기 종료
		cout << buf << endl; // 라인 출력
	}
	fin.close();
}


