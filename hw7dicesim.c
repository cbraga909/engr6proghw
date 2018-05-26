//Two Six-Sided Dice Simulation
//This program simulates rolling two six-sided dice
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  unsigned int seed;
  //Function prototype
  int rand_int(int a, int b);
  int num_rolls;
  int a=1, b=6;
  
  //Allow user to enter number of dice rolls to simulate
  printf("Enter number of dice rolls to simulate\n");
  scanf("%i",&num_rolls);
  
  //Obtain seed value
  printf("Enter a positive integer seed value\n");
  scanf("%u",&seed);
  
  //Specify seed value
  srand(seed);
  printf("Numbers: \n");
  
  //Print values
  for (int k=1; k<=num_rolls;k++)
  {
    printf("Dice One: %i Dice Two: %i",rand_int(a,b),rand_int(a,b));
    printf("\n");
  }
  return 0;
}

//rand_int function 
int rand_int(int a, int b)
{
  return rand()%(b-a+1)+a;
}
