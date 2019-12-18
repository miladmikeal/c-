/****************************************************************
** Program name: Fantasy Combat Game
** Author: Milad Mikeal
** Date: 10/20/18
** Description: Vampire class header file.
****************************************************************/
#ifndef PROJECT3_VAMPIRE_HPP
#define PROJECT3_VAMPIRE_HPP


#include "Character.hpp"

class Vampire : public Character {
public:
    void setValues();
    int attack();
    void defense(int);
};


#endif //PROJECT3_VAMPIRE_HPP
