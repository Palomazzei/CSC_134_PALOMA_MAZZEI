/*
@author: Paloma Mazzei
@date: 06/02/2026
@purpose: This program calculates the velocity given time and distance.
*/

//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
    int t = 4; //time in hours
    int x = 400; //distance in miles

    int v = x / t; //calculate velocity

    cout << "The velocity is: " << v << " miles per hour." << endl;
    return 0;
}