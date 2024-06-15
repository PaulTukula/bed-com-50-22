#include <iostream>

using namespace std;

void areaOfSquare(){
  double size;

  cout << "Enter the length of one side of the square \n";
  cin >> size;

  double answer = size * size;

  cout << "The area of the square is: " << answer << endl << endl;
}

void areaOfRectangle(){ 
     double width;
     double length;

     cout << "Enter the length and width of the figure\n";

     cin >> length;
     cin >> width;

     double answer = width * length;
     cout << "The area of the rectangle is: " << answer << endl << endl;
} 
void areaOfTriangle(){ 
    double base;
    double height;

      cout << "Enter the base and height of the figure\n";
      cin >> base;
      cin >> height;

    double answer = (base * height)/2;
    cout << "The area of the triangle is: " << answer << endl << endl;
} 


int main(){

    int choice;

   do{
     cout << "Please select the area of the shape to calculate"
          <<"\n1. Square "
          <<"\n2. Rectangle "
          <<"\n3. Triangle "
          <<"\n4. Quit Program"
          <<"\n\nEnter selection\n\n";
     cin >> choice;
    
     if(choice < 1 || choice > 4)
        cout << "Your input was: " << choice << " which is an invalid input"
             << "\nPlease enter a valid input!!!\n\n";
    
     else
     
        switch (choice) {
         case 1 : areaOfSquare(); break;
         case 2 : areaOfRectangle(); break;
         case 3 : areaOfTriangle(); break;
       }

    } while (choice != 4);
        
    
    return 0;

}