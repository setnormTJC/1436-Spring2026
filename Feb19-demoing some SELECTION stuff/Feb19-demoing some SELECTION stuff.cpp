// Feb19-demoing some SELECTION stuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream> 
#include <iostream>
#include<string> 


using namespace std; 

void demoFirstExampleOfANDOperator()
{
	int par = 4;
	int strokeCount = 3;

	if (par == 4 and strokeCount == 3)
		//remember == is equality operator
	{
		//this is called the "body" of the if statement
		std::cout << "birdie" << endl;
		std::cout << "Good job!" << endl;
	}
	else
	{
		cout << "NOT birdie" << endl;
	}
}


void demoOROperator()
{
	string time = "day";
	string weather = "clear";
	int speed = 55;
	if ((time == "night") or (weather == "rainy"))
	{
		cout << "Slowing down\n";
		speed = speed - 5; // slow down
	}


	cout << "Speed is : " << speed << "\n";
}


void demoJohnnyLaw()
{
	int speed = 70; 


	//bool amISpeeding = false; 

	if (!(speed <= 70))
	{
		//amISpeeding = true; //
		cout << "I'm pulling you over for speeding." << endl;
	}

	else
	{
		cout << "Thank you for driving safely.\n";
	}
}


/*Lexicon is a LIST of words - a DICTIONARY is a MAPPPING of words to their meanings*/
void printIndonesianLexicon()
{
	string absoluteFilePath = "C:/Users/Work/Downloads/kata.txt";
	
	ifstream fin(absoluteFilePath);

	//CONFIRM that the file is found (before we waste any time reading from a file that does not exist)
	if (!fin)
	{
		cout << "File at this path: " << absoluteFilePath << " was not found :(\n";
		return; //"early return" 
	}

	//note: no else used here!
	string currentWord; 
	
	
	while (getline(fin, currentWord))
	{
		//print only words that are "long"
		//std::string longestWordSoFar = ...
		if (currentWord.length() > 14 && currentWord[0] == 'a')
		{
			cout << currentWord << "\n";
		}

		//else
		//{
		//	cout << "That word isn't long\n";
		//}
	}

}

int main()
{
	//demoOROperator(); 


	//demoJohnnyLaw(); 

	printIndonesianLexicon(); 

}

