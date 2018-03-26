// Exam11_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Book { // 책을 표현하는 클래스
	string title;
	string press;
	string author;
public:
	Book(string title = "", string press = "", string author = "") {
		this->title = title;
		this->press = press;
		this->author = author;
	}
	friend ostream& operator << (ostream& stream, Book b); // friend 선언
};

// << 연산자 ㅎ마수
ostream& operator << (ostream& stream, Book b) {
	stream << b.title << "," << b.press << "," << b.author;
	return stream;
}


int main()
{
	Book book("소유냐 존재냐", "한국출판사", "에리히프롬"); // Book 클래스 객체 생성
	cout << book; // book 객체 화면 출력
    return 0;
}

