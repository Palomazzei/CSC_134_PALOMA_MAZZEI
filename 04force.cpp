/*
@author: Paloma Mazzei
@date: 06/02/2026
@purpose: This program calculates the Force.
*/

//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
    double m = 10; // mass in Kg
    double a = 9.81; // acceleration in meters per second squared

    double F = m * a; // calculate force

    cout << "The force is: " << F << " Newtons." << endl;
    return 0;   
}