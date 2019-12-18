/****************************************************************
** Program name: Zoo Tycoon Game
** Author: Milad Mikeal
** Date: 10/10/18
** Description: Turtle class header file.
****************************************************************/
#ifndef PROJECT2_TURTLE_HPP
#define PROJECT2_TURTLE_HPP

#include "Animal.hpp"

class Turtle : public Animal {
public:
    Turtle();
    Turtle(int);
    Turtle(int, double);
};


#endif //PROJECT2_TURTLE_HPP