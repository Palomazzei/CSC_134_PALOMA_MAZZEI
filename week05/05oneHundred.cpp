/*
@author: Paloma Mazzei
@date: 06/25/2026
@purpose: This program will uses a while-loop that loops until the 100th iteration.
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){

    //create a variable counter(accumulator) to track the number of iterations through the loop
    int count = 0;

    //loop while count is less than 100 (because count start at 0)
    while (count < 100){    
        count = count + 1;
        //cout << "Iteration number " << count << endl;   //this helps me to track each iteration
    }

    //print the a message on the console that tells the user how many iterations were completed
    cout << "The program completed " << count << " interactions." << endl;

    return 0;   //return 0 to indicate successful program termination

}
    