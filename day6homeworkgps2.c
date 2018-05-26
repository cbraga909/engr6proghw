#include <stdio.h>
#include <math.h>
#define pi 3.14159265


int main(void){
	double lat1,long1,lat2,long2;
	double gc_distance(double lat1, double long1, double lat2, double long2);
	double angle(double x1, double y1, double z1, double x2, double y2, double z2);
	printf("Enter latitude and longitude for first location\n");
	scanf("%f %f",&lat1,&long1);
	printf("Enter latitude and longitude for second location\n");
	scanf("%f %f",&lat2,&long2);
	printf("Distance: %2.3f miles\n",gc_distance(lat1,long1,lat2,long2));
	return 0;
}
double angle(double x1, double y1, double z1, double x2, double y2, double z2)
{
	double gamma, dot, amag, bmag;
	//double x1, y1, z1, x2, y2, z2;
	dot = x1*x2 + y1*y2 + z1*z2;
	amag = sqrt(x1*x1 + y1*y1 + z1*z1);
	bmag = sqrt(x2*x2 + y2*y2 + z2*z2);
	gamma = acos(dot/(amag*bmag));
	return gamma;
}
double gc_distance(double lat1, double long1, double lat2, double long2)
{
	double rho, phi1, theta1, phi2, theta2;
	double x1, y1, z1, x2, y2, z2;
	rho=3960;
	phi1=(90-lat1)*(pi/180);
	theta1=(360-long1)*(pi/180);
	x1=rho*sin(phi1)*cos(theta1);
	y1=rho*sin(phi1)*sin(theta1);
	z1=rho*cos(phi1);
	phi2=(90-lat2)*(pi/180);
	theta2=(360-long2)*(pi/180);
	x2 = rho*sin(phi2)*cos(theta2);
	y2 = rho*sin(phi2)*sin(theta2);
	z2 = rho*cos(phi2);
	double gamma=angle(x1,y1,z1,x2,y2,z2);
	return gamma*rho;
}

