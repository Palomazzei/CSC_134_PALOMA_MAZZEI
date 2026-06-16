/*
@author: Paloma Mazzei
@date: 06/15/2026
@purpose: This program will accepts a year from a user and determines if the year is a leap year
*/

//include the iostream library for input and output operations
#include <iostream>
#include <iomanip> //input/output manipulator
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
    //declare variables to hold the values:
   int year;
   int rule1, rule2, rule3;
   

   //prompt user for a year:
   cout <<"Enter a year: ";   
   cin >> year; 

   //calculates based on rules for leap year:
   rule1 = year % 400;
   rule2 = year % 4;
   rule3 = year % 100;

   
   //if condition following the rules:
   //1. The year is a multiple of 400.
   //2. The year is a multiple of 4 but not a multiple of 100.
   if (rule1 == 0 || (rule2 == 0 && rule3 != 0)){
            cout << "The year you entered " << year << " is a leap year." << endl;
    }
    else {
        cout << "The year you entered " << year << " is NOT a leap year." << endl;
    }

    return 0;
}
