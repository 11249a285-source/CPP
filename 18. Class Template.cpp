Aim:
To implement the use of **Class Template** in C++.

Algorithm:

1. Start the program.
2. Define a **class template** using the syntax `template <class T>`.
3. Inside the class, declare data members of type `T`.
4. Define member functions to:

   * Accept input values.
   * Perform operations (e.g., addition).
   * Display results.
5. In the `main()` function:

   * Create objects of the template class with different data types (like `int`, `float`).
   * Call the member functions.
6. Display the output.
7. End the program.


Program:

#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T num1, num2;
public:
    void setData(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    void display() {
        cout << "Numbers: " << num1 << " and " << num2 << endl;
        cout << "Addition = " << add() << endl;
        cout << "Subtraction = " << subtract() << endl;
    }
};

int main() {
   
    Calculator<int> intCalc;
    intCalc.setData(10, 5);
    cout << "--- Integer Calculation ---" << endl;
    intCalc.display();

 
    Calculator<float> floatCalc;
    floatCalc.setData(10.5, 4.2);
    cout << "\n--- Float Calculation ---" << endl;
    floatCalc.display();

    return 0;
}

Output:
Integer Calculation 
Numbers: 10 and 5
Addition = 15
Subtraction = 5

Float Calculation 
Numbers: 10.5 and 4.2
Addition = 14.7
Subtraction = 6.3

Result: The program successfully implements the use of a class template in C++.**
