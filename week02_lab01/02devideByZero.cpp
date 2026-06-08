/*
@author: Paloma Mazzei
@date: 06/01/2026
@purpose: This program will divide one number by zero.
*/

//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){    
    int num1 = 10;
    int quotient = num1 / 0;
    cout << "The quotient of " << num1 << " and 0 is: " << quotient << endl;
    return 0;
}