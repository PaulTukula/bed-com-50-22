#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    // the code for generating random number 
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    // the code generating random integer between 0 and 11
    int daysUntilExpiration = std::rand() % 12;

    switch (daysUntilExpiration) {
        case 0:
            using namespace std;
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            using namespace std;
            cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
            break;
        case 2: case 3: case 4: case 5:
            using namespace std;
            cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" << endl;
            break;
        default:
            using namespace std;
            cout << "You have an active subscription." << endl;
            break;
    }

    return 0;
}