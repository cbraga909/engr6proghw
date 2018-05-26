//Day 7 Homework: Random Numbers
//This program generates random integers between two user-specified numbers
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  /* Declare variables and function prototype. */
  unsigned int seed;
  int a, b, k;
  int rand_int(int a,int b);
  /* Get seed value and interval limits. */
  printf("Enter a positive integer seed value: \n");
  scanf("%u",&seed);
  srand(seed);
  printf("Enter integer limits a and b (a<b): \n");
  scanf("%i %i",&a,&b);
  /* Generate and print ten random numbers. */
  printf("Random Numbers: \n");
  for (k=1; k<=10; k++)
  printf("%i ",rand_int(a,b));
  printf("\n");
  /* Exit program. */
  return 0;

}

int rand_int(int a,int b)
{
  return rand()%(b-a+1) + a;
}
