/****************************************************************
** Program name: Fantasy Combat Game
** Author: Milad Mikeal
** Date: 10/20/18
** Description: Blue Men class; inherits from Character. Sets
 * values, implements virtual attack and defense methods.
****************************************************************/
#include "BlueMen.hpp"
#include "Character.hpp"
#include <iostream>
#include <random>
#include <cstdlib>
#include <time.h>
#include <ctime>
using std::cout;
using std::endl;

/****************************************************************
** Description: Initializes Blue Men attributes to
 * necessary values. Also seeds srand().
****************************************************************/
void BlueMen::setValues() {
    name = "Blue Men";
    att = "2d10";
    def = "3d6";
    armor = 3;
    strength = 12;
    dead = false;
    // Seed srand
    unsigned int sval;
    time_t t;
    sval = (unsigned) time(&t);
    srand(sval);
}

/****************************************************************
** Description: Calculate Blue Men attack via 2 simulated 10
 * sided die.
****************************************************************/
int BlueMen::attack() {
    // Attack based on two 10-sided die
    int damage = ((rand() % 10 + 1) + (rand() % 10 + 1));
    cout << "Blue Men attacked. " << damage << " damage points "
         << "generated." << endl;
    // Return damage
    return damage;
}

/****************************************************************
** Description: Calculate Blue Men defense via 2 simulated 6
 * sided die. Calculate damage taken.
****************************************************************/
void BlueMen::defense(int d) {
    int defense, damage;
    // Defense roll based on how many current strength points
    if (getStrength() >= 9) {
        defense = ((rand() % 6 + 1) + (rand() % 6 + 1) +
                (rand() % 6 + 1));
    } else if (getStrength() < 9 && getStrength() > 4) {
        defense = ((rand() % 6 + 1) + (rand() % 6 + 1));
    } else {
        defense = rand() % 6 + 1;
    }
    // If blue men not turned to stone by Medusa
    if (d != 1000) {
        cout << "Blue Men generated " << defense
             << " defense points." << endl
             << "Armor: " << getArmor() << endl;
        // Calculate damage
        damage = d - defense - getArmor();
        // If damage below 0
        if (damage <= 0) {
            // No damage taken
            cout << "Blue Men's defense prevails. "
                 << "0 damage taken." << endl
                 << "Blue Men's remaining strength: "
                 << getStrength() << endl;
        } else if (damage > 0) {
            // Factor in damage
            setStrength(getStrength() - damage);
            // Check if character has strength points remaining
            if (getStrength() > 0) {
                cout << "Blue Men has been damaged " << damage
                     << " points, but remains alive." << endl
                     << "Blue Men's remaining strength: "
                     << getStrength() << endl;
            // If not character dies
            } else if (getStrength() <= 0) {
                cout << "Blue Men have died!" << endl;
                setDead(true);
            }
        }
    // If blue men turned to stone by Medusa
    } else {
        // Blue men die
        cout << "Blue Men looked into Medusa's eyes and died!" << endl;
        setDead(true);
    }
}