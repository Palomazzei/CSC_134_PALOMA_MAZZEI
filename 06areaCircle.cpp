/*
@author: Paloma Mazzei
@date: 06/02/2026
@purpose: This program will calculate the area of a circle.
*/

//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){

    //declare variables and assign values (Let pi = 3.1415 and let the radius r = 19)
    const double PI = 3.1415; 
    double r = 19; 
    double A; 

    //Calculates the area of a circle:
    A = PI * r * r;

    //print results 
    cout << "The area of a circle is: " << A <<endl;
    return 0;
}


//BOOK PAGE 75:
//Named CONSTANTS can also help prevent typographical errors in a program’s code. For example, suppose you use the number 3.14159 as the value of pi in a program that performs various geometric calculations.