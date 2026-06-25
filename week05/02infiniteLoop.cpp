/*
@author: Paloma Mazzei
@date: 06/25/2026
@purpose: This program will create an infinite loop.
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //create a variable and assign a value
    int number = 0;

    //create a infinite while-loop 
    while (number < 5){ 
        //print a message in each interaction
        cout << "This is infinite\n";
    }
}

//ctrl + C to kill the program