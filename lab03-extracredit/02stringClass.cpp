/*
@author: Paloma Mazzei
@date: 06/02/2026
@purpose: This program uses the C++ string class.
*/


//include the iostream library for input and output operations
#include <iostream>

//include the string library to use the string class.
#include <string>

//use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

int main(){
   
    //define variables: verbiage, age and verbiage_end and assign them string values.
    string verbiage;
    string age;
    string verbiage_end;

    verbiage = "Today I am ";
    age = "25";
    verbiage_end = " years old!";

    //print the concatenated string to the console
    cout << verbiage << age << verbiage_end << endl;
    return 0;
}


//BOOK PAGE 54:
//Standard C++ provides a special data type for storing and working with strings.
//standard C++ provides something called the  class that allows the programmer to create a  type variable.
