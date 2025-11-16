Aim:
To demonstrate unary operator overloading.
To overload increment operator for a class.

Algorithm:

1. Start the program and define a class.
2. Declare a data member and operator function.
3. Overload unary ++ operator.
4. Create an object and input a value.
5. Use the overloaded operator to increment.
6. Display the new value.
7. Stop the program.

Program:

#include <iostream>
using namespace std;

class Number {
    int x;
public:
    void getData() {
        cout << "Enter a number: ";
        cin >> x;
    }
    void operator++() {
        ++x;
    }
    void display() {
        cout << "Incremented Value: " << x << endl;
    }
};

int main() {
    Number n;
    n.getData();
    ++n;
    n.display();
    return 0;
}


Output:
Enter a number: 9
Incremented Value: 10


Result:
Unary operator overloading implemented successfully.
Operator function increased the value as expected.
