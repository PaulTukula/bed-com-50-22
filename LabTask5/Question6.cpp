#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

void reverse(string data)
{
    for (int i = data.length() - 1; i >= 0; i--)
    {
        cout << data[i];
    }
    cout << endl
         << endl;
}

int numberOfVowels(string fileData)
{
    int count = 0;
    for (int i = 0; i < fileData.length(); i++)
    {

        bool value = (fileData[i] == 'a' || fileData[i] == 'e' || fileData[i] == 'i' || fileData[i] == 'o' || fileData[i] == 'u' || fileData[i] == 'A' || fileData[i] == 'E' || fileData[i] == 'I' || fileData[i] == 'O' || fileData[i] == 'U');

        if (value)
            count++;
    }
    return count;
}

int numberOfWords(string fileData)
{
    int count;

    // Question 6
    // using the space character to count the number of words
    for (int i = 0; i < fileData.length(); i++)
    {

        bool value = (fileData[i] == ' ');

        if (value)
            count++;
    }
    return ++count;
}

void capitalSecondLatter(string fileData, const int SIZE)
{
    ifstream input("inputFile1.txt");

    string wordsInFileData[SIZE];
 
    cout << "Capitalising the second latter in fileData the resuit is: \n";

    for (int i = 0; i < SIZE; i++)
    {
        // reading words from the fileData and store in an array
        input >> wordsInFileData[i];
        // capitalizing second latter
        wordsInFileData[i].at(1) = toupper(wordsInFileData[i].at(1));
        cout << wordsInFileData[i] << " ";
    }
    cout << "\n\n";
    input.close();
}
int main()
{

    ifstream input("inputFile1.txt");
    string fileData;

    if (input.is_open())
    {
        getline(input, fileData);
    }

    cout << "\nThe number of vowels in fileData is " << numberOfVowels(fileData) << endl << endl;
    cout << "The number of words in fileData is " << numberOfWords(fileData) << endl << endl;

    // calling the reverse function
    reverse(fileData);

    capitalSecondLatter(fileData, numberOfWords(fileData) );

    input.close();
    return 0;
}
