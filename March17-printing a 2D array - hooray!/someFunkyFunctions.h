#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std; //the nice "beginner" fix


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


void demoSizeOfOperator(int numberOfThingsYouWantInTheList)
{

	cout << "An integer in C++ takes up this amount of RAM (in bytes): " << sizeof(int) << "\n";
	vector<int> randomNumbers; 

	for (int i = 0; i < numberOfThingsYouWantInTheList; ++i)
	{
		randomNumbers.push_back(rand() % 100);
	}

	cout << "The number of bytes occupied by this array is: "
		<< numberOfThingsYouWantInTheList * sizeof(int) << "\n";

	system("pause"); 

}

void simpleDemoOfArray()
{
	/*homogeneous data structures (lists) -> arrays are "complex" data types (because more than one value is stored)*/
	vector<string> someEmotions =
	{
		"joy",
		"disgust",
		"sadness"
	};


	cout << "BEFORE inserting (AKA: pushing into the back) jealousy, the BACKMOST element is: "
	<< someEmotions.back() << "\n";

	someEmotions.push_back("jealousy!");

	cout << "The number of emotions in our current list is: " << someEmotions.size() << "\n";

	for (string currentEmotion : someEmotions)
	{
		//int a = 123; //this guy has "local scope" and CANNOT be accessed outside of this loop!
		cout << currentEmotion << "\n";
	}

}


vector<int> getEvenNumbersUpToTheInput(int theInput)
{
	vector<int> evenNumbersUpToTheInput; //this is a very "verbose" variable name

	for (int number = 0; number < theInput; number += 2)
	{
		evenNumbersUpToTheInput.push_back(number); 
	}

	cout << "Did it work>?!!\n";

	return evenNumbersUpToTheInput; 
}