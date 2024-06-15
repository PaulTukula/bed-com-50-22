#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{    float length, width;

    cout << "Enter the  value of Length \n";
    cin >> length;

    cout << "Enter the  value of Width \n";
    cin >> width;

    Rectangle rectangle1(length, width);

    cout << "The rectangle's area is: " << rectangle1.getArea();

    return 0;
}