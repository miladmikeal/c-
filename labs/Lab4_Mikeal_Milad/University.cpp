/****************************************************************
** Program name: OSU Information System
** Author: Milad Mikeal
** Date: 10/15/18
** Description: This class sets the default name of the university
 * to OSU, adds buildings & people to their respective vectors,
 * and prints building & people information.
****************************************************************/
#include <iostream>
#include "University.hpp"
using std::cout;
using std::endl;

/****************************************************************
** Description: Default constructor. Sets name to "Oregon State
 * University."
****************************************************************/
University::University() {
    name = "Oregon State University";
}

/****************************************************************
** Description: Adds a building to the building vector.
****************************************************************/
void University::addBuilding(Building b) {
    buildings.push_back(b);
}

/****************************************************************
** Description: Adds a person to the person vector.
****************************************************************/
void University::addPerson(Person *p) {
    people.push_back(p);
}

/****************************************************************
** Description: Prints all buildings and their information.
****************************************************************/
void University::printBuidlings() {
    cout << '\n';
    // Loop through buildings vector
    for (int i = 0; i < buildings.size(); i++) {
        // Print info
        cout << "Name: " <<  buildings[i].getName() << endl
             << "Size: " << buildings[i].getSize() << endl
             << "Address: " << buildings[i].getAddress() << endl;
        cout << '\n';
    }
}

/****************************************************************
** Description: Prints all people and their information.
****************************************************************/
void University::printPeople() {
    cout << '\n';
    // Loop through people vector
    for (int i = 0; i < people.size(); i++) {
        // Print info
        people.at(i)->printInfo();
    }
}