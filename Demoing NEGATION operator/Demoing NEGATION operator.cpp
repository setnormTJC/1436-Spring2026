// Demoing NEGATION operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>


void simulateTrafficLight()
{
	bool lightIsGreen = false; 
	

	while (true)
	{
		Sleep(2000); 

		if (lightIsGreen == true)
		{
			std::cout << "Go - the light is green\n";
		}

		else
		{
			std::cout << "STOP\n";
		}

		lightIsGreen = !lightIsGreen; 

	}
}

int main()
{
	simulateTrafficLight(); 
	//Sleep(1000); 
	//std::cout << "Woke up after 1 second\n";


	//Sleep(3000);
	//std::cout << "Woke up after 3 second\n";

	//std::system("cls"); 

	//Sleep(5000);
	//std::cout << "Woke up after 5 second\n";
}

