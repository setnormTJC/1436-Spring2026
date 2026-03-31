#pragma once

#include<iostream>


using namespace std;

void commentOnUserAge(int age)
{
	//float age = 1.5;

	if (age > 60)
	{
		cout << "You are elderly\n";
	}

	else if (age > 40)
	{
		cout << "Middle aged:\n";
	}

	else //age <= 40
	{
		cout << "Young 'un\n";
	}
}