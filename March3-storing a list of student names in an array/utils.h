#pragma once //what is this madness (ask me one on one)

#include<fstream> 
#include<string>//strings are arrays of CHARACTERS ('z', 'e', etc.)
#include<vector> //this is "dynamic array" (a list whose size can grow and shrink)


using namespace std; 

vector<string> getTheListOfStudents(std::string filename)
{
	ifstream fin(filename);

	if (!fin)
	{
		cout << filename << " was not found\n";
		return {}; //empty array (this prevents us from WASTING time trying to read data from a NON-existent file)
	}

	string currentStudent;
	vector<string> listOfStudents;
	while (getline(fin, currentStudent))
	{
		//cout << currentStudent << "\n";
		listOfStudents.push_back(currentStudent);
	}

	return listOfStudents;

}

/*This is our first ALGORITHM - hooray!*/
string findLongestName(vector<string> listOfStudents)
{
	//loop through all names in the list 
	//for (int studentNumber = 0; studentNumber < listOfStudents.size(); ++studentNumber) //this is the "old school" way
	
	string theLongestName = listOfStudents.at(0); 

	for (string currentStudent : listOfStudents) //this is the "new school" way (AKA : a "range-based for loop"
	{
		if (currentStudent.length() > theLongestName.length())
		{
			//for TESTING this algo, print whenever an UPDATE occurs!
			cout << "The FORMER longest name: " << theLongestName << " got UPDATED to: " << currentStudent << '\n';
			theLongestName = currentStudent;
		}
	}

	return theLongestName; 
}