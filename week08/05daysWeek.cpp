/*
@author: Paloma Mazzei
@date: 07/13/2026
@purpose: This program will define an array of Strings that contains the days of the week(Sunday - Saturday) and print them.
*/

#include <iostream> //include the iostream library for input and output operations
using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    
    const int NUM_OF_DAYS = 7;      //this is a constant variable that holds the number of elements in the array
    //initialized an array of string values that can hold 7 elements and assign the name of the days to it:
    string daysWeek[NUM_OF_DAYS] =  { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

    // Display days of the week:
    for (int i=0; i < NUM_OF_DAYS; i++) {     
        cout << "Day " << (i + 1) << ": " << daysWeek[i] << endl;
    }

    return 0;   //return 0 to indicate successful program termination

}