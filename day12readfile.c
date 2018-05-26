#include <stdio.h>
#define FILENAME "sensor2.txt"

int main(void){
	int num_data_pts=0;
	double time, motion, sum=0, max, min;
	FILE *sensor;
	sensor=fopen(FILENAME,"r");
	if(sensor==NULL)
	{
		printf("Error opening input file.\n");
	}
	else
	{
		fscanf(sensor,"%lf %lf",&time,&motion);
		max=min=motion;
		do
		{
			sum+=motion;
			if(motion>max)
			{
				max=motion;
			}
			if(motion<min)
			{
				min=motion;
			}
			num_data_pts++;
			fscanf(sensor,"%lf %lf",&time,&motion);
		} while(time>=0);
		printf("Number of sensor readings: %d \n",num_data_pts);
		printf("Max reading: %.2f \n",max);
		printf("Min reading: %.2f \n",min);
		fclose(sensor);
	}
	return 0;
}