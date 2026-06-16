/*
@author: Paloma Mazzei
@date: 06/15/2026
@purpose: This program will use the modulo operator to determine if the number entered is even or odd.
*/

//include the iostream library for input and output operations
#include <iostream>
#include <iomanip> //input/output manipulator
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
    //declare variables to hold values:
   int number;  
   double result;      

   //prompt user for the integer value and assigned it to a variable:
   cout <<"Enter an integer and I will tell you if it is odd or even: ";   
   cin >> number; 

   //use modulus operator to check for even division by 2:
   result = number % 2;

   //display results:
   if (result == 0){        
        cout << "The number " << number << " is even."<< endl;  //if the number is evenly division by 2, it is an even number.
   }
   else {
        cout << "The number " << number << " is odd."<< endl;    //if the number is NOT evenly division by 2, it is an odd number.
    }

   return 0;
}