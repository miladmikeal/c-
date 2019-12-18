/****************************************************************
** Program name: Doubly-linked List
** Author: Milad Mikeal
** Date: 10/27/18
** Description: Linked list class header file.
****************************************************************/
#ifndef LAB6_LINKEDLIST_HPP
#define LAB6_LINKEDLIST_HPP

#include "Node.hpp"

class LinkedList {
private:
    Node *head, *tail, *ptr;
    void traverse();
public:
    LinkedList();
    void addToHead(int);
    void addToTail(int);
    int deleteFirst();
    int deleteLast();
    void traverseReverse();
    void printHead(); // Extra credit
    void printTail(); // Extra Credit
    ~LinkedList();
};


#endif //LAB6_LINKEDLIST_HPP
