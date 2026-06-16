/*
@author: Paloma Mazzei
@date: 06/15/2026
@purpose: This program will uses the 1st program (01average.cpp) and print the letter grade based on the number grade.
*/

//include the iostream library for input and output operations
#include <iostream>
#include <iomanip> //input/output manipulator
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
    //declare variables:
   int value1, value2, value3;  //variable to hold three integer values
   double average;             //variable to hold the average value

   //prompt user for the three values and assigned them to variables:
   cout <<"Enter 3 test score and I will average them: ";   
   cin >> value1 >> value2 >> value3; 

   //calculate the average value:
   average = (value1 + value2 + value3) / 3.0;

   //display results:
   cout << fixed << setprecision(2);   
   cout << "The average of your three numbers is: " << average << endl;

   //print the letter grade based on the average number grade:
   if (average >= 90 && average <= 100){        //if number grade is between 90 and 100, then print the letter grade of A
        cout << "Letter grade: A" << endl;
   }
   else if (average >= 80 && average <= 89){    //if the number grade is between 80 and 89, then print the letter grade of B
        cout << "Letter grade: B" << endl;
   }
   else if (average >= 70 && average <= 79){    //if the number grade is between 70 and 79, then print the letter grade of C
        cout << "Letter grade: C" << endl;
   }
   else if (average >= 60 && average <= 69){    //if the number grade is between 60 and 69, then print the letter grade of D
        cout << "Letter grade: D" << endl;
   }
   else if (average >= 0 && average < 60){      //if the number grade is less than 60, then print the letter grade of F
        cout << "Letter grade: F" << endl;
   }
   else {
        cout <<"Invalid test score." << endl;  //in case of values less than 0 or greater than 100   
   }

   return 0;
}