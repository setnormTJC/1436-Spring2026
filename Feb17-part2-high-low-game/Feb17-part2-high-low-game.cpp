// Feb17-part2-high-low-game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include        <random>

using namespace std; 

int getRandomNumberBetween0And1000()
{
	mt19937 rng(random_device{}()); 

	uniform_int_distribution<int> distribution(0, 1000);

	return distribution(rng); 
}

void playHiLow()
{
	int theRandomNumber = getRandomNumberBetween0And1000();


	//for debugging purposes, let's be damn dirty cheaters: 
	//cout << "The correct number is: " << theRandomNumber << "\n";

	int usersGuess = -123;

	int guessCount = 0;

	while (usersGuess != theRandomNumber and guessCount < 7) //2^7 = 128 
	{
		cout << "GUESS the numbah!\n";
		cin >> usersGuess;


		if (usersGuess > theRandomNumber)
		{
			cout << "That is too HIGH\n";
		}

		else if (usersGuess < theRandomNumber)
		{
			cout << "Too LOW\n";
		}

		else //usersGuess == theRandomNumber (not the use of double equal sign) 
		{
			cout << "Winnah, winnah, chicken dinnah!\n";
		}


		//guessCount = guessCount + 1; 

		guessCount++; //this is the same as the commented-out code 2 lines above 
	} //end while loop ("game loop")

	if (guessCount >= 7)
	{
		cout << "Loosah!\n";
	}

	else
	{
		cout << "You did NOT lose!\n";
	}
}


int main()
{
	playHiLow(); 
}

