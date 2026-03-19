// March17-printing a 2D array - hooray!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<string> 

#include<vector> 

#include"someFunkyFunctions.h"

using namespace std; 





int main()
{
	//simpleDemoOfArray();

	vector<vector<string>> theGrid =
	{
		{"1", "0", "1"}, //first row 
		{"0", "1", "0"}, //second row
		{"0", "0", "1"} //third row 
	};

	//printTheGrid(theGrid);


	bool isGameOver = true;// , false; ("simple data type") ("non-simple" -> array (a list of stuff) 

	isGameOver = !isGameOver; //flip flop (toggle)


	//a = 123123123; //error!

	//cout << "How many random numbers do you want in the list?\n";
	//int desiredQuantity; 
	//cin >> desiredQuantity; 

	//demoSizeOfOperator(desiredQuantity); 


	int largestEvenNumberWanted = 20; 

	auto evenNumbersUpToInput = getEvenNumbersUpToTheInput(largestEvenNumberWanted); //auto is a NEW keyword! (It's convenient!)


	//this is ANOTHER example of a complex (and also hetergeneous data type)
	//struct Person
	//{
	//	int age; 
	//	std::string name; 
	//};


}

