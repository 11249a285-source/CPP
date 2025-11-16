Aim:
To demonstrate the use of this pointer and inline function in C++.

Algorithm:

1. Start the program.
2. Create a class named Sample with two data members a and b.
3. Define **inline member functions**:

   * setValues(int x, int y) → to assign values using the this pointer.
   * display() → to display the values of a and b.
   * sum() → to return the sum of a and b.
4. Inside the functions, use the statement `this->a = x;` and `this->b = y;` to refer to the current object’s members.
5. In the main() function:

   * Create an object of the class.
   * Call `setValues()` to initialize data.
   * Call `display()` and `sum()` functions to show results.
6. End the program.


Program:

#include <iostream>
using namespace std;

class Sample {
    int a, b;
public:
    inline void setValues(int x, int y) {
        this->a = x;   
        this->b = y;
    }

    inline void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }

    inline int sum() {
        return this->a + this->b;
    }
};

int main() {
    Sample obj;
    obj.setValues(10, 20);
    obj.display();
    cout << "Sum = " << obj.sum() << endl;
    return 0;
}


output :
a = 10, b = 20
Sum = 30


Result: the program successfully demonstrates the use of **this pointer** and **inline function** in C++.
