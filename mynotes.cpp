/*this is a comment*/
//this is also a comment


#include <iostream> //let the program to include some external library
using namespace std; //its a block of memore that the program can use to store data and perform operations on it

//this is the MAIN FUNCTION, the program starts executing from here
int main(){
   int num1 = 5;
   int num2 = 10;
   int product = num1 * num2;
   
   //to PRINT a STRING:
   //this is call "ce out"
   cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
   return 0;
}

//To EXECUTE this program:
//1. go to the triangle icon and select "TERMINAL"
//2. Write "g++ fileName.cpp"
//2. In case of folders: Write "./folderName/a.exe" or "./folderName/a.out" to run the program
//3. Windows users: Write "./a.exe" to run the program 
//3. Apple users: Write "./a.out" to run the program 



//DATA CHAR TYPE:    (BOOK PAGE 49)

//The  data type is used to store INDIVIDUAL characters. 
//A variable of the  data type can hold only ONE CHARACTER at a time.
//In C++, character literals are enclosed in SINGLE QUOTATIONS marks.

//It is important that you do not confuse CHARACTER literals with STRING literals.
// 'A' is a 1-byte element and "A" is a 2-byte element. 
//The very last byte of the string contains the null terminator, which is represented by the \0 character. 
//The addition of this last byte means that although the string "Sebastian" is 9 characters long, it occupies 10 bytes of memory.

//C++ STRING CLASS:   (BOOK PAGE 54)
//Standard C++ provides a special data type for storing and working with strings.
//standard C++ provides something called the  class that allows the programmer to create a  type variable.
