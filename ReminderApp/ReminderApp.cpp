// ReminderApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <chrono>

using namespace std; 


int main()
{
	//vector, map
	
	//vector<Weapon> weapons; 


	//vector<string> namesInThisClass = {"A", "B", ...etc.}
	//vector<float> gradesInThisClass = { 99, 73, 12312 }; 
	
	auto currentTime = chrono::system_clock::now();

	//cout << "Now: " << currentTime << "\n";
	
	vector <int> nums ={11,22,
		33,
		44,
		//missing 55!
		66
	};
	
	//nums.push_back(55); 

	//int insertionLocation = 4; 
	//nums.insert( "55", insertionLocation);

	//nums.insert()
	//nums.insert(insertionLocation, "55");

	auto insertionLocation = std::find(nums.begin(), nums.end(), 66);

	//int valueToInsert = 
	nums.insert(insertionLocation, 55);


	nums.pop_back();


	auto locationOfValueToErase = std::find(nums.begin(), nums.end(), 33);
	//nums.erase(33);


	for (int i = 0; i < nums.size(); ++i)
	{
		cout << nums[i] << "\n";
	}


	cout << "After adding 1 (second? hour?) " << currentTime << "\n";





	//chrono::system_clock reminderTime(currentTime++)

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
