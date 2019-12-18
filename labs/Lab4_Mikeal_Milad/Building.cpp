/****************************************************************
** Program name: OSU Information System
** Author: Milad Mikeal
** Date: 10/15/18
** Description: This class sets member variables and has
 * appropriate methods to retrieve member variables.
****************************************************************/
#include "Building.hpp"

/****************************************************************
** Description: Default constructor.
****************************************************************/
Building::Building() {
    name = "";
    size = 0;
    address = "";
}

/****************************************************************
** Description: Overloading constructor. Sets member variables
 * to input values.
****************************************************************/
Building::Building(std::string n, int s, std::string a) {
    name = n;
    size = s;
    address = a;
}

/****************************************************************
** Description: Returns the building's name.
****************************************************************/
std::string Building::getName() {
    return name;
}

/****************************************************************
** Description: Returns the building's size.
****************************************************************/
int Building::getSize() {
    return size;
}

/****************************************************************
** Description: Returns the building's address.
****************************************************************/
std::string Building::getAddress() {
    return address;
}