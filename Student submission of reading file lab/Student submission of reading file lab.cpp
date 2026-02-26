#include <fstream>
#include <iostream>
#include <string>

using namespace std; //professional C++ programmers don't do this - but it's fine 

int main()
{
    string filePath = "lyrics.txt";//relative filepath 
    ifstream fin(filePath);//requires <fstream> 

    if (!fin)
    {
        cout << "File not found error" << "\n";
        return 0; //early return 
    }

    string currentLine;
    int lineNumber;
    int lineCount = 0;

    if (fin.is_open())
    {
        //this is displaying 10 of each line, should only display first ten lines
        for (int i = 0; i < 10; ++i)
        {
            if (getline(fin, currentLine))
            {
                cout << currentLine << "\n";
                lineCount = 10;
            }
        }

        cout << "\n\n";

        while (getline(fin, currentLine))
        {
            cout << currentLine << "\n";
            ++lineCount;
        }

        fin.close();
    }

    cout << "\n\nTotal line count is: " << lineCount << endl;

    return 0;
}

