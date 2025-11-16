Aim: To write a C++ program that adds two complex numbers using a class and returns the result through a member function.

Algorithm:

Start the program.
Create a class Complex with data members real and imag.
Define a function setData(r, i) to assign real and imaginary values.
Define a function display() to print the complex number in a + bi form.
Define a function add() that:
Accepts another Complex object.
Adds real parts.
Adds imaginary parts.
Stores the result in a temporary Complex object.
Returns the result.
In main():
Create objects c1, c2, and c3.
Set values of c1 and c2.
Add them using c1.add(c2) and store the result in c3.
Display the result.
End the program.

Program:

#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void setData(int r, int i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c2) {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.setData(5, 4);
    c2.setData(2, 3);

    c3 = c1.add(c2);  

    cout << "Result: ";
    c3.display();
    return 0;
}

Output:
Result: 7 + 7i

Result: The program successfully adds two complex numbers using a class and member function, demonstrating object-oriented programming and returning objects in C++.
