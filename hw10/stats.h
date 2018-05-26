//Day 10 Homework: Random Numbers
//This header file includes all the functions needed to carry out the random number program

#include <stdlib.h>
#include <math.h>

double rand_float(double interval_start, double interval_end)
{
  float mynum=((float)rand())/(float)RAND_MAX;
  float diff=interval_end - interval_start;
  float r=mynum*diff;
  return interval_start + r;
}

/* This function returns the average or mean value of an */
 /* array x with n elements. */ 
double mean(double x[],int npts) 
{ /* Declare and initialize variables. */ 
	int k; 
	double sum=0; 
	/* Determine mean value. */ 
	for (k=0; k<=npts-1; k++)
	 	sum += x[k]; 
	/* Return mean value. */ 
	return sum/npts; 
}


/* This function returns the median value in the sorted */
/* array x with npts elements. */
double median(double x[],int npts)
{
  /* Declare variables. */
  int k;
  double median_x;
  /* Determine median value. */
  k = floor(npts/2);
  if (npts%2 != 0)
    median_x = x[k];
  else
    median_x = (x[k-1] + x[k])/2;
  /* Return median value. */
  return median_x;
}


/* This function returns the variance of an array x */
/* with npts elements. */
double variance(double x[],int npts)
{
/* Declare variables and function prototypes. */
  int k;
  double sum=0, mu;
  double mean(double x[],int npts);
  /* Determine variance. */
  mu = mean(x,npts);
  for (k=0; k<=npts-1; k++)
    sum += (x[k] - mu)*(x[k] - mu);
  /* Return variance. */
  return sum/(npts-1);
}

/* This function returns the standard deviation of an array x */
/* with npts elements. */
double std_dev(double x[],int npts)
{
  /* Declare function prototypes. */
  double variance(double x[],int npts);
  /* Return standard deviation. */
  return sqrt(variance(x,npts));
}
