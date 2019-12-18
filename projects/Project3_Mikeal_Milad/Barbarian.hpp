/****************************************************************
** Program name: Fantasy Combat Game
** Author: Milad Mikeal
** Date: 10/20/18
** Description: Barbarian class header file.
****************************************************************/
#ifndef PROJECT3_BARBARIAN_HPP
#define PROJECT3_BARBARIAN_HPP


#include "Character.hpp"

class Barbarian : public Character {
public:
    void setValues();
    int attack();
    void defense(int);
};


#endif //PROJECT3_BARBARIAN_HPP
