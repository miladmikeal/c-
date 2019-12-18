/****************************************************************
** Program name: Zoo Tycoon Game
** Author: Milad Mikeal
** Date: 10/10/18
** Description: Gorilla class implementation file. Inherits from
 * the animal class. (EXTRA CREDIT)
****************************************************************/
#include "Gorilla.hpp"

/****************************************************************
** Description: Default constructor. Initializes all variables
 * to 0.
****************************************************************/
Gorilla::Gorilla() : Animal() {}

/****************************************************************
** Description: Overloading constructor. Allows input for age.
 * Initializes all other inputs specific to gorillas.
****************************************************************/
Gorilla::Gorilla(int a) : Animal(a) {
    age = a;
    cost = 8000.0;
    numBabies = 2;
    baseFoodCost = 100.0;
    payoff = 1800;
}

/****************************************************************
** Description: Overloading constructor. Allows input for age
 * and base food cost.Initializes all other inputs specific to
 * gorillas.
****************************************************************/
Gorilla::Gorilla(int a, double bfc) : Animal(a, bfc) {
    age = a;
    cost = 8000.0;
    numBabies = 2;
    baseFoodCost = 10 * bfc;
    payoff = 1800;
}
