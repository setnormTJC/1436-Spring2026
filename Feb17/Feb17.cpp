// Feb17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std; 

int main()
{
	while (true)
	{


		cout << "Enter your age:\n";

		int yourAge;
		cin >> yourAge;

		while (yourAge < 0) //trap user in a loop until "reasonable" input is recieved 
		{
			cout << "Age cannot be negative\n";
			cout << "Try that again, old chap\n";
			cin >> yourAge; 
		}

		//if (cin.fail()) //look into this on your own, if interested

		if (yourAge > 0 && yourAge < 18)
		{
			//notice that indentation was automatically done here!
			cout << "You are legally a child\n";
		}

		else if (yourAge >= 18 && yourAge < 60)
		{
			cout << "You are in YO PRIME, brothah!\n";
		}

		else
		{
			cout << "The clock is winding on you. Enjoy your \"Golden\" years\n";
		}
	}


}

