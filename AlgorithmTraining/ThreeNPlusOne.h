
#include <iostream>
using namespace std;

int ThreeNPlusOne(int N)
{
	int cnt;
	for(cnt = 0; N != 1; ++cnt)
	{
		cout << N << endl;

		if( N % 2 == 0 )
		{
			N /= 2;
		}
		else
		{
			N = N * 3 + 1;
		}
	}

	cout << N << endl;

	return ++cnt;
}

int CompareToGreaterCycle(int One, int Two)
{
	int cycleOne = ThreeNPlusOne(One);
	cout << "cycleOne: " << cycleOne << endl;
	int cycleTwo = ThreeNPlusOne(Two);
	cout << "cycleTwo: " << cycleTwo << endl;

	return (cycleOne > cycleTwo) ? cycleOne : cycleTwo;
}

int GreaterCycleBetweenOneNTwo(int One, int Two)
{
	int cycle = 0;
	for( int i = One; i <= Two; ++i )
	{
		int temp = cycle;
		cycle = ThreeNPlusOne(i);
		cycle = (temp < cycle) ? cycle: temp;
	}

	return cycle;
}