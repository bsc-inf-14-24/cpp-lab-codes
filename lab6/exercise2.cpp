#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    //get dimensions
    cout << "Enter number of rows (max 3): ";
    cin >> rows;

    cout << "Enter number of columns (max 3): ";
    cin >> cols;

    //validate
    if (rows > 3 || cols > 3) {
        cout << "Error: Max size is 3x3 only!" << endl;
        return 0;
    }

    //allocate 2D array
    double** arr = new double*[rows];

    for (int i = 0; i < rows; i++) {
        arr[i] = new double[cols];
    }

    //input values
    cout << "\nEnter values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    //  display values
    cout << "\nArray values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //  free memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}