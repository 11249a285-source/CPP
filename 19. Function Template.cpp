Aim:
To implement the use of *function template* in C++.

Algorithm:

1. Start the program.
2. Define a function template using template <class T>.
3. Write a generic function to perform an operation (e.g., find maximum).
4. In main(), call the template function with different data types.
5. Display the results.
6. End the program.

Program:

#include <iostream>
using namespace std;

template <class T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 10 and 20 = " << getMax(10, 20) << endl;
    cout << "Max of 5.5 and 2.3 = " << getMax(5.5, 2.3) << endl;
    return 0;
}


Output:
Max of 10 and 20 = 20
Max of 5.5 and 2.3 = 5.5


Result:
Successfully implemented a *function template* that works for different data types.
