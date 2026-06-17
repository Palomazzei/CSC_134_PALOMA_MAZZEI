/*
@author: Paloma Mazzei
@date: 06/15/2026
@purpose: This program will accepts a year from a user and determines if the year is a leap year or not.
*/

#include <iostream> //include the iostream library for input and output operations
using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //declare variables to hold values:
   int year;    //year given by the user
   int condition1, condition2, condition3;  //three conditions based on the rules
   
   //prompt user for a year and read it:
   cout <<"Enter a year: ";   
   cin >> year; 

   //use modulus operator to check the three conditions:
   condition1 = year % 400;     // multiple of 400?
   condition2 = year % 4;       // multiple of 4?
   condition3 = year % 100;     // multiple of 100?
   //if the remainder is zero, the year is a multiple

    //display results based on the rules: 
   if (condition1 == 0 || (condition2 == 0 && condition3 != 0)){     //if the the year is a multiple of 400 OR the year is a multiple of 4 but NOT a multiple of 100
        cout << "The year you entered " << year << " is a leap year." << endl;     //output message if the year is lead 
    }
    else {
        cout << "The year you entered " << year << " is NOT a leap year." << endl;  ///output message if the year is Not lead
    }

    return 0;   //return 0 to indicate successful program termination
}
