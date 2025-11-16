Aim:
To demonstrate the concept of array of objects.
To handle multiple objects using a single array.

Algorithm:

1. Start the program.
2. Define a class with data members.
3. Declare an array of objects in main().
4. Accept details for each object using loops.
5. Display details of all objects.
6. Access each element using index.
7. Stop the program.

Program:

#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;
public:
    void getData() {
        cout << "Enter ID, Name, and Salary: ";
        cin >> id >> name >> salary;
    }
    void showData() {
        cout << "ID: " << id << " | Name: " << name << " | Salary: " << salary << endl;
    }
};

int main() {
    Employee emp[3];
    cout << "Enter details of 3 employees:\n";
    for (int i = 0; i < 3; i++)
        emp[i].getData();

    cout << "\n--- Employee Details ---\n";
    for (int i = 0; i < 3; i++)
        emp[i].showData();

    return 0;
}


Output:

Input:
Enter details of 3 employees:
Enter ID, Name, and Salary: 1 Raj 25000
Enter ID, Name, and Salary: 2 Ravi 30000
Enter ID, Name, and Salary: 3 Riya 28000

output:
ID: 1 | Name: Raj | Salary: 25000
ID: 2 | Name: Ravi | Salary: 30000
ID: 3 | Name: Riya | Salary: 28000


Result
Array of objects was successfully implemented.
Multiple object data handled using loops
