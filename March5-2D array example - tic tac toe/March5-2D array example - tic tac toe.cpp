// March5-2D array example - tic tac toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<array> 
#include <iostream>
#include<string> 
#include<vector> 

using namespace std; 


void printTheGrid(vector<vector<char>> ticTacToeGrid)
{
	for (int row = 0; row < 3; ++row)
	{
		for (int column = 0; column < 3; ++column)
		{
			cout << ticTacToeGrid.at(row).at(column) << "\t";
		}//thrice
		cout << "\n"; //moves the printing cursor to the beginning of the next line after an entire ROW has been printed
	}
}

void updateTheGrid(vector<vector<char>> ticTacToeGrid, char theMovePosition)
{
	switch (theMovePosition)
	{
	case '1': 
		ticTacToeGrid[0][0] = 'X'; 
		break; 

	case '2': 
		ticTacToeGrid[0][1] = 'X'; 
		break; 

		//insert the other cases, if you like ... 
	}
}

int main()
{
	//this here is a "static" array (its size cannot grow or shrink)
	//array<char, 3> threeLetters =
	//{
	//	'a', 'b', 'c'
	//};

	vector<vector<char>> ticTacToeGrid =
	{
		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'},
	};

	//call ma boy!
	printTheGrid(ticTacToeGrid);


	cout << "Dost thou want to make a move, P1? \n";
	char p1Move; 

	cin >> p1Move; 

	//getline(cin, p1Move);//getline stores the input as a STRING (not a char) 

	updateTheGrid(ticTacToeGrid, p1Move);


	cout << "Updated the game grid to ..\n";

	printTheGrid(ticTacToeGrid);

}

