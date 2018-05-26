// This program computes and prints the roots of a quadratic
// equation. It uses the user-defined complex class.
#include <iostream>
//#include <cmath>
#include "complex.h"
using namespace std;
int main(void)
{
// Declare and initialize variables.
double a, b, c, term1, disc;
// Read values for a, b, c from the keyboard.
cout << "Enter real values a, b, c:" << endl;
cin >> a >> b >> c;
complex root1, root2;
// Compute roots of quadratic equation.
term1 = -b/(2*a);
disc = b*b - 4*a*c;
if (disc >= 0)
    {
        root1.real= term1 + sqrt(disc)/(2*a);
        root2.real = term1 - sqrt(disc)/(2*a);
        if(disc==0)
        {
        cout << "Double Roots" << endl;
        }
        else
        {
         cout << "Real Roots" << endl;
        }
    }
    else
    {
        root1.real = term1;
        root1.imag = sqrt(-disc)/(2*a);
        root2.real = term1;
        root2.imag = -sqrt(-disc)/(2*a);
        cout << "Complex Roots" << endl;
    }
// Print roots.
cout << "Roots:" << endl;
root1.print();
root2.print();
//Add System Pause
system("pause");
// Exit program.
return 0;
}
