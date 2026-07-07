/*
@author: Paloma Mazzei
@date: 07/06/2026
@purpose: This program will asks the user to enter the amount that they have budgeted and each of their expenses. The program should display the amount that the user is over or under budget.
*/

#include <iostream> //include the iostream library for input and output operations
#include <iomanip> //input/output manipulator
using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //initialize variables
    float budgeted;         //holds the amount that the user budgeted for a month
    float expenses;         //holds the expenses enter by the user
    float totalExpenses;    //holds the sum of expenses
    float difference;       //holds the amount that the user is over or under budget
    char again;             //holds 'y' or 'no', and controls the loop

    //asks the user to enter the amount that they have budgeted for a month:
    cout << "What is your budget for a month?: ";
    cin >> budgeted;

    //loop until the user has no more expenses
    //BOOK PAGE 254 for do-while loop
    do
    {
        //prompt the user to enter each of their expenses for the month
        cout << "What are your expenses for a month?: ";
        cin >> expenses;

        //keep a running total:
        totalExpenses += expenses;

        //ask the user if they want to enter additional expenses
        cout << "Do you want to enter an additional expense? (Y/N): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');
    
    //display the amount that the user is over or under budget
    difference = budgeted - totalExpenses;
    if (difference > 0) {
        cout << "The amount under budget is: $" << difference << endl;      //Under budget = you spent less than planned
    } 
    else if (difference < 0) {
        cout << "The amount over budget is: $" << -difference << endl;      //Over budget = you spent more than planned
    }
    else {
        cout << "Your budget and expenses are the same." << endl;
    }

    return 0;   //return 0 to indicate successful program termination

}