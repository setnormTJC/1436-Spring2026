// April15-CoxStuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



using namespace std; 

template<typename T> 
void doThing(T thing)
{
    cout << thing << "\n";
}





int main()
{
    //doThing(1); 

    //doThing("panda"); 


    //const char letter = 'a';

    //doThing('z'); 


    //char a{ 'z' }; 

    //string greeting = "Hello"; 

    //string recipient = "dog"; 

    //cout << greeting + recipient + "adsfasdfads" << "\n";

    enum class Loudness
    {
        Soft = 1,
        Medium = 2,
        Loud = 3
    };

    cout << static_cast<int>( Loudness::Loud) << "\n";
    
    //std::cout << "Hello World!\n";
}
