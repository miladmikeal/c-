/****************************************************************
** Program name: Zoo Tycoon Game
** Author: Milad Mikeal
** Date: 10/10/18
** Description: Animal class implementation file. It has three
 * overloading constructors to initialize member variables, as
 * well as getter/setter methods for each variable.
****************************************************************/
#include <sys/mount.h>
#include "Animal.hpp"

/****************************************************************
** Description: Default constructor. Initializes all variables
 * to 0.
****************************************************************/
Animal::Animal() {
    age = 0;
    cost = 0.0;
    numBabies = 0;
    baseFoodCost = 0.0;
    payoff = 0.0;
}

/****************************************************************
** Description: Overloading constructor. Allows input for age.
****************************************************************/
Animal::Animal(int a) {
    age = a;
    cost = 0.0;
    numBabies = 0;
    baseFoodCost = 0.0;
    payoff = 0.0;
}

/****************************************************************
** Description: Overloading constructor. Allows input for age
 * and base food cost.
****************************************************************/
Animal::Animal(int a, double bfc) {
    age = a;
    cost = 0.0;
    numBabies = 0;
    baseFoodCost = bfc;
    payoff = 0.0;
}

/****************************************************************
** Description: Sets age.
****************************************************************/
void Animal::setAge(int a) {
    age = a;
}

/****************************************************************
** Description: Returns age.
****************************************************************/
int Animal::getAge() {
    return age;
}

/****************************************************************
** Description: Returns cost.
****************************************************************/
double Animal::getCost() {
    return cost;
}

/****************************************************************
** Description: Returns base food cost.
****************************************************************/
double Animal::getBaseFoodCost() {
    return baseFoodCost;
}

/****************************************************************
** Description: Sets payoff.
****************************************************************/
void Animal::setPayoff(double p) {
    payoff = p;
}

/****************************************************************
** Description: Returns payoff.
****************************************************************/
double Animal::getPayoff() {
    return payoff;
}