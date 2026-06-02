/*
@author: Paloma Mazzei
@date: 06/02/2026
@purpose: This program will calculate the square footage of a new home.
*/

//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){

    //declare variables and assign values
    int length = 50; //feet
    int width = 32; //feet
    int A;

    //calculate the area of the home
    A = length * width;

    //print results
    cout << "The square footage of a new home is: " << A << " square feet." << endl;
    return 0;
}