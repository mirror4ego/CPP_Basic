// Exam13_07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#include "MyStack.h"

int main()
{
	MyStack intStack;
	try {
		intStack.push(100); // 100 푸시
		intStack.push(200); // 200 푸시
		cout << intStack.pop() << endl; // 팝 200
		cout << intStack.pop() << endl; // 팝 100
		cout << intStack.pop() << endl; // "Stack Empty" 예외 발생
	}
	catch (const char* s) {
		cout << "예외 발생 : " << s << endl;
	}
    return 0;
}

