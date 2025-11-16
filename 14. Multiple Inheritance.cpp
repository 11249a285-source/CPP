Aim:
To implement multiple inheritance where a class inherits from two base classes.
To show how data from multiple parent classes can be combined.

Algorithm:

1. Start and include iostream.
2. Define two base classes with separate data members.
3. Define a derived class inheriting both base classes.
4. Create functions to input and display values from each base.
5. Access all members through the derived class object.
6. Display results and terminate.

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

class Marks {
protected:
    float mark1, mark2;
public:
    void getMarks() {
        cout << "Enter marks of two subjects: ";
        cin >> mark1 >> mark2;
    }
};

class Result : public Student, public Marks {
public:
    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Total Marks: " << mark1 + mark2 << endl;
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
Enter Roll Number: 101
Enter marks of two subjects: 78 89
Roll Number: 101
Total Marks: 167


Result:
Multiple inheritance was implemented successfully.
The derived class inherited properties from two base classes.

       
