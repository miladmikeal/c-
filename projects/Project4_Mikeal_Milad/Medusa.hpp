/****************************************************************
** Program name: Fantasy Combat Tournament
** Author: Milad Mikeal
** Date: 11/7/18
** Description: Medusa class header file.
****************************************************************/
#ifndef PROJECT4_MEDUSA_HPP
#define PROJECT4_MEDUSA_HPP

#include "Character.hpp"

class Medusa : public Character {
public:
    void setValues();
    int attack();
    void defense(int);
};


#endif //PROJECT4_MEDUSA_HPP