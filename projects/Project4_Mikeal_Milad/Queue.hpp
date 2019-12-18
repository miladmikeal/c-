/****************************************************************
** Program name: Fantasy Combat Tournament
** Author: Milad Mikeal
** Date: 11/7/18
** Description: Queue class header file.
****************************************************************/
#ifndef PROJECT4_QUEUE_HPP
#define PROJECT4_QUEUE_HPP

#include "Character.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"

class Queue {
private:
    Character *character;
    Character *head;
public:
    Queue();
    bool isEmpty();
    void addBack(int val);
    Character* getFront();
    Character* getLast();
    void removeFront();
    void printQueue();
    ~Queue();
};


#endif //PROJECT4_QUEUE_HPP