// Exam12_01.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char name[10], dept[20];
	int sid;

	// 키보드로부터 읽기
	cout << "이름>>";
	cin >> name; // 키보드에서 이름 입력 받음
	cout << "학번(숫자로)>>";
	cin >> sid; // 키보드에서 학번 입력 받음
	cout << "학과>>";
	cin >> dept; // 키보드에서 학과 입력 받음

				 // 파일 열기. student.txt 파일을 열고, 출력 스트림 생성
	ofstream fout("C:\\Users\\mirro\\Documents\\source\\repos\\CPP_Basic\\chap12\\student.txt");
	if (!fout) { // 열기 실패
		cout << "해당 파일을 열 수 없다";
		return 0;
	}

	// 파일 쓰기
	fout << name << endl; // name 쓰기
	fout << sid << endl; // sid 쓰기
	fout << dept << endl; // dept 쓰기

	fout.close(); // 파일 닫기
}
