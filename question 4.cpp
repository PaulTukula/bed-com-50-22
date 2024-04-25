#include <iostream>
#include <limits>
using namespace std;

int main() {
    int user_input;

    while (true) {
        cout << "Enter an integer value between 5 and 10: ";
        cin >> user_input;

        if (cin.fail()) {
            cout << "Sorry, you entered an invalid number, please try again" << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        } else if (user_input >= 5 && user_input <= 10) {
            cout << "Your input value (" << user_input << ") has been accepted." << endl;
            break; 
        } else {
            cout << "Please enter a number between 5 and 10." << endl;
        }
    }

    return 0;
}

