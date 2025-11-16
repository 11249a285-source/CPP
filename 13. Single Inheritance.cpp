Aim:
To demonstrate single inheritance using public and private access specifiers.
To understand how base class members are inherited by the derived class.

Algorithm:

1. Start the program and include required headers.
2. Create a base class with public and private members.
3. Create a derived class using public and private inheritance.
4. Access and display inherited data members appropriately.
5. Observe visibility rules in both cases.
6. Display the results and stop the program.

Program:


#include <iostream>
using namespace std;

class Base {
protected:
    int a;
public:
    void getA() {
        cout << "Enter value of a: ";
        cin >> a;
    }
};

class Derived : public Base {
    int b;
public:
    void getB() {
        cout << "Enter value of b: ";
        cin >> b;
    }
    void sum() {
        cout << "Sum = " << a + b << endl;
    }
};

int main() {
    Derived d;
    d.getA();
    d.getB();
    d.sum();
    return 0;
}


Output:
Enter value of a: 5
Enter value of b: 7
Sum = 12


Result:
Single public inheritance was successfully implemented.
Derived class accessed base members as per visibility rules.
