Aim: To write a C++ program that demonstrates default constructor, parameterized constructor, copy constructor, and destructor using a Box class, and to calculate the volume of objects.

Algorithm:

Start the program.
Create a class Box with data members: length, breadth, and height.
Define the following constructors:
Default constructor → initializes all dimensions to 0.
Parameterized constructor → initializes dimensions with given values.
Copy constructor → copies values from another object.
Define a member function volume() to calculate length × breadth × height.
Define a destructor to display a message when objects go out of scope.
In main():
Create object b1 → default constructor invoked.
Create object b2(10, 5, 2) → parameterized constructor invoked.
Create object b3 = b2 → copy constructor invoked.
Display the volume of b2 and b3.
End the program; destructors will be called automatically.

Program:

#include <iostream>
using namespace std;

class Box {
    int length, breadth, height;

public:
  
    Box() {
        length = breadth = height = 0;
        cout << "Default Constructor called\n";
    }

    
    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
        cout << "Parameterized Constructor called\n";
    }

    Box(Box &b) {
        length = b.length;
        breadth = b.breadth;
        height = b.height;
        cout << "Copy Constructor called\n";
    }

    int volume() {
        return length * breadth * height;
    }


    ~Box() {
        cout << "Destructor called\n";
    }
};

int main() {
    Box b1;                 
    Box b2(10, 5, 2);       
    Box b3 = b2;           

    cout << "Volume of b2: " << b2.volume() << endl;
    cout << "Volume of b3: " << b3.volume() << endl;

    return 0;
}

Output:
Default Constructor called
Parameterized Constructor called
Copy Constructor called
Volume of b2: 100
Volume of b3: 100
Destructor called
Destructor called
Destructor called

Result: 
The program successfully demonstrates different types of constructors and a destructor in C++, showing how object creation, copying, and destruction work, along with volume calculation using member functions.
