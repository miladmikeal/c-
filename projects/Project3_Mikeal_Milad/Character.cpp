/****************************************************************
** Program name: Fantasy Combat Game
** Author: Milad Mikeal
** Date: 10/20/18
** Description: Base character class. Declares getters and
 * setters used by all characters.
****************************************************************/
#include "Character.hpp"

/****************************************************************
** Description: Default constructor.
****************************************************************/
Character::Character() {
    att = def = "";
    armor = strength = 0;
    dead = false;
}

/****************************************************************
** Description: Return name.
****************************************************************/
std::string Character::getName() {
    return name;
}

/****************************************************************
** Description: Return armor.
****************************************************************/
int Character::getArmor() {
    return armor;
}

/****************************************************************
** Description: Set strength.
****************************************************************/
void Character::setStrength(int s) {
    strength = s;
}

/****************************************************************
** Description: Return strength.
****************************************************************/
int Character::getStrength() {
    return strength;
}

/****************************************************************
** Description: Set character death to true or false.
****************************************************************/
void Character::setDead(bool d) {
    dead = d;
}

/****************************************************************
** Description: Boolean to check if character is dead.
****************************************************************/
bool Character::isDead() {
    return dead;
}