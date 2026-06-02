/*
@author: Paloma Mazzei
@date: 06/02/2026
@purpose: This program will print Avogadro's number using E notation.
*/

//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
   //declares a variable named avogadro and assigns it the value of Avogadro's number using E notation
   //Avogadro's Number is : 6.02214076 × 1023   >>  Avogadro's Number is : 6.02214076E23
    double avogadro = 6.02214076E23; 

    //print resuls to the console
    cout << "Avogadro's number is " << avogadro << endl;
    return 0;
}

//BOOK PAGE 56:
//Example: Scientific Notation 2.4791 X 10^2   >>   E notation 2.4791E2

