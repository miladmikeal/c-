/****************************************************************
** Program name: Fantasy Combat Game
** Author: Milad Mikeal
** Date: 10/20/18
** Description: Barbarian class; inherits from Character. Sets
 * values, implements virtual attack and defense methods.
****************************************************************/
#include "Barbarian.hpp"
#include "Character.hpp"
#include <iostream>
#include <random>
#include <cstdlib>
#include <time.h>
#include <ctime>
using std::cout;
using std::endl;

/****************************************************************
** Description: Initializes Barbarian attributes to
 * necessary values. Also seeds srand().
****************************************************************/
void Barbarian::setValues() {
    name = "Barbarian";
    att = "2d6";
    def = "2d6";
    armor = 0;
    strength = 12;
    dead = false;
    // Seed srand
    unsigned int sval;
    time_t t;
    sval = (unsigned) time(&t);
    srand(sval);
}

/****************************************************************
** Description: Calculate Barbarian attack via 2 simulated 6
 * sided die.
****************************************************************/
int Barbarian::attack() {
    // Attack based on two 6-sided die
    int damage = ((rand() % 6 + 1) + (rand() % 6 + 1));
    cout << "Barbarian attacked. " << damage << " damage points "
         << "generated." << endl;
    // Return damage
    return damage;
}

/****************************************************************
** Description: Calculate Barbarian defense via 2 simulated 6
 * sided die. Calculate damage taken.
****************************************************************/
void Barbarian::defense(int d) {
    // Defense roll w/ 2 6-sided dice
    int defense = ((rand() % 6 + 1) + (rand() % 6 + 1));
    int damage;
    // If barbarian not turned to stone by Medusa
    if (d != 1000) {
        cout << "Barbarian generated " << defense
             << " defense points." << endl
             << "Armor: " << getArmor() << endl;
        // Calculate damage
        damage = d - defense;
        // If damage below 0
        if (damage <= 0) {
            // No damage taken
            cout << "Barbarian's defense prevails. "
                 << "0 damage taken." << endl
                 << "Barbarian's remaining strength: "
                 << getStrength() << endl;
        } else if (damage > 0) {
            // Factor in damage
            setStrength(getStrength() - damage);
            // Check if character has strength points remaining
            if (getStrength() > 0) {
                cout << "Barbarian has been damaged " << damage
                     << " points, but remains alive." << endl
                     << "Barbarian's remaining strength: "
                     << getStrength() << endl;
            // If not, character dies
            } else if (getStrength() <= 0) {
                cout << "Barbarian has died!" << endl;
                setDead(true);
            }
        }
    // If barbarian turned to stone by Medusa
    } else {
        // barbian dies
        cout << "Barbarian looked into Medusa's eyes and died!" << endl;
        setDead(true);
    }
}
