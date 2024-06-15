#include <iostream>
#include "Rectangle.h"

using namespace std;

int main(){
    Rectangle rectangle1;

    float length, width;

    cout << "Enter the  value of Length \n";
    cin >> length;
    rectangle1.setLength(length);

    cout << "Enter the  value of Width \n";
    cin >> width;
    rectangle1.setWidth(width);
    
     cout << "The rectangle's area is: " << rectangle1.getArea();
     return 0;

}