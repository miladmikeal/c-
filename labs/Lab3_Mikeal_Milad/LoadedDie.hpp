/****************************************************************
** Program name: War Game with Dice Design
** Author: Milad Mikeal
** Date: 10/7/18
** Description: LoadedDie class header implementation file.
****************************************************************/
#ifndef LAB3_LOADEDDIE_HPP
#define LAB3_LOADEDDIE_HPP

#include "Die.hpp"


class LoadedDie: public Die {
private:
    int N;
public:
    LoadedDie();
    LoadedDie(int);
    int roll();
};


#endif //LAB3_LOADEDDIE_HPP
