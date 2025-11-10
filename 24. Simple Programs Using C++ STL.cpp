Aim:
To write a C++ program using STL vector to store and process marks of students.

Algorithm:

1.Start the program.
2.Include the header file <vector>.
3.Declare a vector to store marks of students.
4.Read marks from the user and insert them into the vector using push_back().
5.Display all marks using a loop.
6.Calculate the average mark.
7.Display the total and average marks.
8.End the program.

Program:

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks;
    int n, mark, total = 0;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter marks of " << n << " students:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> mark;
        marks.push_back(mark);
        total += mark;
    }

    cout << "\nMarks entered: ";
    for (int m : marks)
        cout << m << " ";

    float avg = (float)total / n;

    cout << "\nTotal Marks = " << total;
    cout << "\nAverage Marks = " << avg << endl;

    return 0;
}
