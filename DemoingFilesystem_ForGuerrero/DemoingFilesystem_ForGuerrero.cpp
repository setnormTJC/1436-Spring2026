// DemoingFilesystem_ForGuerrero.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<filesystem> //requires C++17
#include<fstream> 
#include <iostream>


using namespace std; 

int main()
{

    std::string newFolder = "otherNewFolderName";
    
    //filesystem::current_path(newFolder);

    filesystem::directory_iterator directoryIterator(newFolder);

    //auto directoryIterator = filesystem::directory_iterator::directory_iterator(newFolder); // directoryIterator{};
        
    /*Make new files in the newFolder*/
    

    
    vector<string> eachFilesContents; 
    for (const auto& thing : directoryIterator)
    {
        //cout << thing.path().string() << "\n";

        string filename = thing.path().string(); 

        ifstream fin(filename); 

        string currentLineInFile; 
        while (std::getline(fin, currentLineInFile))
        {
            eachFilesContents.push_back(currentLineInFile);
            //cout << currentLineInFile << "\n";

        }

        cout << "Number of lines in file " << eachFilesContents.size() << "\n";

        //reset the array to be empty 
        eachFilesContents.clear(); 

        //eachFilesContents.emp

    }

}

