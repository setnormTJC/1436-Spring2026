// April2-STRUCTURES.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Weapon.h" //a "dependency" 

int main()
{
    //std::cout << "Hello World!\n";

    Weapon myWeapon = { 100, "sword", 99.99 }; //this "weapon" struct is a custom data type
    //not an integer or a string (it's both)

    myWeapon.print(); 

}

