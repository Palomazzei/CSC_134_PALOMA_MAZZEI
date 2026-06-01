/*
@author: Paloma Mazzei
@date: 06/01/2026
@purpose: This program prints your favorite movie and the main characters.
*/

//include the iostream library for input and output operations
#include <iostream>
//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
    string movie;
    string mainCharacters;

    //prompt user for input and assign it to a variable (book 121)
    cout << "What is your favorite movie? ";
    getline(cin, movie); //The  function reads an entire line, including leading and embedded spaces, and stores it in a  object (book 121). 
    cout << "Who are the main characters? ";
    getline (cin, mainCharacters);

    //print results
    cout << "Your favorite movie is: " << movie << endl;
    cout << "The main characters are: " << mainCharacters << endl;
    return 0;
}