// April9-doinSomeDataAnalysis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"BabyNames.h" //why double quotes here and not <> (angle brackets) 

int main()
{
    string filename = "babyNames.csv";

    auto babyRecords = getBabyRecords(filename); 


    int numberOfTargetOccurrences = 0; 

    string targetName = "Seth";
    for (int row = 0; row < babyRecords.size(); ++row)
    {
        if (babyRecords[row].name == targetName)
        {
            numberOfTargetOccurrences++; 
        }
    }

    cout << "The number of occurrences of " << targetName
        << " is: " << numberOfTargetOccurrences << "\n";



}
