Aim:
To write a C++ program to demonstrate the use of a user-defined namespace.

Algorithm:

1.Start the program.
2.Define a namespace using the namespace keyword.
3.Declare variables or functions inside the namespace.
4.Access the members of the namespace using the scope resolution operator (::).
5.Display the output.
6.End the program.

Program:

#include <iostream>
using namespace std;
namespace MathOperations
{
    int add(int a, int b)
    {
        return a + b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }

    void displayMessage()
    {
        cout << "Inside MathOperations Namespace" << endl;
    }
}

int main()
{
    MathOperations::displayMessage();

    int x = 10, y = 5;

    cout << "Addition = " << MathOperations::add(x, y) << endl;
    cout << "Multiplication = " << MathOperations::multiply(x, y) << endl;

    return 0;
}

Output:
Inside MathOperations Namespace
Addition = 15
Multiplication = 50

Result: The program successfully demonstrates the use of a namespace to group related functions. It shows how to access functions inside a namespace using the scope resolution operator ::.

