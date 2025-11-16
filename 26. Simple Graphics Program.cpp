Aim:
To write a C++ program to draw a straight line using Bresenham’s Line Drawing Algorithm in computer graphics.

Algorithm:     
    
1.Start the program.
2.Initialize graphics mode using initgraph().
3.Input the coordinates of the two end points (x1, y1) and (x2, y2).
4.Calculate:
Δx = x2 – x1
Δy = y2 – y1
Decision parameter p = 2Δy – Δx
5.Plot the initial pixel at (x1, y1).
6.Repeat until x1 < x2:
If p < 0, set p = p + 2Δy
Else set p = p + 2Δy – 2Δx and increment y1
Increment x1
Plot the new pixel (x1, y1)
7.Continue the loop until the end point is reached.
8.End the program.

Program:
    
#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x1, y1, x2, y2;
    cout << "Enter x1, y1, x2, y2: ";
    cin >> x1 >> y1 >> x2 >> y2;

    int dx = x2 - x1;
    int dy = y2 - y1;
    int p = 2 * dy - dx;

    int x = x1;
    int y = y1;

    putpixel(x, y, WHITE);

    while (x < x2)
    {
        x++;
        if (p < 0)
            p = p + 2 * dy;
        else
        {
            y++;
            p = p + 2 * dy - 2 * dx;
        }
        putpixel(x, y, WHITE);
    }

    outtextxy(100, 400, "Bresenham's Line Drawing Algorithm");
    getch();
    closegraph();
    return 0;
}

Output:
[ Graphics Window Output ]

• A straight line is drawn between the user-entered points (x1, y1) and (x2, y2)
  using Bresenham's Line Drawing Algorithm.

• The following text appears on the graphics window:
  
  "Bresenham's Line Drawing Algorithm"

Result: 
This program successfully draws a line between two points using Bresenham’s line drawing algorithm, showing fast and accurate pixel plotting in computer graphics.
