/****************************************************************
 ** Program name: Langton's Ant
 ** Author: Milad Mikeal
 ** Date: 9/21/18
 ** Description:
 ****************************************************************/
#include <iostream>
#include <string>
#include "Ant.hpp"
using std::cout;
using std::endl;

/****************************************************************
 ** Description: Constructor - Dynamically allocates 2D board
 * array, initializes starting point and orientation, and prints
 * the board.
 ****************************************************************/
Ant::Ant(int r, int c, int cr, int cc) {
    rows = r;
    columns = c;
    currentRow = cr - 1;
    currentCol = cc - 1;
    turns = 0;
    orientation = "North";
    // Dynamically allocate 2D boards array
    board = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        board[i] = new int[columns];
    }
    // Fill game board with necessary characters
    // 1 = white, 2 = black, 3 = white + ant, 4 = black + ant
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            board[i][j] = 1;
        }
    }
    board[currentRow][currentCol] = 4;
    // Print board
    printBoard();
}

/****************************************************************
 ** Description: Returns the number of turns/steps the ant has
 * made so far.
 ****************************************************************/
int Ant::getTurns() {
    return turns;
}

/****************************************************************
 ** Description: This function determines the next direction the
 * ant should go, the next orientation, and the color of each
 * space after each move.
 ****************************************************************/
void Ant::makeMove() {
    // If current orientation is North
    if (orientation == "North") {
        // If current space is white with ant
        if (board[currentRow][currentCol] == 3) {
            // Change space to white
            board[currentRow][currentCol] = 1;
            // If current space is black with ant
        } else if (board[currentRow][currentCol] == 4) {
            // Change space to black
            board[currentRow][currentCol] = 2;
        }
        // Check for top-edge case
        if (currentRow == 0) {
            currentRow = rows - 1;
        } else {
            // Otherwise move up one row
            currentRow--;
        }
        // Increment turns
        turns++;
        // If new current space is white
        if (board[currentRow][currentCol] == 1) {
            // Change space to black with ant
            board[currentRow][currentCol] = 4;
            // Change orientation to East
            orientation = "East";
            // If new current space is black
        } else if (board[currentRow][currentCol] == 2) {
            // Change space to white with ant
            board[currentRow][currentCol] = 3;
            // Change orientation to West
            orientation = "West";
        }
        // If current orientation is East
    } else if (orientation == "East") {
        // If current space is white with ant
        if (board[currentRow][currentCol] == 3) {
            // Change space to white
            board[currentRow][currentCol] = 1;
            // If current space is black with ant
        } else if (board[currentRow][currentCol] == 4) {
            // Change space to black
            board[currentRow][currentCol] = 2;
        }
        // Check for right-edge case
        if (currentCol == columns - 1) {
            currentCol = 0;
        } else {
            // Otherwise move right one column
            currentCol++;
        }
        // Increment turns
        turns++;
        // If new current space is white
        if (board[currentRow][currentCol] == 1) {
            // Change space to black with ant
            board[currentRow][currentCol] = 4;
            // Change orientation to South
            orientation = "South";
            // If new current space is black
        } else if (board[currentRow][currentCol] == 2) {
            // Change space to white with ant
            board[currentRow][currentCol] = 3;
            // Change orientation to North
            orientation = "North";
        }
        // If current orientation is South
    } else if (orientation == "South") {
        // If current space is white with ant
        if (board[currentRow][currentCol] == 3) {
            // Change space to white
            board[currentRow][currentCol] = 1;
            // If current space is black with ant
        } else if (board[currentRow][currentCol] == 4) {
            // Change space to black
            board[currentRow][currentCol] = 2;
        }
        // Check for bottom-edge case
        if (currentRow == rows - 1) {
            currentRow = 0;
        } else {
            // Otherwise move down one row
            currentRow++;
        }
        // Increment turns
        turns++;
        // If new current space is white
        if (board[currentRow][currentCol] == 1) {
            // Change space to black with ant
            board[currentRow][currentCol] = 4;
            // Change orientation to West
            orientation = "West";
            // If new current space is black
        } else if (board[currentRow][currentCol] == 2) {
            // Change space to white with ant
            board[currentRow][currentCol] = 3;
            // Change orientation to East
            orientation = "East";
        }
        // If current orientation is West
    } else if (orientation == "West") {
        // If current space is white with ant
        if (board[currentRow][currentCol] == 3) {
            // Change space to white
            board[currentRow][currentCol] = 1;
            // If current space is black with ant
        } else if (board[currentRow][currentCol] == 4) {
            // Change space to black
            board[currentRow][currentCol] = 2;
        }
        // Check for left-edge case
        if (currentCol == 0) {
            currentCol = columns - 1;
        } else {
            // Otherwise move left one column
            currentCol--;
        }
        // Increment turns
        turns++;
        // If new current space is white
        if (board[currentRow][currentCol] == 1) {
            // Change space to black with ant
            board[currentRow][currentCol] = 4;
            // Change orientation to North
            orientation = "North";
            // If new current space is black
        } else if (board[currentRow][currentCol] == 2) {
            // Change space to white with ant
            board[currentRow][currentCol] = 3;
            // Change orientation to South
            orientation = "South";
        }
    }
    // Print board
    printBoard();
}

/****************************************************************
 ** Description: Prints the board at its current state.
 ****************************************************************/
void Ant::printBoard() {
    cout << ' ';
    // Top wall
    for (int x = 0; x < columns; x++) {
        cout << '-';
    }
    cout << endl;
    for (int i = 0; i < rows; ++i) {
        // Left wall
        cout << '|';
        for (int j = 0; j < columns; ++j) {
            // 1 = white, print space
            if (board[i][j] == 1 && board[i][j] != 3
                && board[i][j] != 4) {
                cout << ' ';
                // 2 = black, print #
            } else if (board[i][j] == 2 && board[i][j] != 3
                       && board[i][j] != 4) {
                cout << '#';
                // 3 & 4 = ant, print *
            } else  if (board[i][j] == 3 || board[i][j] == 4){
                cout << '*';
            }
        }
        // Right wall
        cout << '|' << endl;
    }
    cout << ' ';
    // Bottom wall
    for (int y = 0; y < columns; y++) {
        cout << '-';
    }
    cout << endl;
    // Ant's current orientation
    cout << "Orientation: " << orientation << endl;
}

/****************************************************************
 ** Description: Free memory of dynamically allocated 2D boards
 * array.
 ****************************************************************/
void Ant::freeBoard() {
    for (int i = 0; i < rows; ++i) {
        delete [] board[i];
    }
    delete [] board;
}
