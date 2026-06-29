/*
@author: Paloma Mazzei
@date: 06/29/2026
@purpose: This program will set two integer variables and implement a for-loop to print each number and its square to a simple table on the console.
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //initialize two integer variables
    int minNum  = 0;    //named minNum to the value of 0
    int maxNum = 100;   //named maxNum to 100

    //print table header
    cout << "Number | Number Squared\n";
    cout << "-----------------------\n";

    //for-loop to print each number and its square to a simple table on the console
    for (int i = minNum; i <= maxNum; i++) {
        //calculate the square root in each interaction
        int square = i * i;

        //print the results in each interaction in a table format
        cout << i << "\t\t" << square << endl;
    }

    return 0;   //return 0 to indicate successful program termination
}

//BOOK 262