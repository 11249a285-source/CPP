Aim:
To implement a **pure virtual function** and demonstrate **runtime polymorphism**.

Algorithm:

1. Create a base class with a **pure virtual function** using `= 0`.
2. Derive a class and override the virtual function.
3. Access the function using a base class pointer.
4. Display the output.

Program:

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;  // Pure virtual function
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) { radius = r; }
    void area() {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape *s;
    Circle c(5);
    s = &c;
    s->area();
    return 0;
}


Output:
Area of Circle = 78.5

Result:
Successfully demonstrated the use of a **pure virtual function** in C++.

    

   
