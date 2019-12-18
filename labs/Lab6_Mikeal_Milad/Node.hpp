/****************************************************************
** Program name: Doubly-linked List
** Author: Milad Mikeal
** Date: 10/27/18
** Description: Node class header file.
****************************************************************/
#ifndef LAB6_NODE_HPP
#define LAB6_NODE_HPP


class Node {
private:
    int val;
    Node *next, *prev;
public:
    Node();
    void setVal(int);
    int getVal();
    void setNext(Node *);
    Node* getNext();
    void setPrev(Node *);
    Node* getPrev();
};


#endif //LAB6_NODE_HPP
