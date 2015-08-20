// Minesweeper.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <random>
#include <chrono>
#include <string>



int _tmain(int argc, _TCHAR* argv[])
{
	// seed value
	auto curTime = std::chrono::system_clock::now();
	auto duration = curTime.time_since_epoch();
	auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
		

	std::mt19937 mtRand(millis);
	std::uniform_int_distribution<__int64> dist1(0, 1);

	char element[4][4];

	for (int i = 0; i < 4; ++i)
	for (int j = 0; j < 4; ++j)
		element[i][j] = '0';

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			element[i][j] = dist1(mtRand) ? '*' : element[i][j];

			if (element[i][j] == '*')
			{
				for (int i2 = i - 1; i2 < i + 1; ++i2)
				{
					for (int j2 = j - 1; j2 < j + 1; ++j2)
					{	
						if (j2 > -1 && i2 > -1)
						{
							if (element[i2][j2] != '*')
							{
								element[i2][j2] += 1;
							}
						}
					}
					
				}
			}
		}
	}

	for (int i3 = 0; i3 < 4; ++i3)
	{
		for (int j3 = 0; j3 < 4; ++j3)
		{
			std::cout << element[i3][j3];
		}
		
		std::cout << std::endl;
	}

	
	

	//for (int i = 0; i < 4; ++i)
	//{
	//	for (int k = 0; k < 4; ++k)
	//	{
	//		//element[i][k] = *std::to_string(dist1(mtRand)).c_str();
	//		//element[i][k] = dist1(mtRand) ? '*' : '.';
	//		

	//		std::cout << i << k << ' ';
	//		//std::cout << element[i][k] << ' ';
	//	}


	//	std::cout << std::endl;

	//}

	system("pause");
	
	return 0;
}

