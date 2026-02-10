// SimpleFunctionDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<Windows.h>

using namespace std; 

//functions have a ... function (they DO stuff)
void doStuff()
{
    //notice! this text is INDENTED!
    cout << "Doing .... stuff\n"; //\n moves the cursor to the next line (makes space)
    //OMINOUS!
}

void showCatVideo()
{
    system("prayKitty.mp4");
    //return asdfkjsadf,jfd,kdsaflk //not really needed
}

void playAHOTBeat() 
{
    std::system("PS1.wav");//this is a function DEFINITION!
}

void pauseFor5Seconds()
{
    Sleep(5'000); 
}


/*This function plays the best SONG ever!!!! Ever.*/
void rickRoll()
{
    system("start https://vimeo.com/1071968720"); //replace with whatever webpage tickles your pickle
}

int main()
{
    std::cout << "Hello World!\n";

    rickRoll(); 

    doStuff(); 

    showCatVideo(); //this is a "function call" (that is a VERY IMPORTANT bit of jargon/vocabulary)
    
    pauseFor5Seconds(); 


    playAHOTBeat(); 

    //std::system("pause");

    //std::system("calc");



}

