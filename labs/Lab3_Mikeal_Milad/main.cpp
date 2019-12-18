/****************************************************************
** Program name: War Game with Dice Design
** Author: Milad Mikeal
** Date: 10/7/18
** Description: This program simulates a game of War with dice.
 * The user selects the number of rounds, whether each player
 * will have a loaded die, and how many sides each player's die
 * will have. The program then has the user hit enter to roll
 * the die for each player, prints out the stats after each
 * round, then determines a winner once all the rounds are done.
****************************************************************/
#include <iostream>
#include "Game.hpp"
using std::cout;
using std::endl;

int main() {
    // Create game object
    Game game;
    // Start game
    game.start();
    // Declare winner
    game.declareWinner();
    return 0;
}