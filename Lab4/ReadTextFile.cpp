#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;

    ifstream myfile("example.txt");

    if(myfile.is_open())
    {
        while(getline(myfile,line))
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    else
    {
        cout << "Unable of open file";
    }
    return 0;
}