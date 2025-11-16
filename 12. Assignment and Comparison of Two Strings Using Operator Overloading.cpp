Aim:
To overload assignment and comparison operators for string objects in C++.
To understand how operator overloading can customize object behavior.

Algorithm:

1. Start the program and include the header file.
2. Define a class MyString with a character array.
3. Implement constructors to initialize the string.
4. Overload the = and == operators.
5. In =, copy contents of one string to another.
6. In ==, compare both strings for equality.
7. Display the results and stop.

Program:

cpp
#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char str[50];
public:
    MyString() { strcpy(str, ""); }
    MyString(const char s[]) { strcpy(str, s); }

    // Overload assignment operator
    MyString operator=(MyString s) {
        strcpy(str, s.str);
        return *this;
    }

    // Overload comparison operator
    bool operator==(MyString s) {
        return (strcmp(str, s.str) == 0);
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Hello"), s2("World"), s3;
    s3 = s1;
    cout << "After assignment, s3 = ";
    s3.display();
    if (s1 == s2)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;
    return 0;
}


Output:
After assignment, s3 = Hello
Strings are not equal


Result:
Assignment and comparison operators were overloaded successfully.
The program demonstrated copying and comparing string objects
