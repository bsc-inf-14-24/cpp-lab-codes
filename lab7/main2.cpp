#include <iostream>
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "area.h"

using namespace std;
using namespace shapes;

int main() {
    int choice;

    do {
        cout << "\n===== AREA CALCULATOR =====\n";
        cout << "1. Square\n";
        cout << "2. Triangle\n";
        cout << "3. Circle\n";
        cout << "4. Quit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            double side;
            cout << "Enter side length: ";
            cin >> side;

            Square s;
            s.setSide(side);

            cout << "Area of square = " << Area::squareArea(s) << endl;
            break;
        }

        case 2: {
            double base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;

            Triangle t;
            t.setBase(base);
            t.setHeight(height);

            cout << "Area of triangle = " << Area::triangleArea(t) << endl;
            break;
        }

        case 3: {
            double radius;
            cout << "Enter radius: ";
            cin >> radius;

            Circle c;
            c.setRadius(radius);

            cout << "Area of circle = " << Area::circleArea(c) << endl;
            break;
        }

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}