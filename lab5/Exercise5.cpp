#include <iostream>
using namespace std;

double triangle(double base, double height) {
    return 0.5 * base * height;
}

double rectangle(double length, double width) {
    return length * width;
}

double square(double side) {
    return side * side;
}

int main() {
    int  select;
    

    while (true) {
        cout << "\n\nplease select the area of the shape to calculate " << endl;

        cout << "\n1. Triangle\n2. Rectangle\n3. Square\n4. Quit\n";
        cout << "Enter selection: ";
        cin >> select;

        if ( select == 4) break;

        if ( select == 1) {
            double b, h;
            cout << "Enter base: ";
            cin >> b;
            cout << "Enter height: ";
            cin >> h;
            cout << "Area = " << triangle(b, h);
        }
        else if (select == 2) {
            double l, w;
            cout << "Enter length: ";
            cin >> l;
            cout << "Enter width: ";
            cin >> w;
            cout << "Area = " << rectangle(l, w);
        }
        else if (select == 3) {
            double s;
            cout << "Enter side: ";
            cin >> s;
            cout << "Area = " << square(s);
        }
        else {
            cout << "Invalid input. Try again.";
        }
    }

    return 0;
}