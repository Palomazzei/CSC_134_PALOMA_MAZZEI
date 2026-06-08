/*
@author: Paloma Mazzei
@date: 06/02/2026
@purpose: This program will adds two floating point values together and print the result to the console.
*/


//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
   //declares two floating-point numbers
    float number01 = 1.495979E11; 
    float number02 = 1.989E30; 

    //adds the two numbers together and stores the result in a new variable called "addition"
    float addition = number01 + number02; 
    

    //print resuls to the console
    cout << "The sum of " << number01 << " and " << number02 << " is " << addition << endl;
    return 0;
}


//BOOK PAGE 55:

//Floating-point data types are used to define variables that can hold real numbers.
//In C++, there are three data types that can represent floating-point numbers: float, double, and long double.
//the literals were written as 1.495979E11 and 1.989E30, but the program printed them as 1.49598e+011 and 1.989e+30. The two sets of numbers are equivalent. 