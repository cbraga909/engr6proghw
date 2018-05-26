// These statements define a class for complex numbers.
// This declaration is stored in complex.h.
#include <iostream>
#include <cmath>
using namespace std;
class complex
{
// Declare function prototypes for public members.
public:
    complex();
    complex(double a, double b);
    void print();
    void input();
    double magn(complex);
    double angle(complex);
    complex operator+(complex);
    complex operator-(complex);
    complex operator*(complex);
    complex operator/(complex);
    double real, imag;
// Declare private members.


};
//
// Class implementation
//
// These statements define implementation of a complex class.
// This function is the default constructor to initialize a
// complex number that is not given a value.
complex::complex()
{
real = 0;
imag = 0;
}
// This function is the constructor to initialize a complex
// number to a specified value.
complex::complex(double a, double b)
{
real = a;
imag = b;
}
// This function prints a complex number.
void complex::print()
{
if (imag > 0)
cout << real << "+" << imag << "i" << endl;
else
if (imag == 0)
cout << real << endl;
else
cout << real << imag << "i" << endl;
}
// This function reads two values for a complex number.
void complex::input()
{
cin >> real >> imag;
}
// This function defines the sum of complex numbers.
complex complex::operator+(complex c)
{
// Definition of complex addition.
complex temp;
temp.real = c.real + real;
temp.imag = c.imag + imag;
return temp;
}
// This function defines the difference of complex numbers.
complex complex::operator-(complex c)
{
// Definition of complex subtraction.
complex temp;
temp.real = real - c.real;
temp.imag = imag - c.imag;
return temp;
}
// This function defines the product of complex numbers.
complex complex::operator*(complex c)
{
// Definition of complex multiplication.
complex temp;
temp.real = (real*c.real - imag*c.imag);
temp.imag = (imag*c.real + real*c.imag);
return temp;
}
// This function defines the quotient of complex numbers.
complex complex::operator/(complex c)
{
// Definition of complex division.
complex temp;
temp.real = (real*c.real + imag*c.imag)/
(pow(c.real,2) + pow(c.imag,2));
temp.imag = (imag*c.real - real*c.imag)/
(pow(c.real,2) + pow(c.imag,2));
return temp;
}

      
