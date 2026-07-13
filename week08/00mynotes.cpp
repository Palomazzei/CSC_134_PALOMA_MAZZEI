/*
@author: Paloma Mazzei
@date: 07/13/2026
@purpose: This is my first attemt at using arrays in C++.
*/

#include <iostream> //include the iostream library for input and output operations
using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){

    // EXAMPLE 1:

    const int NUM_OF_ELEMENTS = 5;      //this is a constant variable that holds the number of elements in the array
    
    int myArray[NUM_OF_ELEMENTS];   //this is an array of integers that can hold 5 elements

    //assign values to each index position in the array:
    myArray[0] = 100;
    myArray[1] = 200;
    myArray[2] = 300;
    myArray[3] = 400;
    myArray[4] = 500;

    cout << "The first element of the array is " << myArray[0] << endl;
    cout << "The fourth index of the array is " << myArray[4] << endl;

    //return 0; 


    //EXAMPLE 2:

    const int NUM_EMPLOYEES = 6;
    int hours [NUM_EMPLOYEES];

    cout << "Enter the hours worked by each employee: ";

    //capture the hours worked by each employee
    cin >> hours[0];
    cin >> hours[1];
    cin >> hours[2];
    cin >> hours[3];
    cin >> hours[4];
    cin >> hours[5];

    cout << "The hours worked by each employee are: " << endl;
    
    //Display the hours worked by each employee
    cout << "Employee 1: " << hours[0] << " hours." << endl;
    cout << "Employee 2: " << hours[1] << " hours." << endl;
    cout << "Employee 3: " << hours[2] << " hours." << endl;
    cout << "Employee 4: " << hours[3] << " hours." << endl;
    cout << "Employee 5: " << hours[4] << " hours." << endl;
    cout << "Employee 6: " << hours[5] << " hours." << endl;

    //return 0;
    
    
    //EXAMPLE 3:
    
    const int NUM_EMPLOYEES01 = 6;
    int hours01[NUM_EMPLOYEES01];
    

    //use a for loop to interact with the user
    for (int count=0; count < NUM_EMPLOYEES01; count++) {
        cout << "Enter hours worked by employee " << (count + 1) << ":";
        cin >> hours01[count];
    }

    cout << "The hours you entered are: " << endl;

    //use a for loop to print elements in the array 
    for (int count=0; count < NUM_EMPLOYEES01; count++) {
        cout << "Employee: " <<  hours01[count] << endl;
    }

    return 0l;
}