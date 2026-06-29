/*
@author: Paloma Mazzei
@date: 06/29/2026
@purpose: This program will implements a simple for-loop starting at 0 and terminating at 10.
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //initialzie a variable
    int count = 0;

    for (int i = 0; i < 10; i++) {  //loop that executes 10 times
        count++;    //increment count variable
        
    //Print the loop counter(index) using cout each iteration through the loop.
    cout << "The loop execute " << count << " loops." << endl;  
    }

    //To print the total value of loops:
    //cout << "The loop execute " << count << " loops." << endl;  

    return 0;
}