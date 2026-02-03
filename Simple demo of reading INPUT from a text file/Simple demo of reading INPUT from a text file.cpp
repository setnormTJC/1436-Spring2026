// Simple demo of reading INPUT from a text file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream> //f as in FILE
#include <iostream> //io as "general" input/out
#include<string> //string as in a STRING of characters

using namespace std; //I am going to NOT use this later on in this class...

int main()
{
	cout << "Here are the contents of that song\n";

	string filename = "ElmosSong.txt"; // what we put teacher? We have to include the file extention?? Why is that? because its part of the filename


	ifstream fin(filename);

	string currentLine;

	//Let's just "drive the car" and not worry about the deets (details)
	while (getline(fin, currentLine)) // this is scarrry! is this like while the line is full then print it it???
	{

		cout << currentLine << "\n";
	}
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
