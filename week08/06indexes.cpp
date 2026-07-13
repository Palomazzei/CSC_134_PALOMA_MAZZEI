/*
@author: Paloma Mazzei
@date: 07/13/2026
@purpose: This program will print the value of each array element to the console based on its array index.
*/

#include <iostream> //include the iostream library for input and output operations
using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    
    //given array ans size
    const int SIZE = 7;     //this is a constant variable that holds the number of elements in the array
    int numberList[SIZE] = {1,2,4,8};       //initialized an array of integer that can hold 7 elements and assign them to it:

    
    cout << "Here are the contents of the array:\n"; 
    // print the value of each array element to the console:
    for (int i=0; i < SIZE; i++) {     
        cout << numberList[i] << endl;

        //BOOK 397:
        //It’s important to note that if an array is partially initialized, the uninitialized elements will be set to zero. 
    }

    return 0;   //return 0 to indicate successful program termination

}