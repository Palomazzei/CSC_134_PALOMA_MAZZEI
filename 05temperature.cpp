/*
@author: Paloma Mazzei
@date: 06/02/2026
@purpose: This program will converts the temperature in degrees Fahrenheit to degrees Celsius.
*/

//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){

    //declare two variables
    float fahrenheit;
    float celsius;

    //assigns a value to the fahrenheit variable
    fahrenheit = 98.6;

    //calculate degree celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    //print resuls to the console
    cout <<"The temperature in Celsius is: "<<celsius<<endl;
    return 0;
}