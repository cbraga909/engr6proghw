//Factorial by Stirling formula
//This program computes the factorial of a number using the Stirling formula
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159265 //Set value of pi

int main(void)
{
  int n;
  //Function prototype
  int n_fact(int n);
  //Prompt user to input number to find factorial of
  printf("Input positive non-zero integer you would like to find factorial of\n");
  scanf("%i",&n);
  
  //If value is negative, factorial cannot be computed, and program exits
  if(n<=0)
  {
    printf("Value must be a positive non-zero integer\n");
    return 0;
  }
  
  //If value is positive, print the factorial
  else
  {
    printf("%i! = %li \n",n,n_fact(n));
  }
  return 0; //Exit code
}

//Function to find factorial using Stirling formula
int n_fact(int n)
{
  long factorial;
  //Stirling formula
  factorial=(sqrt(2*pi*n))*pow((n/exp(1)),n);
  return factorial;
}
