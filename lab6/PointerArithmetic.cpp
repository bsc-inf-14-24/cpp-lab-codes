#include <iostream>
using namespace std;

int main(){
    //null pointer
    int* pPointer = nullptr;

    int numberArray[3] = {10, 20, 30};

    //assign address of first elemment to pointer
    pPointer = numberArray;

    //output to address of the first element
    cout << "Address at pPointer: "<< pPointer << endl;
    cout << "Address of numbeArray[0]: " << numberArray << endl;
    
    //output the value of the first element using pointer and indirection
    cout << "Valuee at pPointer: "<< *pPointer<< endl;

    //This outputs the value of the second element
    cout << "value at ++pPointer: " << *(++pPointer) << endl;

    //assign address of first elemment to pointer
    pPointer = numberArray;

    //This output the value of the first element
    cout << "Value at pPointer++: " << *(pPointer++) << endl;

    return 0;
}