Aim:
To write a C++ program to overload a binary operator to perform arithmetic operation on objects.
To demonstrate how operator functions work with user-defined data types.

Algorithm:

1. Start the program and include necessary header files.
2. Define a class with private data members.
3. Declare a constructor to initialize data members.
4. Overload the binary + operator using a member function.
5. In the function, add corresponding data members of both objects.
6. Create objects and use the overloaded operator to perform addition.
7. Display the result and stop the program.

Program:

cpp
#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(int r, int i) { real = r; imag = i; }

    // Binary operator overloading
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(5, 6);
    Complex c3 = c1 + c2; // Using overloaded +
    cout << "Sum of complex numbers: ";
    c3.display();
    return 0;
}

Output:
Sum of complex numbers: 8 + 10i


Result:

Binary operator overloading was successfully implemented to add two complex numbers.
The concept of operator overloading using member functions was verifie
