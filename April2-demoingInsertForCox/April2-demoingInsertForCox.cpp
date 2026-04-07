// April2-demoingInsertForCox.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<algorithm>
#include <iostream>

#include<vector> 


using namespace std; 


int main()
{
	vector<string> names =
	{
		"Alice", 
		"Bob", //0x1321sdafasdf
		"Darth"
	};

	//names.at(2) = "Carol"; //overwrites


	auto location = std::find(names.begin(), names.end(), "Darth");


	names[0] = "asdfadsf";


	//names.insert(location, "Carol");

	//names[2] = "adsfasdf"; 


	//names.begin()._Ptr

	int a; 


	std::erase(names, "Darth");



	//nums.insert(3, 4); 

}

