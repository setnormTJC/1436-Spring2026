#pragma once

#include<iostream> 
#include<map>
#include<string> 

using namespace std; 

int calculateScore(string userWord)
{
    int score = 0; 
	//first, setup the point values of ALL 26 letters! Bummer!
    map<char, int> lettersToPoints =
    {
        {'a', 1}, {'b', 3}, {'c', 3}, {'d', 2}, {'e', 1},
        {'f', 4}, {'g', 2}, {'h', 4}, {'i', 1}, {'j', 8},
        {'k', 5}, {'l', 1}, {'m', 3}, {'n', 1}, {'o', 1},
        {'p', 3}, {'q', 10}, {'r', 1}, {'s', 1}, {'t', 1},
        {'u', 1}, {'v', 4}, {'w', 4}, {'x', 8}, {'y', 4},
        {'z', 10}
    };

    for (int i = 0; i < userWord.length(); ++i)
    {
        char currentLetter = userWord.at(i); 
        int pointsAtChar = lettersToPoints.at(currentLetter);
        
        score += pointsAtChar;
    }

    return score; 

}