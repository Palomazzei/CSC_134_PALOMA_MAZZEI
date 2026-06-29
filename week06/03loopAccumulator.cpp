/*
@author: Paloma Mazzei
@date: 06/29/2026
@purpose: This program will  uses an accumulator to count the number of iterations in a for-loop.
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //initialize a variable accumulator
    int accumulator = 0;  

    // set up a for-loop to loop a maximum of 100 times
    for (int i=0; i <100; i++){ 
        //add 1 to the accumulator each iteration through the loop
        accumulator++;
    }

    //When the loop is complete, print out a message using cout
    cout << "The accumulator value is: " << accumulator << endl;

    return 0;   //return 0 to indicate successful program termination

}