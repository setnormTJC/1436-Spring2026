// April9-doinSomeDataAnalysis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"BabyNames.h" //why double quotes here and not <> (angle brackets) 

int main()
{
    string filename = "babyNames.csv";

    printFileContents(filename); 

}
