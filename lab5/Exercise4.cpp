#include <iostream>
using namespace std;

int main(){
    int value;

    cout << "Enter an integer value 5 and 10: ";
    cin >> value;
    
    while(value < 5 || value >10) {
        cout << "Invalid input. Enter a value between 5 and 10: ";    
        cin >> value;
    }

    cout << "Your input value  " <<   value << " has been accepted: "<< endl;

    return 0;
}