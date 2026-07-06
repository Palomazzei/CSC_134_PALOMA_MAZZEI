/*
@author: Paloma Mazzei
@date: 07/05/2026
@purpose: This program will prints a chessboard pattern of asterisks and spaces using nested for-loops.
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //initialize variables
    int rows;  //max number of rows, it controls the loop
    
    //prompt the user to enter the number of rows for the chessboard 
    cout << "Enter the size of the chess board: ";
    cin >> rows; 

    //loop over each row:
    for (int i=1; i <= rows; i++) {

        //If the row number is odd:
        if (i % 2 != 0){
            
            //loop over each columns:
            for (int element = 1; element <= rows; element++) {
                    
                if (element % 2 != 0){          //if the element (that started at 1) is odd, print "*"
                    cout <<"*";
                } else {                        //if the element (that started at 1) is even, print " "
                    cout<<" ";
                }
            
        } } 

        //If the row number is even:
        else {

            //loop over each columns:
            for (int element = 1; element <= rows; element++) {
                
                if (element % 2 != 0){          //if the element (that started at 1) is odd, print " "
                    cout <<" ";
                } else {
                    cout<<"*";                  //if the element (that started at 1) is even, print " "
                }
            
        } }


        cout << endl;   //print a new line after each row of the table
    }


    return 0;   //return 0 to indicate successful program termination
}

    

