/****************************************************************
** Program name: Matrix Calculator
** Author: Milad Mikeal
** Date: 9/20/18
** Description: This function calculates the determinant of the
 * specified matrix. Here is the formula for the determinant:
 * https://www.mathsisfun.com/algebra/matrix-determinant.html
****************************************************************/
#include <iostream>
#include "determinant.hpp"

int determinant(int **ptr, int s) {
    // Define variable
    int determ;
    // If matrix is 2x2
    if (s == 2) {
        determ = (ptr[0][0] * ptr[1][1]) - (ptr[1][0] * ptr[0][1]);
    }
    // If matrix is 3x3
    if (s == 3) {
        determ = (ptr[0][0] * ((ptr[1][1] * ptr[2][2]) - (ptr[1][2] * ptr[2][1]))) -
                 (ptr[0][1] * ((ptr[1][0] * ptr[2][2]) - (ptr[1][2] * ptr[2][0]))) +
                 (ptr[0][2] * ((ptr[1][0] * ptr[2][1]) - (ptr[1][1] * ptr[2][0])));
    }
    // Return determinant
    return determ;
}