#pragma once

#include<fstream>
#include<iostream> 
#include<sstream> 
#include<string>
#include<vector> //an array (a LIST of stuff) whose size can grow and SHRINK

using namespace std; 

struct Point
{
	int x, y;
};


vector<Point> readFileAndStoreContents(string filename)
{
	ifstream fin(filename);

	if (fin.is_open() == false)
	{
		cout << filename << " not found :(\n";
		return {}; //empty array 
	}

	string currentRowInFile;
	while (getline(fin, currentRowInFile))
	{
		//cout << currentRowInFile << "\n";

		//now use the stringstream thingy to split into x and y for the point: 
		stringstream ss(currentRowInFile); //NOT super saiyan

		string currentPartOfRow; 
		
		Point currentPoint; 
		getline(ss, currentPartOfRow, ',');
		currentPoint.x = stoi(currentPartOfRow);

		getline(ss, currentPartOfRow, ',');
		currentPoint.y = stoi(currentPartOfRow);

	}

	return {}; 
}