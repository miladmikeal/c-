/****************************************************************
** Program name: Fantasy Combat Game
** Author: Milad Mikeal
** Date: 10/20/18
** Description: Blue Men class header file.
****************************************************************/
#ifndef PROJECT3_BLUEMEN_HPP
#define PROJECT3_BLUEMEN_HPP


#include "Character.hpp"

class BlueMen : public Character {
public:
    void setValues();
    int attack();
    void defense(int);
};


#endif //PROJECT3_BLUEMEN_HPP
