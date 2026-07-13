/*
@author: Paloma Mazzei
@date: 07/13/2026
@purpose: This program will list the months of the year.
*/

#include <iostream> //include the iostream library for input and output operations
using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    
    const int NUM_OF_MONTHS = 12;      //this is a constant variable that holds the number of elements in the array
    int days[NUM_OF_MONTHS];   //initialized an array of integers that can hold 12 elements

    //assign the number of days to each index position in the array:
    days[0] = 31;   //january
    days[1] = 28;  //february
    days[2] = 31;   //march
    days[3] = 30;   //april
    days[4] = 31;   //may
    days[5] = 30;   //june
    days[6] = 31;   //july
    days[7] = 31;   //august
    days[8] = 30;   //september
    days[9] = 31;   //october
    days[10] = 30;  //november
    days[11] = 31;  //december

    // Display a list the months of the year:
    for (int i=1; i < NUM_OF_MONTHS; i++) {     //start in the second position, like in the assigment.
        cout << "Month " << (i + 1) << " has " << days[i] << " days." << endl;
    }

    return 0;   //return 0 to indicate successful program termination

}