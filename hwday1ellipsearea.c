//Ellipse Area

//This program computes the area of an ellipse 
//given semiaxes a and b

#include <stdio.h>
#include <math.h>
//Create symbolic constant PI
#define PI 3.14159265

int main(void){
	//declare variables
	double a=2, b=5, area;
	//formula for area of ellipse
	area=PI*a*b;
	//print result
	printf("The area of the ellipse with semimajor axes of length %1.2f and %1.2f is %5.2f units squared \n",a,b,area);
	
	return 0;
}