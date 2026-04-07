#pragma once //what does this mean? 

#include<iomanip> //set column width (ex: in a table of data) -> AND setprecsion (for floats) 
#include<string> 

using namespace std; 

struct Weapon
{
	//these are called ATTRIBUTES (or, more high-fallutingly, member variables)
	int attackPower{}; //braces initialize to 0 (for an integer)

	string name; //ax


	float price; 

	void print() //this is an example of a "member function"
	{
		const int NAME_COLUMN_WIDTH = 20;
		const int ATTACK_POWER_COLUMN_WIDTH = 5; 
		const int PRICE_COLUMN_WIDTH = 5; //10'000 credits (not usd)

		cout << left << setw(NAME_COLUMN_WIDTH) << name;// << attackPower << "\n";
		cout << left << setw(ATTACK_POWER_COLUMN_WIDTH) << attackPower;
		cout << left << setw(PRICE_COLUMN_WIDTH) << price;
	}
	
};
