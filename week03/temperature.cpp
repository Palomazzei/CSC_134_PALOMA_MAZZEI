/*
@author: Paloma Mazzei
@date: 06/08/2026
@purpose: This program calculates and reports what the new average July high temperature would be for each city if temperatures rise by 2 percent.
*/

//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
    //declare variables and values
   float newYork = 85;  //85 degrees Fahrenheit in New York City
   float denver = 88;   //88 degrees Fahrenheit in Denver
   float phoenix = 106; //106 degrees Fahrenheit in Phoenix
   
   //calculate 2% of each variable and add that amount to each variable
    float newNY = newYork + (0.02*newYork);
    float newDenver = denver + (0.02*denver);
    float newPhoenix = phoenix + (0.02*phoenix);

    //print results to the console
    cout <<"The new average July high temperature would be: \n";
    cout << "New York: " << newNY << " degrees Fahrenheit\n";
    cout << "Denver: " << newDenver << " degrees Fahrenheit\n";
    cout << "Phoenix: " << newPhoenix << " degrees Fahrenheit\n";
   return 0;
}
