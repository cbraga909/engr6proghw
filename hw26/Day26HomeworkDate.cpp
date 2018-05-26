//Day 26 Homework
//Date entry using class functions
//This program allows the user to enter the date using date input functions
//and prints the data in each of the defined forms using class member functions
#include <iostream>
#include <cmath>
#include "dateInputHomework.h"
using namespace std;

int main(void)
{
    //Declare and initialize variables
    dateInput myDate;
    //Read input
    myDate.input();
    //Print date
    myDate.printNum();
    myDate.printText();
    system("pause");
    return 0;
}
