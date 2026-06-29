/*
@author: Paloma Mazzei
@date: 06/29/2026
@purpose: This program will prompt user for a integer value and loop over it.
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //initialzie variables
    int userValue;  //hold the user input
    int count = 0;  //count how many time the loop execute

    //prompt user for a value
    cout << "Enter an integer value: ";   
    cin >> userValue; 

    for (int i = 0; i < userValue; i++) {
        //print out the number of iterations that occur
        cout << "The loop execute " << count << " loops." << endl;  

        //increment count after the print so it prints since 0 until the number before the input
        //"So for example, if you enter 5, the program should print 0 through 4 on the console."
        count++;
    }

        return 0;   //return 0 to indicate successful program termination

}