// March5 - demoing NESTED for loops - MULTIPLICATION table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iomanip>//input/output manipulation 
#include <iostream>


using namespace std; 

int main()
{

	constexpr int COLUMN_WIDTH = 5; 

	for (int outerCounter = 1; outerCounter < 10; ++outerCounter)
	{
		for (int innerCounter = 1; innerCounter < 19; ++innerCounter )
		{
			//cout << "inner counter is: " << innerCounter
			//	<< " and OUTER counter is: " << outerCounter << "\n";
			cout << left << setw(COLUMN_WIDTH) << innerCounter * outerCounter;
		}
		cout << "\n";
	}
}
