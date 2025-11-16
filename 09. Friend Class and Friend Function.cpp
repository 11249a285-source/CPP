Aim:
To implement friend function and friend class.
To allow access to private data from outside the class.

Algorithm:

1. Start the program.
2. Define two classes with private members.
3. Declare a friend function common to both.
4. Access private data in that function.
5. Perform an operation using the private data.
6. Display the result.
7. Stop the program.

Program:

#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    A(int val) { x = val; }
    friend int sum(A, B);
};

class B {
    int y;
public:
    B(int val) { y = val; }
    friend int sum(A, B);
};

int sum(A obj1, B obj2) {
    return obj1.x + obj2.y;
}

int main() {
    A a(10);
    B b(20);
    cout << "Sum = " << sum(a, b) << endl;
    return 0;
}


Output:
Sum = 30


Result:
Friend function accessed private data of both classes.
The sum was calculated successfully.
