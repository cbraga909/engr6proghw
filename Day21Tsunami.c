#include <stdio.h> 
#define FILENAME "waves2.txt" 
/*  Define structure to represent a tsunami.  */ 
struct tsunami 
{ 
int mo, da, yr, fatalities; 
double max_height; 
char location[20]; 
}; 
int main(void) 
{ 
/*  Declare variables.  */ 
	int k=0, npts; 
	double max=0, sum=0, ave; 
	struct tsunami t[100]; 
	FILE *waves; 
	/*  Read and print information from the file.  */ 
	waves = fopen(FILENAME,"r"); 
	if (waves == NULL) 
		printf("Error opening data file. \n"); 
	else
	{
		while (fscanf(waves,"%d %d %d %d %lf %s",&t[k].mo,&t[k].da, 
		&t[k].yr,&t[k].max_height,&t[k].fatalities,t[k].location) == 6)
			{ 
			printf("Location: %s \n",t[k].location);
			printf(" Date: %d %d %d \n Max Height: %d \n Fatalities: %lf\n",t[k].mo,t[k].da,t[k].yr,t[k].max_height,t[k].fatalities);
			sum = sum + t[k].max_height; 
			if (t[k].max_height > max) 
				max = t[k].max_height; 
				k++;
		 	}	
		npts = k; 		
		ave = sum/npts; 
		printf("Summary Information for Tsunamis \n"); 
		printf("Maximum Wave Height (in feet): %.2f \n",max*3.28); 
		printf("Average Wave Height (in feet): %.2f \n",ave*3.28); 
		printf("Tsunamis with greater than average heights: \n"); 
		for (k=0; k<=npts-1; k++) 
			if (t[k].max_height > ave) 
				printf("%s \n",t[k].location); 
	fclose(waves); 
	} 
return 0; 
} 