// March17-printing a 2D array - hooray!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<string> 

#include<vector> 


using namespace std; 

void printTheGrid(vector<vector<string>> theGrid)
{
	for (int row = 0; row < 3; ++row)
	{
		for (int column = 0; column < 3; ++column)
		{
			cout << theGrid[row][column] << " ";
		}
		cout << "\n";
	}
}

int main()
{
	vector<vector<string>> theGrid =
	{
		{"1", "0", "1"}, //first row 
		{"0", "1", "0"}, //second row
		{"0", "0", "1"} //third row 
	};

	printTheGrid(theGrid);


}

