#include <iostream>
using namespace std;

int main() {

    int x, y;
    int sum;

    cout << "Type a number: ";
    cin >> x;

    cout << "Type another number: ";
    cin >> y;

    sum = x + y;   // fixed here
    cout << "Sum is: " << sum;

    return 0;
}