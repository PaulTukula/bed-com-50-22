#include <iostream>
using namespace std;

int main()
{
    string *userInputString = nullptr;
    int *userInputInteger = nullptr;

    userInputString = new string;
    userInputInteger = new int;

    cout << "Enter the interger to be dynamically allocated \n";
    cin >> *userInputInteger;

    cout << "Enter the string to be dynamically allocated \n";
    cin >> *userInputString;

    cout << "The allocated integer is " << *userInputInteger << "\n";
    cout << "The allocated string is " << *userInputString;
    return 0;
}