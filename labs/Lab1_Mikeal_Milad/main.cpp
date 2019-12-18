/****************************************************************
** Program name: Matrix Calculator
** Author: Milad Mikeal
** Date: 9/20/18
** Description: This program asks the user for the size of a
 * matrix (2x2 or 3x3), dynamically allocates the memory for
 * the matrix, prompts the user for 4 or 9 integers to fill the
 * matrix, calculates the determinant, then displays both the
 * matrix and the determinant to the user.
****************************************************************/
#include <iostream>
#include "readMatrix.hpp"
#include "determinant.hpp"
using std::cout;
using std::cin;
using std::endl;

int main() {
    // Define variables
    int size, determ;

    // Prompt the user to choose the size of the matrix
    cout << "Please enter '2' or '3' for the size of the matrix: ";
    cin >> size;
    // Check if users input was 2 or 3
    while (size < 2 || size > 3) {
        cout << "Please enter '2'for a 2x2 matrix or '3' for a 3x3 matrix: ";
        cin >> size;
    }

    // Dynamically allocate space for matrix
    int **pMatrix = new int*[size];
    for (int i = 0; i < size; ++i) {
        pMatrix[i] = new int[size];
    }

    // Call readMatrix function
    readMatrix(pMatrix, size);

    // Call determinant function
    // Assign value to variable determ
    determ = determinant(pMatrix, size);

    // Display the matrix
    cout << "Here is the matrix: " << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; j++) {
            cout << pMatrix[i][j] << " ";
        }
        cout << endl;
    }

    // Display the determinant
    cout << "The determinant is: " << determ << endl;

    // Free dynamically allocated array
    for (int i = 0; i < size; ++i) {
        delete [] pMatrix[i];
    }
    delete [] pMatrix;

    return 0;
}