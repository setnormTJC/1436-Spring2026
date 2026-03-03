/*This program reads in and stores a list of student names (in this Spring 2026 class) 
and determines who has the LONGEST name in this class*/
#include <iostream>


//#include<utils.h> //let me talk to you one on one about this if you care
#include"utils.h"

int main()
{
	string absoluteFilename = "C:/Users/Work/Downloads/studentRoster.txt"; //absolute filepath
	//string relativeFilename = "studentRoster.txt"; //THIS works IF this file is in the same folder as this CPP file!
	vector<string> studentList = getTheListOfStudents(absoluteFilename);

	//now that we have the list, let's find the LONGEST name: 
	string longestName = findLongestName(studentList); 

}

