/****************************************************************
 ** Program name: Langton's Ant
 ** Author: Milad Mikeal
 ** Date: 9/21/18
 ** Description: Ant class header file.
 ****************************************************************/
#include <string>

#ifndef PROJECT1_ANT_HPP
#define PROJECT1_ANT_HPP


class Ant {
private:
    int rows, columns, currentRow, currentCol, turns;
    int **board;
    std::string orientation;
    void printBoard();
public:
    Ant(int, int, int, int);
    int getTurns();
    void makeMove();
    void freeBoard();
};


#endif //PROJECT1_ANT_HPP
