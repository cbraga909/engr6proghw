//Weather Balloon
/*This program prints the altitude and velocity for a weather balloon
with a given start time, increment in time, and ending time*/

#include <stdio.h>
#include <math.h>
#define FILENAME "balloon.txt"

int main(void){
	float startTime, incTime, endTime, alt, vel, t;
	FILE *balloon;
	balloon=fopen(FILENAME,"w"); //Open output file
	
	//Take user inputs
	printf("Input start time in hours: ");
	scanf("%f",&startTime);
	printf("\n Input end time in hours: ");
	scanf("%f",&endTime);
	printf("\n Input time increment in minutes: ");
	scanf("%f",&incTime);
	incTime=incTime/60; //Convert minutes into hours
	
	float maxAlt=0, maxAltTime, velMS, totalVel;
	float totalMaxTime, totalMaxAlt=0, totalAlt;
	
	int j=0;
	
	if(j==0)
	{	
		while(endTime<=startTime) //Make sure that the starting time is less than the ending time
		{
			printf("\n End time must be greater than start time\n");
			printf("Please re-input times\n");
			printf("Input start time in hours: ");
			scanf("%f",&startTime);
			printf("\nInput end time in hours: ");
			scanf("%f",&endTime);
		}
		
		while(startTime>=48 || startTime<0)//Make sure start time falls in proper range
		{
			printf("\n Start time must be between 0 and 48 hours. Re-enter start time\n");
			printf("Input start time in hours: ");
			scanf("%f",&startTime);
			t=startTime;
		}
		
		while(endTime>=48 || endTime<0)//Make sure end time falls in proper range
		{
			printf("\n End time must be between 0 and 48 hours. Re-enter end time\n");
			printf("Input end time in hours: ");
			scanf("%f",&endTime);
		}
		
		while(incTime>=48 || incTime<0)//Make sure time increment falls in proper range
		{
			printf("\nTime increment must be between 0 and 48 hours. Re-enter time increment\n");
			printf("Input time increment in minutes: ");
			scanf("%f",&incTime);
		}
		
		if(startTime<endTime)
		{
			t=startTime;
			printf("Time  Altitude  Velocity\n");
			while(t<=endTime)
			{
				alt=-0.12*pow(t,4) + 12*pow(t,3) - 380*t*t + 4100*t + 220; //Calculate altitude
				vel=-0.48*pow(t,3) + 36*t*t - 760*t + 4100; //Calculate velocity
				velMS=vel/3600; //Covert meters per hour to meters per second
				
				printf("%.4f %.4f %.4f \n",t,alt,velMS); //Print values in console
				fprintf(balloon,"%7.4f %7.4f %7.4f \n",t, alt, velMS); //Print values to file
				if(alt>maxAlt)
				{
					maxAlt=alt; //Find maximum altitude and time that balloon reaches altitude
					maxAltTime=t;
				}
				t+=incTime; //increment time
				
				if(t>=endTime)
				{
					j=1; //Break from loop
				}
			}
			
			for(int i=0; i<=191; i++) //Find max altitude for all 48 hours
			{
				int k=i*0.25;
				totalAlt=-0.12*pow(k,4) + 12*pow(k,3) - 380*k*k + 4100*k + 220;
				if(totalAlt>totalMaxAlt)
				{
					totalMaxAlt=totalAlt;
					totalMaxTime=k;
				}
			}
		}
	}
	//Print max altitude for range
	printf("The maximum altitude for the specified range is %.4f meters, and is reached at time %.4f hours after balloon launch\n",maxAlt,maxAltTime); 
	//Print max altitude for entire flight
	printf("\nThe maximum altitude during the entire flight is %.4f meters, and is reached at time %.4f hours after balloon launch\n",totalMaxAlt,totalMaxTime);
	//Close file
	fclose(balloon);
	return 0;
}