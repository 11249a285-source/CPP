Aim:
To write a C++ program to handle signals (interrupts) such as Ctrl+C using the signal() function.

Algorithm:

1.Start the program.
2.Include the header files <iostream> and <csignal>.
3.Define a signal handler function that executes when a signal (e.g., SIGINT) is received.
4.Use the signal() function to register the handler for the SIGINT signal.
5.Use an infinite loop (or a waiting loop) to keep the program running.
6.When the user presses Ctrl + C, the signal handler is invoked.
7.Display a custom message and terminate the program gracefully.
8.End the program.

Program:

#include <iostream>
#include <csignal>
#include <cstdlib>
using namespace std;

void signalHandler(int signum)
{
    cout << "\nInterrupt signal (" << signum << ") received.\n";
    cout << "Program exiting safely...\n";
    exit(signum);
}

int main()
{
    signal(SIGINT, signalHandler);

    cout << "Running program... (Press Ctrl + C to stop)\n";

    while (true)
    {
        cout << "Working...\n";
        _sleep(1000);  // Windows: _sleep; for Linux: sleep(1)
    }
    return 0;
}

Output:
Running program... (Press Ctrl + C to stop)
Working...
Working...
Working...
Working...
...

Result:
This program demonstrates how signal handling works in C++.
When the user presses Ctrl + C, the custom signal handler catches the interrupt and safely terminates the program instead of stopping abruptly.
