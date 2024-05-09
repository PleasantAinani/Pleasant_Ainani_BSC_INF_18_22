#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
#include<iostream>
using namespace std;
using namespace shapes;

int main() {

    char choice;
    do {
        cout << "Choose an option:\n"
             << "1. Calculate area of Square\n"
             << "2. Calculate area of Triangle\n"
             << "3. Calculate area of Circle\n"
             << "4. Quit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case '1': {
                double side;
                cout << "Enter side length of the square: ";
                cin >> side;
                Square square(side);
                cout << "Area of the square: " << Area::calculateArea(square).getSideLength() << endl;
                break;
            }
            case '2': {
                double base, height;
                cout << "Enter base and height of the triangle: ";
                cin >> base >> height;
                Triangle triangle(base, height);
                cout << "Area of the triangle: " << Area::calculateArea(triangle) << endl;
                break;
            }
            case '3': {
                double radius;
                cout << "Enter radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle: " << Area::calculateArea(circle) << endl;
                break;
            }
            case '4':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";

        }
    } while(choice != '4');

    return 0;
}