Aim: To write a C++ program that demonstrates function overloading by defining multiple display() functions with different parameter types (int, double, string).

Algorithm:

1.Start the program.
2.Create a class PrintData with three overloaded functions named display():
One accepts an integer.
One accepts a double.
One accepts a string.
3.In each function, print the corresponding data type and its value.
4.In the main() function, create an object of the class.
5.Call the three overloaded display() functions with values:
10
99.99
"Hello World"
6.End the program.

Program:

#include <iostream>
using namespace std;

class PrintData {
public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }

    void display(double d) {
        cout << "Double: " << d << endl;
    }

    void display(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    PrintData p;
    p.display(10);
    p.display(99.99);
    p.display("Hello World");
    return 0;
}

Output:
Integer: 10
Double: 99.99
String: Hello World

Result: 
The program successfully demonstrates function overloading by using the same function name display() to handle different data types (int, double, and string).
