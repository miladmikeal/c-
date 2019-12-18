/****************************************************************
** Program name: Doubly-linked List
** Author: Milad Mikeal
** Date: 10/27/18
** Description: Node class implementation file. Allows user to
 * set and get private member variables.
****************************************************************/
#include "Node.hpp"

/****************************************************************
** Description: Constructor. Initializes val to 0, and next/prev
 * to null.
****************************************************************/
Node::Node() {
    val = 0;
    next = prev = nullptr;
}

/****************************************************************
** Description: Sets val.
****************************************************************/
void Node::setVal(int v) {
    val = v;
}

/****************************************************************
** Description: Returns val.
****************************************************************/
int Node::getVal() {
    return val;
}

/****************************************************************
** Description: Sets next pointer.
****************************************************************/
void Node::setNext(Node *n) {
    next = n;
}

/****************************************************************
** Description: Returns next pointer.
****************************************************************/
Node* Node::getNext() {
    return next;
}

/****************************************************************
** Description: Sets prev pointer.
****************************************************************/
void Node::setPrev(Node *p) {
    prev = p;
}

/****************************************************************
** Description: Returns prev pointer.
****************************************************************/
Node* Node::getPrev() {
    return prev;
}