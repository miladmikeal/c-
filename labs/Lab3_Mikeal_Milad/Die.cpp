/****************************************************************
** Program name: War Game with Dice Design
** Author: Milad Mikeal
** Date: 10/7/18
** Description: Die class implementation file. This class
 * declares the number of sides for each die and comes with
 * a simulating roll method.
****************************************************************/
#include "Die.hpp"
#include <random>
#include <cstdlib>
#include <ctime>
#include <time.h>

/****************************************************************
** Description: Default constructor - Initializes the number of
 * sides of the die to 6.
****************************************************************/
Die::Die() {
    N = 6;
}

/****************************************************************
** Description: Constructor - Initializes the number of sides
 * of the die.
****************************************************************/
Die::Die(int num) {
    N = num;
}

/****************************************************************
** Description: Method ot set N (number of sides).
****************************************************************/
void Die::setN(int num) {
    N = num;
}

/****************************************************************
** Description: Method to return N (number of sides).
****************************************************************/
int Die::getN() {
    return N;
}

/****************************************************************
** Description: This method simulates the rolling of a die. Its
 * range is between 1 and N sides.
****************************************************************/
int Die::roll() {
    // Seed srand with time(0)
    srand(time(0));
    // Return random num between 1 and N
    return rand() % getN() + 1;
}