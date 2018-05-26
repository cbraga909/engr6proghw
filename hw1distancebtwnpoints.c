//First day
//Calculate distance between two points

#include <stdio.h>
#include <math.h>

int main(void){
	//Declared variables
	float x1, y1, x2, y2, side1, side2, distance;
  printf("Input x1");
  scanf("%f", &x1);
  printf("Input y1");
  scanf("%f", &y1);
  printf("Input x2");
  scanf("%f", &x2);
  printf("Input y2");
  scanf("%f", &y2);
	//Compute side length
	side1=x2-x1;
	side2=y2-y1;
	//Compute distance between points
	distance=sqrt(side1*side1 + side2*side2);
	//Print distance between points
	printf("The distance between the two points is %5.2f \n", distance);
	return 0;
}
