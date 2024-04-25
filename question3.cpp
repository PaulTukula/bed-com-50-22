#include <iostream>

int main() {
    using namespace std;
    // Declaring and initialize the array
    string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    // Iterate through each element in the array
    for (const string& element : elements) {
        // below code checks if the given element starts with the letter B
        if (element[0] == 'B') {
            cout << element << endl;
        }
    }

    return 0;
}