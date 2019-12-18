/****************************************************************
** Program name: Recursive Functions
** Author: Milad Mikeal
** Date: 10/19/18
** Description: This file contains the the functions:
 * reverseString, sumArray, and triangular, which are used
 * throughout the program.
****************************************************************/
#include <iostream>
#include "functions.hpp"
using std::cout;
using std::endl;


/****************************************************************
** Description: Recursively reverses a string.
****************************************************************/
void reverseString(std::string str) {
    // If string is one letter
    if (str.size() == 1) {
        // Print string
        cout << str << '\n';
    // Otherwise
    } else {
        // Print last letter
        cout << str[str.size() - 1];
        // Recursively call function until all letters printed
        reverseString(str.substr(0, (str.size() - 1)));
    }
}

/****************************************************************
** Description: Recursively sums the elements in an array.
****************************************************************/
int sumArray(int *arr, int num) {
    // If num is 0
    if (num == 0) {
        // Return 0
        return 0;
    }
    // Recursively calculate sum of array
    return (sumArray(arr, num - 1) + arr[num - 1]);
}

/****************************************************************
** Description: Recursively calculates the triangular number.
****************************************************************/
int triangular(int num) {
    // If num is 1
    if (num == 1) {
        // Return num
        return num;
    // Otherwise
    } else {
        // Recursively calculate triangular
        return triangular(num - 1) + num;
    }
}