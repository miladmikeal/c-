/****************************************************************
** Program name: Fantasy Combat Tournament
** Author: Milad Mikeal
** Date: 11/7/18
** Description: Vampire class header file.
****************************************************************/
#ifndef PROJECT4_VAMPIRE_HPP
#define PROJECT4_VAMPIRE_HPP

#include "Character.hpp"

class Vampire : public Character {
public:
    void setValues();
    int attack();
    void defense(int);
};


#endif //PROJECT4_VAMPIRE_HPP