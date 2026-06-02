/*
@author: Paloma Mazzei
@date: 06/02/2026
@purpose: This program uses the character data type that prints this character string Hi!  to the console.
*/


//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
   //declares a char variable named word
    char first, middle, last;

   //assign the character string 'Hi!' to the word variable
    first = 'H';
    middle = 'i';
    last = '!';

    //print resuls to the console
    cout << first << middle << last << endl;
    return 0;
}


//BOOK PAGE 49:

//The  data type is used to store INDIVIDUAL characters. 
//A variable of the  data type can hold only ONE CHARACTER at a time.
//In C++, character literals are enclosed in SINGLE QUOTATIONS marks.

//It is important that you do not confuse CHARACTER literals with STRING literals.
// 'A' is a 1-byte element and "A" is a 2-byte element. 
//The very last byte of the string contains the null terminator, which is represented by the \0 character. 
//The addition of this last byte means that although the string "Sebastian" is 9 characters long, it occupies 10 bytes of memory.