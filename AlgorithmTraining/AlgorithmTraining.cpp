// AlgorithmTraining.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "ThreeNPlusOne.h"
//#include "Minesweeper.h"
#include "LikedList.h"

using namespace std;

char* reverseString(char* str)
{
	char* end = str;
	char temp;

	if (*str)
	{
		while (*end) ++end;
		
		--end; // to ignore null

		while (str < end)
		{
			temp = *str;
			*str++ = *end;
			*end-- = temp;
		}
	}

	return str;
}

int _tmain(int argc, _TCHAR* argv[])
{
	char* str = "Hello World";

	cout << str << endl;
	
	char* result = reverseString(str);

	cout << result << endl;

	system("pause");

	return 0;
}

