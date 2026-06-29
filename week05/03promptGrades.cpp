/*
@author: Paloma Mazzei
@date: 06/25/2026
@purpose: This program will prompt a user for 10 grades(must be floating point values) and calculate the average and print the result to the console.
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //create variables 
    float grades = 0.0; //holds the grade writted by the user
    float total = 0.0;  //holds the sum of the grades
    
    //create a variable to control the loop:
    int count = 0;

    //while loop  
    while (count < 10){ 
        //prompt user for a grade
        cout << "Enter your grades and I will average them: ";   
        cin >> grades; 

        //add all the grades together
        total = grades + total;
        
        //add one to the count so its not an infinitive loop
        count = count + 1;
    }

    //calculate the average
    float average = total / 10;

    //print the average result to the console
    cout << "The average is: " << average << endl;

    return 0;   //return 0 to indicate successful program termination

}

