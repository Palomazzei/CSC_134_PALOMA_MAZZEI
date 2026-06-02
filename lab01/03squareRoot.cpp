/*
@author: Paloma Mazzei
@date: 06/01/2026
@purpose: This program will calculates the square root of a number.
*/

//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

//include the cmath library for the sqrt function (book page 129)
#include <cmath>

int main(){
    int num1 = 9;
    int squareRoot = sqrt(num1);
    cout << "The square root of " << num1 << " is: " << squareRoot << endl;
    return 0;
}  