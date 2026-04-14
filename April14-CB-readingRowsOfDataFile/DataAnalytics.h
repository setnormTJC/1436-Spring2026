#pragma once

#include<fstream> 
#include<vector> 
#include <string>
#include<iostream> 

using namespace std;


struct CropRecord
{
	int nitrogenContent; 
	float pH; 
	float sulfurContent; 
	int copperContent; 
	string cropName;  //ex: potato
};


void readDataInFile(string filename)
{
	ifstream fin(filename);

	//make sure that the file is found
	if (fin.is_open() == false)
	{
		cout << "File was not found\n";
		return; //go no further
	}

	string currentRow; 
	while (getline(fin, currentRow))
	{
		cout << currentRow << "\n";
	}
}
