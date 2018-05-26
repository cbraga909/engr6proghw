//Day 10 Homework
//This program generates 500 random floating-point numbers 

#include <stdio.h>
#include <time.h>
#include "stats.h"

double rand_float(double interval_start, double interval_end);
double mean(double x[],int npts);
double median(double x[],int npts);
double variance(double x[],int npts);
double std_dev(double x[],int npts);

int main(void)
{
  float mu;
  srand(time(NULL));
  for(int k=1; k<=500; k++)
  {
    printf("%1.3f",rand_float(4, 10));
    printf("\n");
  }
  return 0;
}
