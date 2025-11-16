Aim:
To write a C++ program to define a class Student with data members and member functions to display student details using objects.

Algorithm:

1.Start the program.
2.Define a class Student with data members:
    name (string)
    age (integer)
3.Define a member function display() inside the class to print the student details.
4.In the main() function:
    Create two objects s1 and s2 of class Student.
    Assign values to their data members (name and age).
    Call the display() function for each object to show details.
5.Stop the program.

Program:

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;        
    s1.name = "Alice";
    s1.age = 20;
    s1.display();

    Student s2;        
    s2.name = "Bob";
    s2.age = 22;
    s2.display();

    return 0;
}

Output:
Name: Alice, Age: 20
Name: Bob, Age: 22

Result: This program demonstrates how to create a class in C++ and use objects to store and display student details using a member function.
