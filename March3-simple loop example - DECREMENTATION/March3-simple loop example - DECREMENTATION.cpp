// March3-simple loop example - DECREMENTATION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<Windows.h> //this gives access to the SLEEP function - hooray

using namespace std; 

int main()
{
	//int countdown = 5;
	//while (countdown >= 0)
	//{
	//	cout << countdown << "...";
	//	countdown--; //equivalently: countdown = countdown - 1
	//}
	//cout << "Liftoff.";

	int countdown = 5; 
	while (countdown >= 0)
	{
		if (countdown == 1'000'000)
		{
			cout << "That's a long time to wait - is the average human lifetime this long?\n";
		}
		//this in the braces is called the "body" of the loop!
		cout << countdown << "...";
		countdown--; //subtracts 1 from the countdown value
		Sleep(1'000); 
	}
	//[]//bracket
	cout << "Liftoff\n";
	system("pause"); 
	system("finalCountdown.wav");
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
