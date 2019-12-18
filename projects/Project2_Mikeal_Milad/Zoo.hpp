/****************************************************************
** Program name: Zoo Tycoon Game
** Author: Milad Mikeal
** Date: 10/10/18
** Description: Zoo class header file.
****************************************************************/
#ifndef PROJECT2_ZOO_HPP
#define PROJECT2_ZOO_HPP

#include "Tiger.hpp"
#include "Penguin.hpp"
#include "Turtle.hpp"
#include "Gorilla.hpp"

class Zoo {
private:
    Tiger *tigers;
    Penguin *penguins;
    Turtle *turtles;
    Gorilla *gorillas;
    double bank, profit;
    int tigersCap, penguinsCap, turtlesCap, gorillasCap;
    int numTigers, numPenguins, numTurtles, numGorillas;
public:
    Zoo();
    ~Zoo();
    void greeting();
    void createTiger(Tiger, bool);
    void createPenguin(Penguin, bool);
    void createTurtle(Turtle, bool);
    void createGorilla(Gorilla, bool);
    bool createBabyTiger();
    bool createBabyPenguin();
    bool createBabyTurtle();
    bool createBabyGorilla();
    bool deleteTiger();
    bool deletePenguin();
    bool deleteTurtle();
    bool deleteGorilla();
    void randomEvent();
    void calcProfit();
    void incrementAge();
    double getBank();
    double getProfit();
};


#endif //PROJECT2_ZOO_HPP