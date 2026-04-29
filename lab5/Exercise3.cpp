#include <iostream>
using namespace std;

int main() {
    string a[] =  {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    for(int i = 0; i < 8; i++) {
        if(a[i][0] == 'B'){
            cout << a[i] << endl;
        }
    }

    return 0;
}