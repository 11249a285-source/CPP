Aim:
To demonstrate multilevel inheritance in C++.
To show how data is passed through multiple levels of classes.

Algorithm:

1. Start the program and include necessary headers.
2. Define a base class with data input functions.
3. Create an intermediate class inheriting from the base.
4. Create another derived class inheriting from the intermediate class.
5. Use all inherited members in the final derived class.
6. Display calculated results and stop.

Program:

cpp
#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
public:
    void getRoll() {
        cout << "Enter Roll Number: ";
        cin >> roll;
    }
};

class Test : public Student {
protected:
    float mark1, mark2;
public:
    void getMarks() {
        cout << "Enter marks in two subjects: ";
        cin >> mark1 >> mark2;
    }
};

class Result : public Test {
public:
    void display() {
        float total = mark1 + mark2;
        cout << "Roll Number: " << roll << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result r;
    r.getRoll();
    r.getMarks();
    r.display();
    return 0;
}


Output:
Enter Roll Number: 102
Enter marks in two subjects: 85 90
Roll Number: 102
Total Marks: 175


Result:
Multilevel inheritance was implemented successfully.
Data was transferred and accessed across multiple levels of inheritance


 
