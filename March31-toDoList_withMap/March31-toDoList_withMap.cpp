// March31-toDoList_withMap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
#include "ToDoList.h"


using namespace std; 

int main()
{
	map<int, string> toDoList =
	{
		{1, "Ponder the meaning of life"},
		{2, "Take action"},
		{3, "Nap ... zzzzz"}
	};

	//cout << "The FIRST item on your list is: "
	//	<< taskNumberMappedToTask[1] << "\n";


	addStuffToList(toDoList);


	printToDoList(toDoList);
}
