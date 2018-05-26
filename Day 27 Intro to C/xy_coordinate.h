// These statements define a class for xy-coordinates. 
// This declaration is stored in xy_coordinate.h. 
#include <iostream>
#include <cmath>
using namespace std; 
class xy_coordinate 
{ 
// Declare function prototypes for public members. 
public: 
void input(); 
void print(); 
double radius(); 
double angle(); 
private: // Declare private data members. 
double x, y; 
}; 
// These statements define implementation of an 
// xy_coordinate class. They are stored in xy-coordinate.h.
// This function reads the xy coordinates from the keyboard.
void xy_coordinate::input()
{
cin >> x >> y;
}
// This function prints the xy coordinates to the screen.
void xy_coordinate::print()
{
cout << "(" << x << "," << y << ")" << "\n";
}
// This function computes the radius.
double xy_coordinate::radius()
{
return sqrt(x*x + y*y);
}
// This function computes the angle in radians.
double xy_coordinate::angle()
{
// Compute angle of polar form.
double z, pi=3.141593;
if (x >= 0)
z = atan(y/x);
if (x<0 && y>0)
z = atan(y/x) + pi;
if (x<0 && y<=0)
z = atan(y/x) - pi;
if (x==0 && y==0)
z = 0;
return z;
}
