/*
@author: Paloma Mazzei
@date: 07/27/2026
@purpose: This program will prompts the user for the number of days, loops over the days and prompts the user to enter sales for each day. Then, it will write a new line with the amount for the day to a file named week9_lab1.txt. 
*/

#include <iostream> //include the iostream library for input and output operations
#include <fstream> //include fstream library. File stream. Objects of this data type can be used to open files for reading, writing, or both. BOOK 278 

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){

    //create variables:
    int numOfDays;  //holds the number of days enter by the user
    double sales;   //holds the sales for each day enter by the user

    // prompts the user for the number of days:
    cout << "Enter the number of days: ";
    cin >> numOfDays;

    // BOOK 279:
    // opening a file for output (writing):
    ofstream outputFile;
    outputFile.open("week9_lab1.txt");

    // BOOK 288:
    // loops over the days and prompts the user to enter sales for each day:
    for (int i=1; i <= numOfDays; i++) {
        cout << "Enter the sales for day "<< i << ": ";     //prompu user for data
        cin >> sales;                                       //assign input to variable

        outputFile << sales << endl;                        //write file with data
    }

    // close the file:
    outputFile.close();

    // let the user know that the data has been written in the file.
    cout << "Data has been written to week9_lab1.txt" << endl;
    
    return 0;   //return 0 to indicate successful program termination
 

}