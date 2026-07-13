/*
@author: Paloma Mazzei
@date: 07/13/2026
@purpose: This program will  print all 8 planets and the dwarf planet(Pluto) to the console.
*/

#include <iostream> //include the iostream library for input and output operations
using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    
    const int NUM_OF_PLANETS = 9;      //this is a constant variable that holds the number of elements in the array
    //initialized an array of string values that can hold 9 elements and assign the planets to it:
    string planets[NUM_OF_PLANETS] =  { "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto (a dwarf planet)" };

    cout << "Here are the planets:\n";

    // Display a list the months of the year:
    for (int i=0; i < NUM_OF_PLANETS; i++) {     
        cout << planets[i] << endl;
    }

    return 0;   //return 0 to indicate successful program termination

}