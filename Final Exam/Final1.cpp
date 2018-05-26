#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    cout << "In main, declare p1..." << endl;
    point p1;
    cout << "In main, declare p2..." << endl;
    point p2(1.5, -4.7);
    cout << "In main, declare ORIGIN..." << endl; 
    const point ORIGIN(0.0, 0.0);
    point z;
    z=p1-p2;
    cout << "Distance formula" << endl; 
    z.printDistance();
    system("pause");
    return 0;
}
