// March24-in class lab - SCRABBLE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<map>
#include<string> 
#include "scrabbleFunctions.h"
//#includ

using namespace std; 

int main()
{
	//cout << "Enter the word you wanna find the score of:\n";
	//string userWord; 
	//getline(cin, userWord);

	//int score = calculateScore(userWord);
	//
	//cout << "The score is!!!!!!: " << score << "\n";

	//let's read a dictionary file and determine the (is it unique) maximum-scoring word in Scrabble


	//this will reinforce the understanding of dynamic arrays and functions (constraint)

	string filename = "dictionaryFile.txt";
	auto listOfDictionaryWords = getListFromFile(filename); 
	//list of words? data type is vector<string> 
}

