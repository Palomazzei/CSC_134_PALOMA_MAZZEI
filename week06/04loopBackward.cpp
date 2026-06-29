/*
@author: Paloma Mazzei
@date: 06/29/2026
@purpose: This program will loops backward from 100 to 1 using a for-loop and print each iteration of the loop to the console using cout.
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //initialize a variable count
    int count = 100;  

    // set up a for-loop that loops backward from 100 to 1
    for (int i=100; i > 0; i--){ 
        //print each iteration of the loop
        cout << "The accumulator value is: " << count << endl;
        //decrease the count variable by one
        count--;
    }

    return 0;   //return 0 to indicate successful program termination

}