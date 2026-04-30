#include <iostream>
using namespace std;

int main() {
    //dynamic allocate integer
    int* inte = new int;

    //dynamic allocate string
    string* a = new string;

    //get userinput
    cout << "Enter an integer: ";
    cin >> *inte;

    cout << "Enter a string: ";
    cin.ignore();// clear buffer
    getline(cin, *a);

    //output on to the value of the value of allocated integer
    cout << "\nInteger value: " << *inte << endl;

    //output on to the value of the value of allocated integer
    cout << "String value: " << *a << endl;

    //free memoryy
    delete inte;
    delete a;
}