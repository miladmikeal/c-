/****************************************************************
** Program name: War Game with Dice Design
** Author: Milad Mikeal
** Date: 10/7/18
** Description: Game class header implementation file.
****************************************************************/
#ifndef LAB3_GAME_HPP
#define LAB3_GAME_HPP

#include "Menu.hpp"
#include "Die.hpp"
#include "LoadedDie.hpp"

class Game {
private:
    Menu main;
    int rounds, p1loaded, p2loaded, p1sides, p2sides;
    int p1points, p2points, p1roll, p2roll, roundsPlayed;
    Die die1;
    Die die2;
    LoadedDie loadedDie1;
    LoadedDie loadedDie2;
    void printStats();
public:
    Game();
    void start();
    void declareWinner();
};


#endif //LAB3_GAME_HPP
