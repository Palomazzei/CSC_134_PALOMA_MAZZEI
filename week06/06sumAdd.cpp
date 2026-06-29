/*
@author: Paloma Mazzei
@date: 06/29/2026
@purpose: This program will create a for-loop that loops 50 times and sums the loop counter(index) and the adder variable.
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //initializes two variables named sumOp and adder, let sumOp equal 0 and adder equal 10
    int sumOp  = 0;  
    int adder = 10;

    //Create a for-loop that loops 50 times 
    for (int i=0; i <50; i++) {
        // sums the loop counter(index) and the adder variable
        sumOp = i + adder;

        //Each iteration through the loop, you should print the sumOp variable that holds the value your summed up.
        cout << "The sum of " << i << " and " << adder << " is " << sumOp << endl;
    }

        return 0;   //return 0 to indicate successful program termination

}

