Aim:
To demonstrate dynamic memory allocation.
To use new and delete operators in C++.

Algorithm:

1. Start the program.
2. Declare pointer variables.
3. Allocate memory using new.
4. Assign values to allocated memory.
5. Display the values.
6. Free memory using delete.
7. Stop the program.

Program:

#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;
    float *fptr = new float;
    *ptr = 50;
    *fptr = 20.5;
    cout << "Integer value: " << *ptr << endl;
    cout << "Float value: " << *fptr << endl;
    delete ptr;
    delete fptr;
    return 0;
}

Output:
Integer value: 50
Float value: 20.5


Result:
Dynamic memory was allocated and deallocated successfully.
new and delete operators worked as expected.
