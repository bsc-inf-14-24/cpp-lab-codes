#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    float length, width;

    // First rectangle (using default constructor)
    Rectangle rect1;

    cout << "Enter length for rectangle 1: ";
    cin >> length;
    cout << "Enter width for rectangle 1: ";
    cin >> width;

    rect1.setLength(length);
    rect1.setWidth(width);

    cout << "Area of rectangle 1: " << rect1.getArea() << endl;

    // Second rectangle (using overloaded constructor)
    cout << "\nEnter length for rectangle 2: ";
    cin >> length;
    cout << "Enter width for rectangle 2: ";
    cin >> width;

    Rectangle rect2(length, width);

    cout << "Area of rectangle 2: " << rect2.getArea() << endl;

    return 0;
}