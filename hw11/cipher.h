//Day 11 Homework: Cipher 
//This header file contains functions needed to carry out the main cipher program

#ifndef _CIPHERH_
#define _CIPHERH_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *getInput(void)
{
  int mem=16; 
  char *message=malloc(mem); //Preallocate memory
  printf("Input Message\n");
	fgets(message,mem,stdin); //Take user input 
	
	while(message[strlen(message)-1]!='\n') //Check if there's still space
	{
		mem*=2; 
		message=realloc(message,mem); //Double amount of space
		fgets(message + mem/2 - 1, mem/2 + 1, stdin); //Read the rest of the line
	}
	return message; //return character array message
}

int EncryptMessage(void)
{
  char *message=getInput(); //call getInput function
  int ch; //initialize variable ch
  
  int shift; //initialize variable shift
  
  printf("\nInput number of characters to shift: \n");
  scanf("%i",&shift); //ask user to choose shift for encryption
  
  char newarray[strlen(message)]; //initialize array that is the same length as the message to be encrypted
  
  for(int k=0; k<=strlen(message); k++)
  {
    ch=*(message+k); //set ch equal to the current value in the array
    if(ch>='a' && ch<='z')
    {
      ch=ch+shift; //encrypt letter
      if(ch>'z')
      {
        ch=ch-26; //if the value goes past z, subtract 26
      }
      if(ch<'a')
      {
        ch=ch+26; //if value goes past a, add 26;
      }
      newarray[k]=ch; //write new value into array
    }
    
    if(ch>='A' && ch<='Z')
    {
      ch=ch+shift;
      if(ch>'Z')
      {
        ch=ch-26;
      }
      if(ch<'A')
      {
        ch=ch+26;
      }
      newarray[k]=ch;
    }
    
    else
    {
      newarray[k]=ch; //ignore non-letters
      continue; //continue
    }
  }
  printf("Encrypted Message: \n %s\n",newarray); //print encrypted message
}

#endif
