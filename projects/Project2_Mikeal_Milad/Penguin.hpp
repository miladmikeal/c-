/****************************************************************
** Program name: Zoo Tycoon Game
** Author: Milad Mikeal
** Date: 10/10/18
** Description: Penguin class header file
****************************************************************/
#ifndef PROJECT2_PENGUIN_HPP
#define PROJECT2_PENGUIN_HPP

#include "Animal.hpp"

class Penguin : public Animal {
public:
    Penguin();
    Penguin(int);
    Penguin(int, double);
};


#endif //PROJECT2_PENGUIN_HPP