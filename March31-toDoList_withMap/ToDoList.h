#pragma once

#include<map> 
#include <string>
#include <iostream>

using namespace std;

void addStuffToList(map<int, string> &toDoList)
{
	
	cout << "What do ya wanna add\n";
	cout << "The CURRENT number of things to do is: " << toDoList.size() << "\n";

	string thingToAdd; 
	getline(cin, thingToAdd);


	int newTaskNumber = toDoList.size() + 1; 

	toDoList.insert({ newTaskNumber, thingToAdd });

}

void printToDoList(map<int, string> toDoList)
{
	for (pair<int, string> currentPair : toDoList)
	{
		cout << currentPair.first << "-" << currentPair.second << "\n";
	}
}