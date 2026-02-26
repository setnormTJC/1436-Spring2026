// Feb26-first day on ARRAYS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<vector> //our new best friend! hooray!

using namespace std; //be bad boys (and girls) 

int multiplyInputByTwo(int a)
{
	return a * 2; 
}

int main()
{
	//cout << multiplyInputByTwo(3) << "\n"; //prints 6


	vector<string> groceryList =
	{
		"eggs",
		"bacon",
		"tuna", //homage to TheNewBoston YT channel
		"string cheese"
	};

	groceryList.push_back("tomatoes"); //after inserting at rear, size grows to 5

	//like the size in Bytes? 
	//cout << "The SIZE of the grocery list is: " << groceryList.size() << "\n";
	for (int index = 0; index < groceryList.size(); ++index) //++index is roughly the same thing as index++
	{
		cout << groceryList.at(index) << "\n";
	}
	//<> is a pair of "angle brackets" 
	// (they are related to something called "templates" (generic programming)
}

