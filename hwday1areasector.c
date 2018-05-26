//Area of Sector of Circle

//This program computes the area of a sector of a circle

#include <stdio.h>
#include <math.h>
//Create symbolic constant PI
#define PI 3.14159265

int main(void){
	//Declare variables
	double radius=3, angledeg=50, area;
	//formula for area of sector
	area= PI*radius*radius*(angledeg/360);
	//print result
	printf("The area of the sector is %5.3f units squared \n",area);
	return 0;
}
