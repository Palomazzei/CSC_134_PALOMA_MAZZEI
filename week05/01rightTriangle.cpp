/*
@author: Paloma Mazzei
@date: 06/23/2026
@purpose: This program will calculates the angle(theta) of a right triangle.
*/

#include <iostream> //include the iostream library for input and output operations
#include <iomanip> //for setprecision
#include <cmath>    //library for the math expressions
using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    //declare variables to hold values:
    int x = 3; //length of triangle x is 3 units
    int y = 4; //height of triangle y is 4 units

    //use the equation x2+y2=c2, let c equal the hypotenuse:
    double c = sqrt(pow(x, 2.0) + pow(y,2.0)) ;  //BOOK PAGE 129

    // use the atan2() function, to convert from radians to degrees use 180/π:
    double angleTheta = std::atan2(y,x) * 180/ 3.14159;     
    
    //print in base of conditions:
    if ((angleTheta - 53.13) < 0.01) {      //I didn't use the exactly value of pi, so the value of angleTheta will be approximate, for that reason I check whether the difference is < 0.01
        cout << "This is a 3-4-5 triangle" << endl;     //output message if the angle is equal to 53.13°
    }
    else {
        cout << "This is NOT a 3-4-5 triangle" << endl;  //output message if the angle is NOT equal to 53.13°
    }

    return 0;   //return 0 to indicate successful program termination

}