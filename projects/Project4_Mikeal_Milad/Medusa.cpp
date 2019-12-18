/****************************************************************
** Program name: Fantasy Combat Tournament
** Author: Milad Mikeal
** Date: 11/7/18
** Description: Medusa class; inherits from Character. Sets
 * values, implements virtual attack and defense methods.
****************************************************************/
#include "Medusa.hpp"
#include "Character.hpp"
#include <iostream>
#include <random>
#include <cstdlib>
#include <time.h>
#include <ctime>
using std::cout;
using std::endl;

/****************************************************************
** Description: Initializes Medusa attributes to
 * necessary values.
****************************************************************/
void Medusa::setValues() {
    name = "Medusa";
    type = "Medusa";
    att = "2d6*Glare";
    def = "1d6";
    armor = 3;
    strength = 8;
    typeNum = 4;
    dead = false;
}

/****************************************************************
** Description: Calculate Medusa attack via 2 simulated 6 sided
 * die.
****************************************************************/
int Medusa::attack() {
    // Attack based on two 6-sided die
    int damage = ((rand() % 6 + 1) + (rand() % 6 + 1));
    // If roll is 12
    if (damage == 12) {
        // Turn character to stone, automatic death
        cout << "The opponent has looked into Medusa's eyes "
             << "and turned into stone!" << endl;
        damage = 1000;
        // Otherwise
    } else {
        // Normal damage
        cout << getName() << " the " << getType()
             << " attacked. " << damage << " damage points "
             << "generated." << endl;
    }
    // Return damage
    return damage;
}

/****************************************************************
** Description: Calculate Medusa defense via simulated 6 sided
 * die. Calculate damage taken.
****************************************************************/
void Medusa::defense(int d) {
    // Defense roll based on one 6-sided die
    int defense = rand() % 6 + 1;
    int damage;
    // If Medusa not turned to stone by another Medusa
    if (d != 1000) {
        cout << getName() << " the " << getType()
             << " generated " << defense
             << " defense points." << endl
             << "Armor: " << getArmor() << endl;
        // Calculate damage
        damage = d - defense - getArmor();
        // If damage below 0
        if (damage <= 0) {
            // No damage taken
            cout << getName() << "'s defense prevails. "
                 << "0 damage taken." << endl
                 << getName() << "'s remaining strength: "
                 << getStrength() << endl;
        } else if (damage > 0) {
            // Factor in damage
            setStrength(getStrength() - damage);
            // Check if character has strength points remaining
            if (getStrength() > 0) {
                cout << getName() << " has been damaged " << damage
                     << " points, but remains alive." << endl
                     << getName() << "'s remaining strength: "
                     << getStrength() << endl;
                // If not character dies
            } else if (getStrength() <= 0) {
                cout << getName() << " the " << getType()
                     << " has died!" << endl;
                setDead(true);
            }
        }
        // If Medusa turned to stone by other Medusa
    } else {
        // This Medusa dies
        cout << getName() << " the " << getType()
             << " looked into other Medusa's eyes and died!" << endl;
        setDead(true);
    }
}

