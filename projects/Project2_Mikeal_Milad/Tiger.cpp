/****************************************************************
** Program name: Zoo Tycoon Game
** Author: Milad Mikeal
** Date: 10/10/18
** Description: Tiger class implementation file. Inherits from
 * the animal class.
****************************************************************/
#include "Tiger.hpp"

/****************************************************************
** Description: Default constructor. Initializes all variables
 * to 0.
****************************************************************/
Tiger::Tiger() : Animal() {}

/****************************************************************
** Description: Overloading constructor. Allows input for age.
 * Initializes all other inputs specific to tigers.
****************************************************************/
Tiger::Tiger(int a) : Animal(a) {
    age = a;
    cost = 10000.0;
    numBabies = 1;
    baseFoodCost = 50.0;
    payoff = 2000;
}

/****************************************************************
** Description: Overloading constructor. Allows input for age
 * and base food cost. Initializes all other inputs specific to
 * tigers.
****************************************************************/
Tiger::Tiger(int a, double bfc) : Animal(a, bfc) {
    age = a;
    cost = 10000.0;
    numBabies = 1;
    baseFoodCost = 5 * bfc;
    payoff = 2000;
}