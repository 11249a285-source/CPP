Aim:
To implement *file handling* using input and output file streams in C++.

Algorithm:

1. Include <fstream> header.
2. Create an output file and write data into it using ofstream.
3. Close the file.
4. Reopen the file using ifstream and read the contents.
5. Display the file data.

Program:

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt");
    fout << "Welcome to File Handling in C++!" << endl;
    fout.close();

    ifstream fin("data.txt");
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();

    return 0;
}


Output:
Welcome to File Handling in C++!


Result:
File handling operations using ofstream and ifstream were successfully implemented.
