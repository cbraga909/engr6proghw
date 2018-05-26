//Celcius to Rankin

//This program converts temperatures in degrees
//Celcius to degrees Rankin
#include <stdio.h>
#include <math.h>

int main(void){
	//Declare variables
	double degrees_C=20, degrees_Rankine;
	//Formula to convert from degrees Celcius to Rankine
	degrees_Rankine=(9*(degrees_C+273.15))/5;
	//Print result
	printf("%2.2f degrees Celsius is equivalent to %5.2f degrees Rankine \n", degrees_C, degrees_Rankine);
	return 0;
}




