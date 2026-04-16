// April16-SIMPLE data analytics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 
#include "Points.h"

using namespace std; 

int main()
{
	//let's read in and store the array of points from the CSV file
	string filename = "points.csv";
	auto listOfPoints = readFileAndStoreContents(filename); 


	//let's determine the average x value in the list of points: 
	
	float sumOfAllXValues = 0.0; 

	for (Point currentPoint : listOfPoints)
	{
		sumOfAllXValues = sumOfAllXValues + currentPoint.x; 
	}


	int numberOfPoints = listOfPoints.size();

	float average = sumOfAllXValues / numberOfPoints;

	cout << "The average X value is: " << average << "\n";
}

