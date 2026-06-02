/*
@author: Paloma Mazzei
@date: 06/02/2026
@purpose: This program calculates the distance travelled.
*/

//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
   int v = 80; // velocity in mph
   int t = 2; // time in hours

   int x = v * t; // distance travelled in miles per hours

   cout << "The distance travelled is: " << x << " miles." << endl;
   return 0;
}