//These statements define the implementation of the dateInput
//class. They are stored in dateInputHomework.h
#include <iostream>
#include <cmath>
using namespace std;

class dateInput
{
      //Function prototypes for public members
      public:
             void input();
             void printNum();
             void printText();
             dateInput();
             dateInput(double a, double b, double c);
      //Private data member declaration
      private:
              int month, day, year;
};

//This function takes a date input and checks the validity of the date
//provided
void dateInput::input()
{
     cout << "Input month, day, and year" << "\n";
     cin >> month >> day >> year;
     //Checks if month is within range and requests new month input
     //if it is not
     while(month<1 || month>12)
     {
       cout << "Invalid month. Please re-input month" << "\n";
       cin >> month;
     }
     
     //Checks if date is within range and requests new day input
     //if it is not
     if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
     {
         while(day<1 || day>31)
         {
             cout << "Invalid day for inputted month. Please enter day between 1 and 31" << "\n";
             cin >> day;
         }
     }
     
     //Checks if date is within range and requests new day input
     //if it is not
     if(month==4 || month==6 || month==9 || month==11)
     {
         while(day<1 || day>30)
         {
             cout << "Invalid day for inputted month. Please enter day between 1 and 30" << "\n";
             cin >> day;
         }
     }
     
     //year%4==0 indicates a leap year. This section then checks if
     //the day provided is within the range, and requests
     //a new value if it is not
     if(month==2 && year%4==0)
     {
         while(day<1 || day>29)
         {
             cout << "Invalid day for inputted month. Please enter day between 1 and 29" << "\n";
         }
     }
     //year%4!=0 indicates a non-leap year, which means that 
     //the dates must be between 1 and 28
     if(month==2 && year%4!=0)
     {
         while(day<1 || day>28)
         {
             cout << "Invalid day for inputted month. Please enter day between 1 and 28" << "\n";
             cin >> day;
         }
     }                                           
}

//This function prints the date in mm/dd/yyyy format
void dateInput::printNum()
{
    cout << month << "/" << day << "/" << year << "\n";
}

//This function prints the date in Month Day, Year format
void dateInput::printText()
{
     switch(month)
     {
          case 1 : 
               cout << "January " << day << ", " << year << "\n";
               break;
          case 2 : 
               cout << "February " << day << ", " << year << "\n";
               break;
          case 3 : 
               cout << "March " << day << ", " << year << "\n";
               break;
          case 4 : 
               cout << "April " << day << ", " << year << "\n";
               break;
          case 5 : 
               cout << "May " << day << ", " << year << "\n";
               break;
          case 6 : 
               cout << "June " << day << ", " << year << "\n";
               break;
          case 7 : 
               cout << "July " << day << ", " << year << "\n";
               break;
          case 8 : 
               cout << "August " << day << ", " << year << "\n";
               break;
          case 9 : 
               cout << "September " << day << ", " << year << "\n";
               break;
          case 10 : 
               cout << "October " << day << ", " << year << "\n";
               break;
          case 11 : 
               cout << "November " << day << ", " << year << "\n";
               break;
          case 12 : 
               cout << "December " << day << ", " << year << "\n";
               break;
     }
}

//This constructor function initializes all values to 0
dateInput::dateInput()
{
    month=0;
    day=0;
    year=0;
}

//This constructor function initializes values to parameters
dateInput::dateInput(double a, double b, double c)
{
    month=a;
    day=b;
    year=c;
}
