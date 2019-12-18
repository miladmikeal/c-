/****************************************************************
** Program name: Fantasy Combat Tournament
** Author: Milad Mikeal
** Date: 11/7/18
** Description: Blue Men class header file.
****************************************************************/
#ifndef PROJECT4_BLUEMEN_HPP
#define PROJECT4_BLUEMEN_HPP

#include "Character.hpp"

class BlueMen : public Character {
public:
    void setValues();
    int attack();
    void defense(int);
};


#endif //PROJECT4_BLUEMEN_HPP