#include <iostream>
using namespace std;

double calculate_triangle_area(double base, double height) {
    return 0.5 * base * height;
}

double calculate_rectangle_area(double length, double width) {
    return length * width;
}

double calculate_square_area(double side) {
    return side * side;
}

int main() {
    while (true) {
        cout << "Please select the area of the shape to calculate:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit program" << endl;
        cout << "Enter selection:";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "Area of the square: " << calculate_square_area(side) << endl;
                break;
            case 2:
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of the rectangle: " << calculate_rectangle_area(length, width) << endl;
                break;
            case 3:
                double base, height;
                cout << "Enter the base length of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Area of the triangle: " << calculate_triangle_area(base, height) << endl;
                break;
            case 4:
                cout << "Exiting the program" << endl;
                return 0;
            default:
                cout << "Please enter a valid input!!!" << endl;
        }
    }

    return 0;
}