Aim: To write a C++ program that uses a class to store the dimensions of a rectangle and calculate its area using a member function.

Algorithm:

Start the program.
Create a class Rectangle with private data members length and breadth.
Define a function setData() to assign values to length and breadth.
Define a function area() to calculate and return the area (length * breadth).
In the main() function, create an object of the Rectangle class.
Call setData(10, 5) to store the rectangle dimensions.
Call the area() function and display the result.
End the program.

Program:

#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    void setData(int l, int b); 
    int area() {               
        return length * breadth;
    }
};

void Rectangle::setData(int l, int b) {
    length = l;
    breadth = b;
}

int main() {
    Rectangle r;
    r.setData(10, 5);
    cout << "Area: " << r.area() << endl;
    return 0;
}

Output:
Area: 50

Result: The program successfully calculates the area of a rectangle using a class and member functions.
