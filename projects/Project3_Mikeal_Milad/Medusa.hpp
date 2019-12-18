/****************************************************************
** Program name: Fantasy Combat Game
** Author: Milad Mikeal
** Date: 10/20/18
** Description: Medusa class header file.
****************************************************************/
#ifndef PROJECT3_MEDUSA_HPP
#define PROJECT3_MEDUSA_HPP


#include "Character.hpp"

class Medusa : public Character {
public:
    void setValues();
    int attack();
    void defense(int);
};


#endif //PROJECT3_MEDUSA_HPP
