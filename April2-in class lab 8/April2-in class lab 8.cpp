// April2-in class lab 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<vector>
#include "Date.h"


void printDates(vector<Date> dates)
{
    for (int i = 0; i < dates.size(); ++i)
    {
        dates[i].print(); 
    }
}

using namespace std; 
int main()
{
    //std::cout << "Hello World!\n";

    //vector<int> nums =
    //{
    //    1, 2, 33, 4, 56
    //};

    Date myBirthday = { "May", 13, 1988 };
    Date yourBirthday = { "December", 31, 2000};

    vector<Date> dates =
    { 
        myBirthday,
        yourBirthday,
        {"July", 4, 1776} //anonymous object
    };

    //print(dates[0]);

    printDates(dates); 

    //dates[0].print(); 



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
