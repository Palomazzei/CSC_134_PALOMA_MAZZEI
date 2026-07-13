/*
@author: Paloma Mazzei
@date: 07/13/2026
@purpose: This program will have an array of 10 integer elements,  prompt the user to enter the grade value as an integer, and calculate the average for the grades.
*/

#include <iostream> //include the iostream library for input and output operations
using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    
    const int NUM_OF_GRADES = 10;      //this is a constant variable that holds the number of elements in the array
    int grades[NUM_OF_GRADES];   //initialized an array of integers that can hold 10 elements

    //initialze a variable that will hold the sum of all the grades
    int total = 0;

    // prompt the user to enter the grade value as an integer:
    for (int count=0; count < NUM_OF_GRADES; count++) {
        cout << "Enter grade value as an integer: ";
        cin >> grades[count];

        //calculate the sum of the grades
        total = total + grades[count];
    }

    // calculate the average for the grades
    int average = total / NUM_OF_GRADES;

    // print average grade to the console
    cout << "The average grade is : " << average << endl;


    return 0;   //return 0 to indicate successful program termination

}