/****************************************************************
** Program name: Matrix Calculator
** Author: Milad Mikeal
** Date: 9/20/18
** Description: This function prompts the user the input values
 * of a 2D array for the specified matrix in the main function.
****************************************************************/
#include <iostream>
#include "readMatrix.hpp"
using std::cout;
using std::cin;
using std::endl;

void readMatrix(int **ptr, int s) {
    // Define variables
    int input;
    // Assign values to allocated array
    for (int row = 0; row < s; ++row) {
        for (int col = 0; col < s; ++col) {
            // Prompt user to input values of matrix
            cout << "Please enter a number for row "
                 << row+1 << ", col " << col+1 << ": ";
            cin >> input;
            ptr[row][col] = input;
        }
    }
}