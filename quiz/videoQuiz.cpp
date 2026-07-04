/*
@editor: Paloma Mazzei
@date: 06/29/2026
@purpose: This program will prompt the user to enter one or more scores, then calculate the number of scores entered, the number of 
            passing scores, the average score, and determinate whether the class average passing or not.
            In this program, I will add all the required comments to explain each section.
*/

#include <iostream>     //include the iostream library for input and output operations

using namespace std;    //use the standard namespace to avoid prefixing standard library names with "std::"


int main()
{
    // initialize variables and assign values when appropiate:
    int score;                      //stores user input test score
    int count = 0;                  //stores how many Scores where Entered
    int passingScores = 0;          //stores how many tests have a passing score
    float total = 0.0f;             //stores the sum of all the scores
    bool continueEntering = true;   //controls the while loop

    // create a while loop that runs until the user doesn't enter any more test scores
    while (continueEntering)
    {
        //prompt user for a score:
        cout << "Enter a test score (0 - 100): ";
        cin >> score;

        total += score;     //sum all input scores
        count++;            //increment count by one

        //if the score is greater than or equal to 70, increment passingScores by one
        if (score >= 70)
        {
            passingScores++;
        }

        //ask the user if they want to keep entering test scores
        cout << "Enter another score? (1 for true, 0 for false): ";
        cin >> continueEntering;
    }

    // initialize a variable to hold the average test grade
    float average = 0.0f;

    // if the count is grater than 0, calculate the average test grade
    if (count > 0)
    {
        average = total / count;    //sum of scores divide by number of scores
    }

    // display results to the console
    cout << "\nResults" << endl;
    cout << "-------" << endl;
    cout << "Scores Entered: " << count << endl;
    cout << "Passing Scores: " << passingScores << endl;
    cout << "Average Score: " << average << endl;


    // initialize a variable that determinates whether the average score is greater than or equal to 70
    bool classPassed = average >= 70.0f;    //this can be true(1) or false(0)
    // display result to the console
    cout << "Class Average Passing: " << classPassed << endl;

    return 0;   //return 0 to indicate successful program termination
}
