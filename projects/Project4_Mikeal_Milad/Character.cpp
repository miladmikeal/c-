/****************************************************************
** Program name: Fantasy Combat Tournament
** Author: Milad Mikeal
** Date: 11/7/18
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
** Description: Set name.
****************************************************************/
void Character::setName(std::string n) {
    name = n;
}

/****************************************************************
** Description: Return name.
****************************************************************/
std::string Character::getName() {
    return name;
}

/****************************************************************
** Description: Return type.
****************************************************************/
std::string Character::getType() {
    return type;
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
** Description: Set next.
****************************************************************/
void Character::setNext(Character *n) {
    next = n;
}

/****************************************************************
** Description: Return next.
****************************************************************/
Character* Character::getNext() {
    return next;
}

/****************************************************************
** Description: Set prev.
****************************************************************/
void Character::setPrev(Character *p) {
    prev = p;
}

/****************************************************************
** Description: Return prev.
****************************************************************/
Character* Character::getPrev() {
    return prev;
}

/****************************************************************
** Description: Set typeNum.
****************************************************************/
void Character::setTypeNum(int tn) {
    typeNum = tn;
}

/****************************************************************
** Description: Return typeNum.
****************************************************************/
int Character::getTypeNum() {
    return typeNum;
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