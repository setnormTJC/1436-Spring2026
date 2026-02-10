// In class lab 3 - grade calculation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream>
#include <iostream>


using namespace std; 

int calculateStudentScore()
{

   //std::string filename = "grades.txt"; //reading from a FILE like this is a BETTER way to do this

    //ifstream fin(filename); 

    //if (!fin.is_open())
    //{
    //    std::cout << "UNABLE to find the file named: " << filename << "\n";
    //    return -1; //a very bad score! (an "early return")
    //}

    int examAverage = 80; 
    int homeworkAverage = 100; 
    int someOtherAverage = 90;

    const double EXAM_WEIGHT = 0.990; //SCREAMING_SNAKE case! (sometimes programmers use this case for CONSTANTS)
    //EXAM_WEIGHT = 1920929;  //illegal!

    const double HOMEWORK_WEIGHT = 0.005; //grade grubber!
    const double SOME_OTHER_WEIGHT = 0.005;


    double overallAverage =
        examAverage * EXAM_WEIGHT +
        homeworkAverage * HOMEWORK_WEIGHT +
        someOtherAverage * SOME_OTHER_WEIGHT;

    return overallAverage; 
}

int main()
{
    int studentScore = calculateStudentScore(); //sanity check! is -123 a "reasonable" output
    
    std::cout << "student score is: " << studentScore << "\n";

    //std::cout << "Hello World!\n";
}

