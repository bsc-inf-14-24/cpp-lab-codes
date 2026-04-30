#include <iostream>
using namespace std;
 int main() {
    //declare pointer and initialize
    //so that it doesn't  store  a random address
    int* pPointer = nullptr;

    int integerVar = 5;

    // assign pointer to address of objects
    pPointer = &integerVar;

    //output the value of integerVar;
    cout << "integerVar: " << integerVar << endl;

    //output the address assigned to pPointer
    cout << "pPointer: "<< pPointer << endl; 

    //out the address of the pPointer
    cout << "Address of pPointer: " << &pPointer << endl;

    return 0;
 }