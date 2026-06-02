/*
@author: Paloma Mazzei
@date: 06/02/2026
@purpose: This program calculates the voltage.
*/

//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
   int I = 10; // current in amperes
    int R = 2; // resistance in ohms

    int V = I * R; // calculate voltage

    cout << "The voltage is: " << V << " volts." << endl;
    return 0;   
}