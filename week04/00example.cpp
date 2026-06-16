/*
@author: Paloma Mazzei
@date: 06/15/2026
@purpose: Example of if-else statement from ppt Chapter 2 continue.
*/

#include <iostream> //include the iostream library for input and output operations
#include <iomanip> //input/output manipulator
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
   const int HIGH_SCORE = 95;   //Constant a high sore is greater
   int score1, score2, score3;  //variable to hold three test score
   double average;             //variable to hold the average score

   //get the three test scores
   cout <<"Enter 3 test score and I will average them: ";   //prompt user for input
   cin >> score1 >> score2 >> score3; //read three test score from user

   //calculate and display the average score
   average = (score1 + score2 + score3) / 3.0;
   cout << fixed << showpoint << setprecision(1);   //set output to show one decimal places
   cout << "Your average is " << average << endl;

   //if the average is a high score, congratulate the user
   if (average >= HIGH_SCORE){
        cout<< "Congratulations! That's a high score!" << endl;
   }
   else {
        cout << "Keep trying!" << endl;
   }
    return 0; //return 0 to indicate successful program termination
}

