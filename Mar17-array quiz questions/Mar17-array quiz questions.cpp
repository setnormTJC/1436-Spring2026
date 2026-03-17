// Mar17-array quiz questions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<string> 

#include<vector> 

using namespace std; 


int main()
{
    vector<string> circleOfFifths =
    {
        "C",
        "G",
        "D",
        "A",
        "E",
        "B",
        "F#",
        "D-flat",
        "A-flat",
        "E-flat",
        "B-flat",
        "F"
    };


    //cout << "The FIFTH note in the circle of fifths is: " << circleOfFifths[123123123] << "\n"; //is it "out of bounds"???


    string currentKey = "C";

    for (int i = 0; i <= 3; i++)
    {
        currentKey = circleOfFifths[i];

        cout << "Changed the key to: " << currentKey << "\n";
    }

    //the square brackets are a special symbol meaning - HEY! I am an "array" (AKA: a list of stuff)


}

