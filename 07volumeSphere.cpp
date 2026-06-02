/*
@author: Paloma Mazzei
@date: 06/02/2026
@purpose: This program will calculate the volume of a sphere.
*/

//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){

    //create variables and assign values (π = 3.1415, and radius r=7)
    const double PI = 3.1415; 
    double r = 7.0; 
    double V;

    //calculates the volume of a sphere
    V = (4/3) * PI * (r * r * r);

    //print results
    cout << "The volume of a sphere is: " << V << endl;
    return 0;
}