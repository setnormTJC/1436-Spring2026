#pragma once

#include<string> 
#include <iostream>

using namespace std; 

struct Date
{
	/*The 3 things below are "fields" (or member variables)*/
	string month; 
	int day{}; //ex: the 1st of April

	int year; 

	/*Prints the 'Muerican way! (ex: January 1, 1970-> note this is the UNIX epoch)*/
	void print() 
	{
		cout << month << " " << day << ", " << year << "\n";
	} 
};