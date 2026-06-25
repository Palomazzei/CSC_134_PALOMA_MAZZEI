/*
@author: Paloma Mazzei
@date: 06/25/2026
@purpose: This program will prompt the user for a temperature and keep prompting them until they enter a temperature of 212.34 degrees.
*/

#include <iostream> //include the iostream library for input and output operations

using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    
    //create variables 
    float compareTemp = 212.34; //hold the value we are going to compare
    float temperature;  //holds the value enters for the user

    //prompt user for the first temperature
    cout << "Enter  a temperature in degrees: ";   
    cin >> temperature;  

    //loop until the user enters a temperature of 212.34 degrees
    while (temperature != compareTemp){ 
        //prompt for another temperature
        cout << "Enter  a temperature in degrees: ";   
        cin >> temperature; 
    }

    //print message 
    cout << "The temperature has been successfully set, thank you." << endl;

    return 0;   //return 0 to indicate successful program termination
}