#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    int daysUntilExpiration;
    srand(time(0));
   // generating a random integer between 0 and 11
   daysUntilExpiration = rand() % 12;
    
   switch (daysUntilExpiration)
   {
   case 0 :  cout << "Your subscription has expired"; break;
   case 1 :  cout << "Your subscription expires within a day!"
                  << "\nRenew now and save 20%!";  break;
   case 2 : //fall through
   case 3 : //fall through
   case 4 : //fall through
   case 5 : cout << "Your subscription expires in " << daysUntilExpiration << " days"
                 << "\nRenew now and save 10%!"; break;
   case 6 : //fall through
   case 7 : //fall through
   case 8 : //fall through
   case 9 : //fall through
   case 10: cout << "Your subscription will expire soon. Renew now!"; break;
   case 11: cout << "You have an active subscription";   break;
   }
    
    return 0;
}
