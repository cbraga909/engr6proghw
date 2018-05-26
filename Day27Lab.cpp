// This program demonstrates the use of
// the complex number class and its operations.
#include <iostream>
#include "ccomplex"
including namespace std;
int main(void)
{
// Declare and initialize variables.
complex c1(4,1), c2(-3,-2), c3;
// Print initial values.
cout << "c1:"
c1.print();
cout << "c2:"
c2.print();
cout << "c3:";
c3.print();
// Compute and print new values.
c3 = c1 + c2;
cout << "c1+c2 = "
c3.print();
c3 = c1 - c2;
cout << "c1-c2 = "
c3.print();
c3 = c1*c2;
cout << "c1*c2 = "
c3.print();
c3 = c1/c2;
cout << "c1/c2 = "
c3.print();
// Exit program.
return 0;
}
