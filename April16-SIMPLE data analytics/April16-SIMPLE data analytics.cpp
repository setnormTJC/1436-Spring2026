// April16-SIMPLE data analytics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 
#include "Points.h"

using namespace std; 

int main()
{
	//let's read in and store the array of points from the CSV file
	string filename = "points.csv";
	auto data = readFileAndStoreContents(filename); 
}

