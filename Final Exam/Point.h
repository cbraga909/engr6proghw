#include <iostream>
#include <cmath>
using namespace std;
class point
{
      public:
             point();
             point(double x, double y);
             double operator-(point);
             bool operator==(point);
      private:
              double xcoord, ycoord;
};

point::point()
{
 cout.setf(ios::fixed);
 cout.precision(5);
 xcoord = 0;
 ycoord = 0;
 cout << "Constructing Point object, default:" << endl << "initializing to zero" << endl;
}

point::point(double x, double y)
{
 xcoord = x;
 ycoord = y;
 cout.setf(ios::fixed);
 cout.precision(1);
 cout << "Constructing Point object, parameterized:" << endl << "input parameters: " << x << "," << y << endl;
}

double point::operator-(point z)
{
      double distance;
      double diffx, diffy;
      cout.precision(5);
      diffx=pow((xcoord-z.xcoord),2);
      diffy=pow((ycoord-z.ycoord),2);
      distance=sqrt(diffx+diffy);
      return distance; 
}

bool point::operator==(point z)
{
      bool equality;
      if(xcoord==z.xcoord && ycoord==z.ycoord)
      {
       equality=true;
      }
      return equality;
}
