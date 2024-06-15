#include <iostream>
#include "Area.h"

using namespace std;

int main()
{
    char choice;
    Area area1;

    do
    {
        cout << "Enter the shape to calculate area \n";
        cout << "1. Area of Square \n"
             << "2. Area of Triangle \n"
             << "3. Area of Circle \n"
             << "4. Quit \n";
        cin >> choice;

        switch (choice)
        {
        case '1':
        {
            double sideLength;
            cout << "Enter the side length \n";
            cin >> sideLength;

            Square mysquare(sideLength);
            cout << "The area of the Square is: \n" << area1.getSquareArea(mysquare) << endl << endl;
        }
        break;

        case '2':
        {
            double base, height;
            cout << "Enter the base value \n";
            cin >> base;

            cout << "Enter the height value \n";
            cin >> height;

            Triangle myTriangle(base,height);
            cout << "The area of the Triangle is: \n" << area1.getTriangleArea(myTriangle) << endl << endl;

        }
        break;

        case '3': 
            {
            double radius;
            cout << "Enter the radius value \n";
            cin >> radius;

            Circle myCircle(radius);
            cout << "The area of the Circle is: \n" << area1.getCircleArea(myCircle) << endl << endl;

        }
            break;
        }

    } while (choice != '4');

    return 0;
}