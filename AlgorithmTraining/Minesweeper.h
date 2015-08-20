
#include <iostream>
using namespace std;

static int fieldCnt = 0;

void strCpy(const char* origin, char* const dest)
{
	while(*dest = *origin); 
}

void InputMineSweeper()
{
	int c, r;
	cin >> c >> r;

	char* mines = new char(c*r);

	for( int i=0 ; i <  c; ++i)
	{
		char* str;
		//cin >> 
		for( int j=0; j < r; ++j)
		{
			cin >> mines[i+j]; 
		}
	}

	cout << "Field #" << ++fieldCnt << ":" << endl;

	delete mines;
}