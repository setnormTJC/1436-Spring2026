// Filling up a dynamic array by reading from a file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream> 
#include <iostream>
#include<vector> 

using namespace std;


float determineAverageGradeInThisClass(string studentGradesFilename)
{
	ifstream fin(studentGradesFilename);

	if (!fin)
	{
		cout << "File " << studentGradesFilename << " was not found :(\n";
		return {}; //this means an EMPTY ARRAY 
	}

	vector<float> studentGrades; 


	while (!fin.eof())
	{
		float currentStudentGrade; 
		fin >> currentStudentGrade;

		studentGrades.push_back(currentStudentGrade);
	}


	return 0.0f; 

}

int main()
{
	string filename = "studentGrades.txt";

	float average = determineAverageGradeInThisClass(filename);
}
