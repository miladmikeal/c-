/****************************************************************
** Program name: Fantasy Combat Tournament
** Author: Milad Mikeal
** Date: 11/7/18
** Description: Harry Potter class; inherits from Character. Sets
 * values, implements virtual attack and defense methods.
****************************************************************/
#include "HarryPotter.hpp"
#include "Character.hpp"
#include <iostream>
#include <random>
#include <cstdlib>
#include <time.h>
#include <ctime>
using std::cout;
using std::endl;

/****************************************************************
** Description: Initializes Harry Potter attributes
 * to necessary values.
****************************************************************/
void HarryPotter::setValues() {
    name = "Harry Potter";
    type = "Harry Potter";
    att = "2d6";
    def = "2d6";
    armor = 0;
    strength = 10;
    typeNum = 5;
    hogwarts = 1;
    dead = false;
}

/****************************************************************
** Description: Calculate Harry Potter attack via 2 simulated 6
 * sided die.
****************************************************************/
int HarryPotter::attack() {
    // Attack based on two 6-sided die
    int damage = ((rand() % 6 + 1) + (rand() % 6 + 1));
    cout << getName() << " the " << getType()
         << " attacked. " << damage << " damage points "
         << "generated." << endl;
    // Return damage
    return damage;
}

/****************************************************************
** Description: Calculate Harry Potter defense via 2 simulated 6
 * sided die. Calculate damage taken. Factor in Harry's special
 * ability - Hogwarts.
****************************************************************/
void HarryPotter::defense(int d) {
    // Defense roll based on two 6-sided die
    int defense = ((rand() % 6 + 1) + (rand() % 6 + 1));
    int damage;
    // If Harry turned to stone by Medusa
    if (d != 1000) {
        cout << getName() << " the " << getType()
             << " generated " << defense
             << " defense points." << endl
             << "Armor: " << getArmor() << endl;
        // Calculate damage
        damage = d - defense;
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
                cout << getName() << " the " << getType()
                     << " has been damaged " << damage
                     << " points, but remains alive." << endl
                     << getName() << "'s remaining strength: "
                     << getStrength() << endl;
                // If not strength points remaining, but still have special
            } else if (getStrength() <= 0 && hogwarts == 1) {
                // Die
                cout << getName() << " the " << getType()
                     << " has died!" << endl;
                // Then factor in special ability & come back to life
                cout << getName() << " uses his Hogwarts special ability." << endl
                     << "He now has 20 strength points." << endl;
                // Set strength to 20
                setStrength(20);
                // No more special ability
                hogwarts = 0;
                // If not strength points remaining & no special
            } else if (getStrength() <= 0 && hogwarts == 0) {
                // Harry dies
                cout << getName() << " the " << getType()
                     << " has died!" << endl;
                setDead(true);
            }
        }
        // If Harry turned to stone by Medusa
    } else {
        // Check if still have special
        if (hogwarts == 1) {
            // Die
            cout << getName() << " the " << getType()
                 << " looked into Medusa's eyes and died!" << endl;
            // Then factor in special ability & come back to lfie
            cout << getName() << " uses his Hogwarts special ability." << endl
                 << "He now has 20 strength points." << endl;

            // Strength to 20
            setStrength(20);
            // No more special ability
            hogwarts = 0;
            // If no special
        } else {
            // Harry dies
            cout << getName() << " the " << getType()
                 << " looked into Medusa's eyes and died!" << endl;
            setStrength(0);
            setDead(true);
        }
    }
}