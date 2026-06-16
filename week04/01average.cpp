/*
@author: Paloma Mazzei
@date: 06/15/2026
@purpose: This program will calculate the average of three integer values and print the result.
*/


#include <iostream> //include the iostream library for input and output operations
#include <iomanip> //input/output manipulator
using namespace std;    //use the standard namespace to avoid prefixing standard library names with "std::"

int main(){
    //declare variables:
   int value1, value2, value3;  //variable to hold three integer values
   double average;             //variable to hold the average value

   //prompt user for the three values and assigned them to variables:
   cout <<"Enter 3 values and I will average them: ";   
   cin >> value1 >> value2 >> value3; 

   //calculate the average value:
   average = (value1 + value2 + value3) / 3.0;

   //display results:
   cout << fixed << setprecision(2);    //set output to show two decimal places
   cout << "The average of your three numbers is: " << average << endl;

   return 0;    //return 0 to indicate successful program termination
}

//BOOK 118: 
//When the FIXED and SETPRECISION manipulators are used together, the value specified by the SETPRECISION manipulator will be the number of digits to appear after the decimal point. 

