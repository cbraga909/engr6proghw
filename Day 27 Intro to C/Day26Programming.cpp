// This program demonstrates the use of
// the xy_coordinate class and its functions.
#include <iostream>
#include <cmath>
#include "xy_coordinate.h"
using namespace std;
int main(void)
{
// Declare and initialize variables.
xy_coordinate pt1;
// Read input point.
cout << "Enter x and y coordinates:" << endl;
pt1.input();
// Print coordinate in xy form and polar form.
cout.setf(ios::fixed);
cout.precision(2);
cout << "Coordinate in xy form:" << endl;
pt1.print();
cout << "Coordinate in polar form:" << endl;
cout << "magnitude: " << pt1.radius() << endl;
cout << "phase (in degrees)" << pt1.angle()*180/3.141593 << endl;
// Exit program.
//system("pause");
return 0;
}
