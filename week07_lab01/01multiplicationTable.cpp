/*
@author: Paloma Mazzei
@date: 07/05/2026
@purpose: This program will prints a multiplication table for numbers 1 to 10 using nested for loops.
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //initialize variables
    int rows = 10;  //max number of rows, it controls the loop
    int cols = 10;  //max number of columns, it controls the loop
    
    int count = 1;  //it will be used to calculate the multiplication result

    //loop over each row
    for (int i=1; i <= rows; i++) {

        //loop over each columns
        for (int j=1; j <= cols; j++) {
            //calculate the result of the multiplication and print it to the console using the table format
            cout << j * count << "\t";  
        }

        count++;        //increment the count variable to calculate the next row of the multiplication table
        cout << endl;   //print a new line after each row of the multiplication table
    }

    return 0;   //return 0 to indicate successful program termination
}
