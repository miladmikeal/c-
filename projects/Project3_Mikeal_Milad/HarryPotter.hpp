/****************************************************************
** Program name: Fantasy Combat Game
** Author: Milad Mikeal
** Date: 10/20/18
** Description: Harry Potter class header file.
****************************************************************/
#ifndef PROJECT3_HARRYPOTTER_HPP
#define PROJECT3_HARRYPOTTER_HPP


#include "Character.hpp"

class HarryPotter : public Character {
private:
    int hogwarts;
public:
    void setValues();
    int attack();
    void defense(int);
};


#endif //PROJECT3_HARRYPOTTER_HPP
