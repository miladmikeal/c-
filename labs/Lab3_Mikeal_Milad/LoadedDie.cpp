/****************************************************************
** Program name: War Game with Dice Design
** Author: Milad Mikeal
** Date: 10/7/18
** Description: Loaded die class implemenation file. This class
 * inherits from the Die class, however, its roll method
 * overrides that of the Die class so that it simulates a loaded
 * die by only rolling the top half numbers.
****************************************************************/
#include "LoadedDie.hpp"
#include <cstdlib>
#include <ctime>
#include <time.h>

/****************************************************************
** Description: Inherited default constructor - Initializes the
 * number of sides to 6.
****************************************************************/
LoadedDie::LoadedDie() : Die() {
    N = 6;
}

/****************************************************************
** Description: Inherited constructor - Initializes the number of
 * sides of the loaded die.
****************************************************************/
LoadedDie::LoadedDie(int num) : Die(num) {
    N = num;
}

/****************************************************************
** Description: This method simulates the roll of a loaded die.
 * The loaded die can only roll the top half numbers.
****************************************************************/
int LoadedDie::roll() {
    // Seed time for random
    srand(time(0));
    // Return loaded die value
    return (rand() % (getN() - (getN() / 2 + 1) + 1)) + (getN() / 2 + 1);
}
