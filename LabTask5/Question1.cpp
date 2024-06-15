#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    int daysUntilExpiration;
    srand(time(0));
   // generating a random integer between 0 and 11
   daysUntilExpiration = rand() % 12;
    
   if(daysUntilExpiration > 10)
      cout << "You have an active subscription"; 
   else if(daysUntilExpiration >= 6 && daysUntilExpiration <= 10)
      cout << "Your subscription will expire soon. Renew now!";
   else if(daysUntilExpiration >= 2 && daysUntilExpiration <= 5)
      cout << "Your subscription expires in " << daysUntilExpiration << " days"
           << "\nRenew now and save 10%!";
   else if(daysUntilExpiration == 1)
      cout << "Your subscription expires within a day!"
           << "\nRenew now and save 20%!"; 
   else
      cout << "Your subscription has expired";


    return 0;
}
