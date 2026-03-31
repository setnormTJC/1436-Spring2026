#pragma once

#include<chrono> 
#include <iostream>


using namespace std; 


namespace MySpace
{
	int a = 123; 
}

void measureReactionTime()
{
	//using namespace MySpace; 

	//cout << MySpace::a << "\n";


	cout << "Get ready...\n";

	//auto i = 123; 


	std::chrono::steady_clock::time_point startTime = chrono::high_resolution_clock::now(); 


	cout << "Press ENTER when you're ready\n";

	string input; 
	getline(cin, input);

	auto endTime = chrono::high_resolution_clock::now(); 

	cout << (endTime - startTime) << "\n";
}

void benchmarkComputerCountingSpeed(int theNumberToCountTo)
{
	auto startTime = chrono::high_resolution_clock::now(); 

	for (int i = 0; i < theNumberToCountTo; ++i)
	{
		//do nothing! (just count from 0 to theNumberToCountTo)
	}

	auto stopTime = chrono::high_resolution_clock::now(); 

	cout << "It took " << stopTime - startTime << "\n";
}

void setReminder()
{
	cout << "What time is this reminder being set (ex: 5:00 pm - OR 1700?)\n";

	chrono::
	
}