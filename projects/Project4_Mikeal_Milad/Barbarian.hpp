/****************************************************************
** Program name: Fantasy Combat Tournament
** Author: Milad Mikeal
** Date: 11/7/18
** Description: Barbarian class header file.
****************************************************************/
#ifndef PROJECT4_BARBARIAN_HPP
#define PROJECT4_BARBARIAN_HPP

#include "Character.hpp"

class Barbarian : public Character {
public:
    void setValues();
    int attack();
    void defense(int);
};


#endif //PROJECT4_BARBARIAN_HPP