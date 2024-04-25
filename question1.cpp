#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    // using the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // the code generate random integer between 0 and 11
    int daysUntilExpiration = std::rand() % 12;

    if (daysUntilExpiration <= 10) {
        using namespace std;
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else if (daysUntilExpiration <= 5) {
        using namespace std;
        cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" << endl;
    } else if (daysUntilExpiration == 1) {
        using namespace std;
        cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
    } else {
        using namespace std;
        cout << "You have an active subscription." << endl;
        if (daysUntilExpiration == 0) {
            cout << "Your subscription has expired." << endl;
        }
    }

    return 0;
}