/****************************************************************
** Program name: OSU Information System
** Author: Milad Mikeal
** Date: 10/15/18
** Description: This class sets member variables and has
 * appropriate methods to retrieve member variables. Base class
 * of Students and Instructors.
****************************************************************/
#include "Person.hpp"

/****************************************************************
** Description: Default constructor.
****************************************************************/
Person::Person() {
    name = "";
    age = 0;
}

/****************************************************************
** Description: Overloading constructor. Sets member variables
 * to input values.
****************************************************************/
Person::Person(std::string n, int a) {
    name = n;
    age = a;
}

/****************************************************************
** Description: Returns person's name.
****************************************************************/
std::string Person::getName() {
    return name;
}