#include <stdio.h>
#include <math.h>

int main(void){
	float pi=3.14159265;
	float wave1p,wave2p,wave1h,wave2h;
	float wavelength1,wavelength2,newp,timeinc;
	float newheight;
	//Read period and wave height for wave 1
	printf("Input the period and wave height of wave 1\n");
	scanf("%f %f\n",&wave1p,&wave1h);
	
	//Read period and wave height for wave 2
	printf("Input the period and wave height of wave 2\n");
	scanf("%f %f\n",&wave2p,&wave2h);
	
	//Compute and print wavelength for each wave
	wavelength1=5.13*pow(wave1p,2);
	wavelength2=5.13*pow(wave2p,2);
	printf("Wave 1 Wavelength: %5.3f \n Wave 2 Wavelength: %5.3f \n",wavelength1,wavelength2);
	//Set new period to product of wave periods
	newp=wave1p*wave2p;
	timeinc=newp/200;
	
	float time=0, wavemax=0, steps=0, sum;
	while(steps<=199)
	{
		newheight=(wave1h+wave2h)*sin(2*pi*time*(1/newp));
		if (newheight>wavemax)
		{
			wavemax=newheight;
		}
		time=time+timeinc;
		steps++;
	}
	printf("Wavemax: %3.4f\n",wavemax);
	return 0;
}