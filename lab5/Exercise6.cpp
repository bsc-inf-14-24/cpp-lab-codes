#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void Reverse(string str) {
    reverse(str.begin(), str.end());
    cout << "Reversed: " << str << endl;
}

int main() {
    ifstream file("File.txt");
    string fileData, temp;

    while (getline(file, temp)) {
        fileData += temp + " ";
    }

    file.close();

    // Count vowels
    int vowels = 0;
    for (char c : fileData) {
        c = tolower(c);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            vowels++;
    }

    // Count words
    int words = 0;
    for (char c : fileData) {
        if (c == ' ') words++;
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Words: " << words << endl;

    // Reverse
    Reverse(fileData);

    // Capitalize second letter of each word
    for (int i = 0; i < fileData.length(); i++) {
        if (i > 0 && fileData[i-1] == ' ' && isalpha(fileData[i+1])) {
            fileData[i+1] = toupper(fileData[i+1]);
        }
    }

    cout << "Modified: " << fileData << endl;

    return 0;
}