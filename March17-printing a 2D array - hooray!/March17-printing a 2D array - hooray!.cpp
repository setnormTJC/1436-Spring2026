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

	//printTheGrid(theGrid);


	bool isGameOver = true;// , false; ("simple data type") ("non-simple" -> array (a list of stuff) 

	isGameOver = !isGameOver; //flip flop (toggle)

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

	//a = 123123123; //error!



	//this is ANOTHER example of a complex (and also hetergeneous data type)
	//struct Person
	//{
	//	int age; 
	//	std::string name; 
	//};


}

