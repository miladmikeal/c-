/****************************************************************
** Program name: Fantasy Combat Game
** Author: Milad Mikeal
** Date: 10/20/18
** Description: Vampire class; inherits from Character. Sets
 * values, implements virtual attack and defense methods.
****************************************************************/
#include "Vampire.hpp"
#include "Character.hpp"
#include <iostream>
#include <random>
#include <cstdlib>
#include <time.h>
#include <ctime>
using std::cout;
using std::endl;

/****************************************************************
** Description: Initializes Vampire attributes to
 * necessary values. Also seeds srand().
****************************************************************/
void Vampire::setValues() {
    name = "Vampire";
    att = "1d12";
    def = "1d6*charm";
    armor = 1;
    strength = 18;
    dead = false;
    // Seed srand
    unsigned int sval;
    time_t t;
    sval = (unsigned) time(&t);
    srand(sval);
}

/****************************************************************
** Description: Calculate vampire attack via simulated 12 sided
 * die roll.
****************************************************************/
int Vampire::attack() {
    // Atack based on one 12-sided die
    int damage = rand() % 12 + 1;
    cout << "Vampire attacked. " << damage << " damage points "
         << "generated." << endl;
    // Return damage
    return damage;
}

/****************************************************************
** Description: Calculate vampire defense via simulated 6 sided
 * die roll. Calculate damage taken.
****************************************************************/
void Vampire::defense(int d) {
    // Vampire special ability
    int charm = rand() % 2 + 1;
    // Defense roll w/ one 6-sided die
    int defense = rand() % 6 + 1;
    int damage;
    // If vampire charms opponent
    if (charm == 1) {
        // No damage taken
        cout << "Vampire charmed the opponent." << endl
             << "Remaining strength: " << getStrength();
    } else {
        // If vampire not turned to stone by Medusa
        if (d != 1000) {
            cout << "Vampire generated " << defense
                 << " defense points." << endl
                 << "Armor: " << getArmor() << endl;
            // Calculate damage
            damage = d - defense - getArmor();
            // If damage below 0
            if (damage <= 0) {
                // Defense prevails
                cout << "Vampire's defense prevails. "
                     << "0 damage taken."  << endl
                     << "Vampire's remaining strength: "
                     << getStrength() << endl;
            } else if (damage > 0) {
                // Factor in damage
                setStrength(getStrength() - damage);
                // Check if character still has strength points
                if (getStrength() > 0) {
                    cout << "Vampire has been damaged " << damage
                         << " points, but remains alive." << endl
                         << "Vampire's remaining strength: "
                         << getStrength() << endl;
                // If not, character dies
                } else if (getStrength() <= 0) {
                    cout << "Vampire has died!" << endl;
                    setDead(true);
                }
            }
        // If vampire turned to stone by Medusa
        } else {
            // Vampire dies
            cout << "Vampire looked into Medusa's eyes and died!" << endl;
            setDead(true);
        }
    }
}