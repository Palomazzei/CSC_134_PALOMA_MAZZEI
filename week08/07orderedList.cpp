/*
@author: Paloma Mazzei
@date: 07/13/2026
@purpose: This program will take an array and manually sort it in ascending order and print the ordered list to the console. 
*/

#include <iostream> //include the iostream library for input and output operations
using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){
    
    // Given array, size and values:
    const int TOTAL_SIZE = 10;      //this is a constant variable that holds the number of elements in the array
    int numbers[TOTAL_SIZE] = {10,90,2,25,44,88,0,4};   //initialized an array of integer that can hold 10 elements and assign values to it
     
    // Initialized a varible that hold the subscript of the last element that is to be compared to its immediate neighbor.
    int maxElement;

    // Use a for loop to manually sort it in ascending order:
    for (maxElement = TOTAL_SIZE - 1; maxElement > 0; maxElement--){    //This takes on all of the array’s subscripts, from the highest subscript down to 0.
        for (int i=0; i < maxElement; i++) {    //Iterates once for each of the unsorted array elements
            if (numbers[i] > numbers[i+1]){     //this if statement compares the element at numbers[i] with its neighbor. If its true, swap them.
                int temp = numbers[i];          //creates a temporary variable thats going to hold the value of the biggest number
                numbers[i] = numbers[i+1];      //assign the small value to the position of the biggest value
                numbers[i+1] = temp;            //assign the value of the temporary variable to the neighbors position
            }
        }
    }
    // BOOK 484: The Bubble Sort
    //"It is called the bubble sort algorithm because as it makes passes through and compares the elements of the array, 
    //certain values “bubble” toward the end of the array with each pass."

    // Print the ordered list to the console:
    cout << "Sorted array is:\n";
    for (int i=0; i< TOTAL_SIZE; i++) {
        cout << numbers[i] << endl;
    }


    return 0;   //return 0 to indicate successful program termination

}