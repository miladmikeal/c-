/****************************************************************
** Program name: Zoo Tycoon Game
** Author: Milad Mikeal
** Date: 10/10/18
** Description: Penguin class implementation file. Inherits from
 * animal class.
****************************************************************/
#include "Penguin.hpp"

/****************************************************************
** Description: Default constructor. Initializes all variables
 * to 0.
****************************************************************/
Penguin::Penguin() : Animal() {}

/****************************************************************
** Description: Overloading constructor. Allows input for age.
 * Initializes all other inputs specific to penguins.
****************************************************************/
Penguin::Penguin(int a) : Animal(a) {
    age = a;
    cost = 1000.0;
    numBabies = 5;
    baseFoodCost = 10.0;
    payoff = 100;
}

/****************************************************************
** Description: Overloading constructor. Allows input for age
 * and base food cost. Initializes all other inputs specific to
 * penguins.
****************************************************************/
Penguin::Penguin(int a, double bfc) : Animal(a, bfc) {
    age = a;
    cost = 1000.0;
    numBabies = 5;
    baseFoodCost = bfc;
    payoff = 100;
}