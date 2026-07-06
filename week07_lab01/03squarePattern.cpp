/*
@author: Paloma Mazzei
@date: 07/05/2026
@purpose: This program will prints a square pattern of asterisks using nested for-loops.
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //initialize variables
    int rows;  //max number of rows, it controls the loop
    
    //prompt the user to enter the number of rows for the square
    cout << "Enter the number of rows for the square: ";
    cin >> rows;  

    //loop over each row
    for (int i=1; i <= rows; i++) {

        //loop over each column
        for (int star = 1; star <= rows; star++) {
            cout << "*" << " ";
            if (star == rows)   //if the amount of stars printed is equal to the current total number of rows, break the loop
            break;              //BOOK PAGE 295
        }

        cout << endl;   //print a new line after each row of the table
    }

    return 0;   //return 0 to indicate successful program termination
}
