//adsfkjdsfkjfdsakjdsa sa fdskjfdsjkdsfkj
//The goal of this program is to write Hello World to a file named someText.txt.
//Also, we want to be able to read in some aeronautics data (for funsies)?

//WEBSITE INFORMATION: https://cplusplus.com/

#include<fstream> //any guesses regarding what f stands for? (FILE) // Stream class to both read and write from/to files.
#include <iostream> // Input/Output // able to perform both input and output operations.
#include<string> //Allows us to use strings

using namespace std; 

int main()
{
    //std::cout << "Hello World!\n";

    //Naming the output file
    string outputFilename = "someText.txt";

        //ifstream fin → input from file
        //ofstream fout → output to file

    ofstream fout(outputFilename); // ofstream: ternal stream buffer, which performs input/output operations on the file they are associated with (if any).
                                    // fout is just the commonly used variable name // usually refers to an output file stream used to write data to a file.

    int numberOfTimesToWriteHelloWorld = 5'000; //five thousand

    int numberOfTimesTextWasWritten = 0; 

    while (numberOfTimesTextWasWritten < numberOfTimesToWriteHelloWorld)
    {
        fout << "Hello world????\n"; 

        numberOfTimesTextWasWritten = numberOfTimesTextWasWritten + 1; //use numberOfTimesTextWasWritten++ ? //you could increment it yes
        // num
        //first loop "iteration"
        // 0 + 1 = 1
        // second loop iter.
        // 1 + 1 = 2
        //INFINITE LOOP!
    }

    fout.close(); // // close the file that is a variable named fout// this is the outputFilename "someText.txt"

// fout is the text that goes into the txt file? and fout close is what ends the task?

// system("C:\\WINDOWS\\System32\\shutdown /s /t 0"); 
}

