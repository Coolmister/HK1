// HK1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

int main()
{
	//Generate Random Enemy location
	cout << "Enemy located in an 8x8 Grid..." << endl;
	srand(time(0));

	int searchHiNmbr = 64;
	int searchLoNmbr = 1;

	int EnemyLocation = rand() % searchHiNmbr + searchLoNmbr;
	cout << "Beginning search for enemy!" << endl;

	int targetLocaPrediCount = 0;
	bool targetFound = false;

	while (targetFound == false)
	{
		int targetLocaPredi = ((searchHiNmbr - searchLoNmbr) / 2) + searchLoNmbr;

		targetLocaPrediCount++;

		if (targetLocaPredi > EnemyLocation)
		{
			searchHiNmbr = targetLocaPredi - 1;
			cout << "Too high" << endl;
		}
		else if (targetLocaPredi < EnemyLocation)
		{
			searchLoNmbr = targetLocaPredi + 1;
			cout << "Too low" << endl;
		}
		else 
		{
			cout << "Search: " << targetLocaPrediCount << ". Target located! Beginning extermination!" << endl;
			targetFound = true;
		}
	}

    return 0;
}

