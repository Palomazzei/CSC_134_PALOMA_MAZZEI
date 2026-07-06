/*
@author: Paloma Mazzei
@date: 07/06/2026
@purpose: This program will  use a for-loop to display the projected sales for the next 5 years.
*/

#include <iostream> //include the iostream library for input and output operations
#include <iomanip> //input/output manipulator
using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //initialize variables
    double membership = 250000.00;     //holds the $ of the current membership 
    double result;     //holds the result for each year

    //for loop for each year for the next 5 years
    for (int year=1; year <= 5; year++) {
        //calculate the increment of 6% for each year
        result = membership * 1.06;
        //display result 
        cout << fixed << setprecision(2);    //set output to show two decimal places
        cout << "The projected sales for the year " << year << " is $" << result << endl;
        //assign the result to the membership variable, so the next loop use this new value
        membership = result;
    }

    return 0;   //return 0 to indicate successful program termination
}