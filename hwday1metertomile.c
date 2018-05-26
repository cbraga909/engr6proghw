//Meter to Mile Converter

//This program converts meters to miles

#include <stdio.h>
//Include math to be able to use math operators
#include <math.h>

int main(void){
	//Declare variables
	double distancemeter=100, distancemile;
	//Convert meters to miles
	distancemile=distancemeter*0.00062137;
	//Print the values
	printf("%2.2f meters is equivalent to %5.2f miles \n",distancemeter,distancemile);
	//Exit program
	return 0;
}
