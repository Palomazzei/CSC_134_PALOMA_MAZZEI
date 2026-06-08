/*
@author: Paloma Mazzei
@date: 06/01/2026
@purpose: This program calculates the product of two numbers entered by the user and displays the result.
*/

//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
   int num1 = 5;
   int num2 = 10;
   int product = num1 * num2;
   
   cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
   return 0;
}

