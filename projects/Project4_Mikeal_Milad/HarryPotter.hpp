/****************************************************************
** Program name: Fantasy Combat Tournament
** Author: Milad Mikeal
** Date: 11/7/18
** Description: Harry Potter class header file.
****************************************************************/
#ifndef PROJECT4_HARRYPOTTER_HPP
#define PROJECT4_HARRYPOTTER_HPP

#include "Character.hpp"

class HarryPotter : public Character {
private:
    int hogwarts;
public:
    void setValues();
    int attack();
    void defense(int);
};


#endif //PROJECT4_HARRYPOTTER_HPP