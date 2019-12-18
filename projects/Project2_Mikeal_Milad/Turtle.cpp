/****************************************************************
** Program name: Zoo Tycoon Game
** Author: Milad Mikeal
** Date: 10/10/18
** Description: Turtle class implementation file. Inherits from
 * animal class.
****************************************************************/
#include "Turtle.hpp"

/****************************************************************
** Description: Default constructor. Initializes all variables
 * to 0.
****************************************************************/
Turtle::Turtle() : Animal() {}

/****************************************************************
** Description: Overloading constructor. Allows input for age.
 * Initializes all other inputs specific to turtles.
****************************************************************/
Turtle::Turtle(int a) : Animal(a) {
    age = a;
    cost = 100.0;
    numBabies = 10;
    baseFoodCost = 5.0;
    payoff = 5.0;
}

/****************************************************************
** Description: Overloading constructor. Allows input for age
 * and base food cost. Initializes all other inputs specific to
 * turtles.
****************************************************************/
Turtle::Turtle(int a, double bfc) : Animal(a, bfc) {
    age = a;
    cost = 100.0;
    numBabies = 10;
    baseFoodCost = 0.5 * bfc;
    payoff = 5.0;
}