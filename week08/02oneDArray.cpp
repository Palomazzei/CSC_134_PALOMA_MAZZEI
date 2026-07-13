/*
@author: Paloma Mazzei
@date: 07/13/2026
@purpose: This program will initialize a 1-D array with 5 integer values and sum those values and print the total to the console.
*/

#include <iostream> //include the iostream library for input and output operations
using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    
    const int NUM_OF_VALUES = 5;      //this is a constant variable that holds the number of elements in the array
    int values[NUM_OF_VALUES];   //initialized an array of integers that can hold 5 elements

    //assign values to each index position in the array:
    values[0] = 100;
    values[1] = 200;
    values[2] = 300;
    values[3] = 400;
    values[4] = 500;

    int total = 0;  //initialze a variable that will hold the sum of all the values

    //sum the values in the array
    for(int i=0; i < NUM_OF_VALUES; i++) {
        total = total + values[i];
    }

    //print the total to the console
    cout << "The total is: " << total << endl;

    return 0;   //return 0 to indicate successful program termination

}