// Pointer_Test.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int* myIntegerPointer = nullptr;
	if (!myIntegerPointer)
	{
		myIntegerPointer = new int;
	}
	*myIntegerPointer = 9;

	delete myIntegerPointer;
	myIntegerPointer = nullptr;
}
