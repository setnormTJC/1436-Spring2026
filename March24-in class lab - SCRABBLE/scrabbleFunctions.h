#pragma once


#include<fstream>
#include<iostream> 
#include<map> //map data structure (latitutde and longitude mapping to a location name)
#include<string> //for getline and other stuff
#include<vector>

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

//map <string, int> listToPoints =
//{
//    {}
//};

vector<string> getListFromFile(string filename)
{
    ifstream fin(filename); 

    if (!fin.is_open())
    {
        cout << filename << " was not found :(\n";
        return {}; //return an "empty array" (go no further)
    }

    vector<string> allWordsInList;

    string currentWord; 
    int maxScoreSoFar = 0; 

    while (getline(fin, currentWord))
    {
        allWordsInList.push_back(currentWord);
        int wordPoints = calculateScore(currentWord);
        //listToPoints.insert({ currentWord, wordPoints });

        if (wordPoints > maxScoreSoFar)
        {
            maxScoreSoFar = wordPoints; //this is a "determine max" algorithm!
            cout << currentWord << " is the NEW high-scoring word and is worth: " << wordPoints << "\n";
        }

    }

    cout << "Did it work?\n";
    //How does one return the map to the main function???
    //Do we loop through it?
    return allWordsInList;
}