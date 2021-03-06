// Exam12_08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";

	ifstream fin;
	fin.open(file, ios::in | ios::binary); // 바이너리 I/O 모드로 파일 열기
	if(!fin){ // 열기 실패 검사
		cout << "파일 열기 오류";
		return 0;
	}
	
	int count = 0;
	char s[32]; // 블록 단위로 읽어들일 버퍼
	while(!fin.eof()) { //파일 끝까지 읽는다.
		fin.read(s, 32); // 최대 32 바이트를 읽어 배열 s에 저장
		int n = fin.gcount(); // 실제 읽은 바이트 수 알아냄
		cout.write(s, n); // 버퍼에 있는 n개의 바이트를 화면에 출력
		count += n;
	}
}


