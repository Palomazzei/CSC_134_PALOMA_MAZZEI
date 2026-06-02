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
//3. Windows users: Write "./a.exe" to run the program 
//3. Apple users: Write "./a.out" to run the program 