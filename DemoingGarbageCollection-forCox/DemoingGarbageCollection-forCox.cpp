// DemoingGarbageCollection-forCox.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std; 

/*Not too bad for RAM*/
void demoInfiniteLoop()
{
	while (true)
	{
		cout << 1 << "\n";
	}

}

void demoMemoryLeak()
{
	while (true)
	{
		int* i = new int;  //asks for 4 Bytes of memory (because 
		//{1, 2, 3, 4, }


	}
}

int main()
{
	//demoInfiniteLoop(); 


	demoMemoryLeak(); 


	//C-style cast: 
	
	//static_cast<

}

