#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    point p1;
    point p2(1.5, -4.7);
    if(p1==p2)
    {
    cout << "p1 is equal to p2" << endl;
    }
    else
    {
    cout << "Distance between p1 and p2 is " << p1-p2 << endl;
    }
    system("pause");
    return 0;
}
