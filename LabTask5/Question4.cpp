#include <iostream>
#include <cctype> 

using namespace std;

int main(){
   string input;
    char number;
   
    cout << "Enter an integer value between 5 and 10\n";
    cin >> input;
    
    // extracting only the first character entered
    input[0] = number;

    bool test = (!(isdigit(number)) || isdigit(number));

    while (test)
    {
        if(isdigit(number)) {
            if(number > '5' && number <= '9'){
             cout <<"Your input value(" << number << ") has been accepted"; break;
             }
             
            else {
              cout << "You entered " << number << ". Please enter a number between 5 and 10.\n";
              cin >> number;
              
            }
        }
        else 
        {         
           cout << "Sorry, you entered an invalid number, please try agin \n"; 
           cin >> number ;
           
        }
                test = (!(isdigit(number)) || isdigit(number));

    }            
     
    return 0;
}
