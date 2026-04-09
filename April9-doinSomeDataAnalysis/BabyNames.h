#pragma once

#include<fstream> 
#include<iostream>
#include<string> 

using namespace std; 

struct BabyNameRecord
{
	string state; //a state ABBREVIATION (ex: Texas -> TX)
	string sex; //gender (M, F)
	int birthYear; 
	string name; 
	int count; //the number of times the particular name was given in that year, in that state
};

void printFileContents(string& filename)
{
	ifstream fin(filename); 

	//check that the file was found: 
	if (!fin.is_open())
	{
		cout << filename << " was not found\n";
		return; //early return
	}

	string currentLine; 
	while (getline(fin, currentLine))
	{
		//push it real good! (into an array of BabyRecord type)
		//cout << currentLine << "\n";
	}
}