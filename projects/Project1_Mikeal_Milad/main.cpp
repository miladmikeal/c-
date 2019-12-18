/****************************************************************
 ** Program name: Langton's Ant
 ** Author: Milad Mikeal
 ** Date: 9/21/18
 ** Description: This program simulates Lanton's Ant. It allows
 * the user to enter the size of the board, location of the ant,
 * and orientation of the ant. For more information on Langton's
 * Ant: https://en.wikipedia.org/wiki/Langton%27s_ant
 ****************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <stdlib.h>
#include "menu.hpp"
#include "Ant.hpp"
#include "toRandomize.hpp"
#include "userInputs.hpp"
#include "userInputs2.hpp"
#include "runAgain.hpp"
using std::cout;
using std::cin;
using std::endl;

int main() {
    // Prompt user with program menu
    menu();
    // Define variables
    int rows, columns, steps, startingRow, startingCol, random;
    // In case user wants to rerun program
    int run = 1;
    while (run) {
        // Call toRandomize function
        toRandomize(random);
        
        // If user chose not to randomize starting point
        if (random == 2) {
            // Call userInputs function
            userInputs(rows, columns, steps, startingRow, startingCol);
            // If user selected to randomize starting point
        } else {
            // Call userInputs2
            userInputs2(rows, columns, steps);
            // Use time as seed
            srand(time(0));
            // Get random starting row and starting column
            startingRow = (rand() % (rows + 1));
            startingCol = (rand() % (columns + 1));
        }
        
        // Create ant object
        Ant ant(rows, columns, startingRow, startingCol);
        
        // Call makeMove method until num of steps reached
        while (ant.getTurns() < steps) {
            ant.makeMove();
        }
        
        // Free dynamically allocated 2D board
        if (steps == ant.getTurns()) {
            ant.freeBoard();
        }
        
        // Call runAgain function
        runAgain(run);
        
        // Exit if user opted not to play again
        if (run == 2) {
            exit(0);
        }
    }
    return 0;
}
