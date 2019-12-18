/****************************************************************
** Program name: Circular Linked List
** Author: Milad Mikeal
** Date: 11/3/18
** Description: Queue class header file.
****************************************************************/
#ifndef LAB7_QUEUE_HPP
#define LAB7_QUEUE_HPP


class Queue {
private:
    struct QueueNode {
        int val;
        QueueNode *next, *prev;
    };
    QueueNode *head;
public:
    Queue();
    bool isEmpty();
    void addBack(int val);
    int getFront();
    void removeFront();
    void printQueue();
    ~Queue();
};


#endif //LAB7_QUEUE_HPP
