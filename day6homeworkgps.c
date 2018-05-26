//GPS Distances//
//This program calculates the distance between two GPS coordinates//
#include <stdio.h>
#include <math.h>

//Create function to calculate angle between vectors//
double angle(double x1,double y1,double z1,double x2,double y2,double z2)
	{
	double adotb=x1*x2+y1*y2+z1*z2;
	double maga=sqrt(x1*x1+y1*y1+z1*z1);
	double magb=sqrt(x2*x2+y2*y2+z2*z2);
	double angle=acos(adotb/(maga*magb));
	return angle;
	} 

//Function to calculate distance between two vectors//

float gc_distance(float firstlat, float firstlong, float secondlat, float secondlong){
	
	//Define values//
	float pi=3.14159265;
	float x1, y1, z1, x2, y2 ,z2;
	float phi1,theta1,phi2,theta2;
	float rho=3960;
	
	//Find angles//
	phi1=(90-firstlat)*pi/180;
  	theta1=(360-firstlong)*pi/180;
  	phi2=(90-secondlat)*pi/180;
  	theta2=(360-secondlong)*pi/180;
	
	//Find rectangular coordinates//
	x1=rho*sin(phi1)*cos(theta1);
  	y1=rho*sin(phi1)*sin(theta1);
  	z1=rho*cos(phi1);
  	x2=rho*sin(phi2)*cos(theta2);
  	y2=rho*sin(phi2)*sin(theta2);
  	z2=rho*cos(phi2);
	
	//Use angle function to find angle between rectangular coordinates//
	//Multiply by radius to find distance//
	double ans=3960*angle(x1,y1,z1,x2,y2,z2);
	//Print result
	return ans;
}
int main(void){
	int lat_val1, long_val1,lat_val2,long_val2;
	float firstlat, firstlong, secondlat, secondlong;
	
	//Read latitude and longitude for first point//
	printf("Input the latitude and longitude of the first city\n");
	scanf("%f %f",&firstlat,&firstlong);
	
	//Find out if latitude is north or south and adjust accordingly//
	printf("Is the value of latitude north or south? Enter 1 for north and 2 for south.\n");
	scanf("%i",&lat_val1);
	if(lat_val1==2)
	{
		firstlat=-firstlat;
	}
	
	//Find out if longitude is east or west//
	printf("Is the value of longitude east or west? Enter 1 for west and 2 for east\n");
	scanf("%i",&long_val1);
	if(long_val1==2)
	{
		firstlong=-firstlong;
	}
	

	//Read latitude and longitude for second point//
	printf("Input the latitude and longitude of the second city\n");
	scanf("%f %f",&secondlat,&secondlong);
	
	//Find out whether latitude value is north or south and adjust accordingly//
	printf("Is the value of latitude north or south? Enter 1 for north and 2 for south.\n");
	scanf("%i",&lat_val2);
	if(lat_val2==2)
	{
		secondlat=-secondlat;
	}
	
	//Find out whether longitude is east or west//
	printf("Is the value of longitude east or west? Enter 1 for west and 2 for east\n");
	scanf("%i",&long_val2);
	if(long_val1==2)
	{
		secondlong=-secondlong;
	}
	
	//Use function to calculate distance//
	float distance=gc_distance(firstlat,firstlong,secondlat,secondlong);
	printf("Distance: %4.3f miles\n",distance);
	return 0;
}


