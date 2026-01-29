#include<iostream> 
#include <string> 

using namespace std; // I wonder what this thing does???


int main()
{
	//notice that this is indented (one level)
		//this is TWO levels of indentation

	
	cout << "Enter your (user)name:\n";
	string username; //this is called a "variable declaration" (declare that this variable exists)
	//what this does is 
	getline(cin, username);

	cout << "You entered this username: " << username << "\n";

	//the rest of this program is going to be a calculator 
	cout << "Enter the arithmetic expression you want to calculate the result of (ex: 5 + 2):\n";
	cout << "This program will determine the result (ex: 5 + 2 = 7):\n";

	int theFirstNumber; 
	int the_second_number; //examples of ints: -234, 0, 85959
	char theOperation; //char is not charcoal - it's short for CHARACTER (not in an RPG)

	//5 + 2
	cin >> theFirstNumber >> theOperation >> the_second_number;

	cout << "Echoing your input back at you (to verify that we read it in correctly)\n";
	
	// drawl a box
	//cout << "┌ \n"; // test if the computer allows use of these symbols

	cout << "The first number is: " << theFirstNumber <<
		" The operation is: " << theOperation << " The second number is: " <<
		the_second_number; // this is ok to press enter to seperate the info


	if (theOperation == '+')
	{
		cout << "\n\nADDING those 2 numbers gives: " << theFirstNumber + the_second_number << "\n";
	}

	else if (theOperation == '-')
	{
		cout << "\n\nSUBTRACTING those 2 numbers (which were " << theFirstNumber
			<< " and " << the_second_number << " gives the result: "
			<< theFirstNumber - the_second_number << "\n";
	}

	if (theOperation == '*')
	{
		cout << "\n\nMULTIPLYING those 2 numbers (which were " << theFirstNumber
			<< " and " << the_second_number << " gives the result: "
			<< theFirstNumber * the_second_number << "\n";
	}

	return 0; // completed successfully
}