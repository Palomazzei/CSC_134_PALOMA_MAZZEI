/*
@author: Paloma Mazzei
@date: 06/29/2026
@purpose: This program will asks the user how many times they would like roll a single die(integer value).
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //initialzie variables
    int times;  //hold the user input

    //prompt user for number of times
    cout << "How many times you would like roll a single die(integer value)?: ";   
    cin >> times; 

    //seed the random number generator.
    srand(static_cast<unsigned int>(time(0)));

    //use a for-loop to simulate rolling a die
    for (int i = 1; i <= times; i++) {
        //randomly choose a number between 1 and 6
        int randomNum = rand() % 6  + 1;    //rand()%6 produce a number from 0 to 5. //+1 shifts the range to 1 to 6
        //print the random number obtained in each interaction
        cout << "Roll " << i << ": " << randomNum << endl;

    }

    return 0;   //return 0 to indicate successful program termination

}

