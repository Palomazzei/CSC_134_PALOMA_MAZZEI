/*
@author: Paloma Mazzei
@date: 06/29/2026
@purpose: This program will accepts an integer input from a user and display the multiplication table for the entered integer.
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //initialzie variables
    int userValue;  //hold the user input
    int result = 0;  //hold the results of the multiplication

    //prompt user for a value
    cout << "Enter an integer value: ";   
    cin >> userValue; 

    //print table header
    cout << "Number         Result\n";
    cout << "----------------------\n";

    //for loop to display the results from 0-12
    for (int i=0; i <= 12; i++) {
        //calculate results from 0-12
        result = userValue * i;

        //print the results in each interaction
        cout << i << "\t\t" << result << endl;
    }

    return 0;   //return 0 to indicate successful program termination
}
