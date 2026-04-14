#pragma once

#include<fstream> 
#include<iostream>
#include<sstream> 
#include<string> 
#include <vector>

using namespace std; 

struct BabyNameRecord
{
	string state; //a state ABBREVIATION (ex: Texas -> TX)
	string sex; //gender (M, F)
	int birthYear = 0; 
	string name; 
	int count = 0; //the number of times the particular name was given in that year, in that state
};

vector<BabyNameRecord> getBabyRecords(string& filename)
{
	ifstream fin(filename); 

	//check that the file was found: 
	if (!fin.is_open())
	{
		cout << filename << " was not found\n";
		return {}; //early return
	}

	string currentLine; 
	
	vector<BabyNameRecord> records; 

	while (getline(fin, currentLine))
	{
		BabyNameRecord currentRecord;// = { currentLine.firstPart, currentLine.secondPar };

		stringstream ss(currentLine);

		string currentPartOfLine; 

		//read in the state first
		getline(ss, currentPartOfLine, ',');
		currentRecord.state = currentPartOfLine; 

		//read in the SEX next: 
		getline(ss, currentPartOfLine, ',');
		currentRecord.sex = currentPartOfLine;

		getline(ss, currentPartOfLine, ',');
		currentRecord.birthYear = stoi(currentPartOfLine);

		getline(ss, currentPartOfLine, ',');
		currentRecord.name = currentPartOfLine; 

		//finally, the number of occurrences:
		getline(ss, currentPartOfLine, ',');
		currentRecord.count = stoi(currentPartOfLine);


		records.push_back(currentRecord);

		//system("pause"); //pauses after every ROW is printed

		//push it real good! (into an array of BabyRecord type)
		//cout << currentLine << "\n";
	}

	return records; 
}