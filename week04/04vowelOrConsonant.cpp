/*
@author: Paloma Mazzei
@date: 06/15/2026
@purpose: This program will determine if the single character is a vowel or consonant.
*/

//include the iostream library for input and output operations
#include <iostream>
#include <iomanip> //input/output manipulator
#include <cctype>  //character case type
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
    //declare variable to hold the input:
   char letter;
   

   //prompt user for a single character:
   cout <<"Enter a single character and I will tell you if it is vowel or consonant: ";   
   cin >> letter; 


    //account for upper and lower case characters:
   letter = tolower(letter);
    //BOOK 570: 
    //The C++ library offers functions for converting a character to uppercase or lowercase.
    //The C++ library provides two functions, TOUPPER and TOLOWER, for converting the case of a character.
    //These functions are prototyped in the header file <CCTYPE>, so be sure to include it.


    //do not allow numeric values: 
    if (!isalpha(letter)){
        cout << "That's not a valid letter." << endl;
    //BOOK 569:
    //ISALPHA Returns true (a nonzero number) if the argument is a letter of the alphabet. Returns 0 if the argument is not a letter.
    }
    else{
        //determine if the character is a vowel or consonant:
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ){
            cout << "Your letter "<< letter << " is vowel." << endl;
        }
        else {
            cout <<"Your letter "<< letter << " is consonant." << endl;
        }
    }
    return 0;
}
