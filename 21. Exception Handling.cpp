Aim:
To write a C++ program to demonstrate exception handling using try, catch, and throw.

Algorithm:

1.Start the program.
2.Read two numbers from the user — numerator and denominator.
3.Use a try block to check for division by zero.
4.If the denominator is zero, throw an exception.
5.Catch the exception using a catch block and display an appropriate message.
6.If no exception occurs, display the division result.
7.End the program.

Program:

#include <iostream>
using namespace std;

int main()
{
    int numerator, denominator;
    float result;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try
    {
        if (denominator == 0)
            throw "Division by zero error!";
        
        result = (float)numerator / denominator;
        cout << "Result = " << result << endl;
    }
    catch (const char* msg)
    {
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program executed successfully." << endl;

    return 0;
}

Output:
Enter numerator: 10
Enter denominator: 2

Result = 5
Program executed successfully.

Result: 
This program correctly handles division by zero using a try–catch block, ensuring that errors are caught and the program continues to execute safely.
