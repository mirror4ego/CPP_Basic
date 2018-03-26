// Exam12_03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "C:\\Windows\\system.ini"; // 읽을 파일명
	ifstream fin(file);
	if (!fin) {
		cout << file << " 열기 오류" << endl;
		return 0;
	}
	int count = 0;
	int c;
	while((c=fin.get()) !=EOF){ // EOF를 만날 때까지 읽음
		cout << (char)c; // 읽은 문자를 화면에 출력
		count++; // 읽은 문자 개수 카운트
	}

	cout << "읽은 바이트 수는 " << count << endl;
	fin.close(); // 파일 닫기
}
