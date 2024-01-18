#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int countWords(const string &line)
{
    istringstream stream(line);
    string word;
    int count = 0;

    while (stream >> word)
    {
        count++;
    }

    return count;
}

int main()
{
    string fileName;
    cout << "Enter the name of the text file: ";
    getline(cin, fileName);

    ifstream inputFile(fileName);

    if (!inputFile.is_open())
    {
        cerr << "Error opening file: " << fileName << endl;
        return 1;
    }

    string line;
    int totalWordCount = 0;

    while (getline(inputFile, line))
    {
        totalWordCount += countWords(line);
    }

    inputFile.close();

    cout << "Total word count in the file: " << totalWordCount << endl;

    return 0;
}
