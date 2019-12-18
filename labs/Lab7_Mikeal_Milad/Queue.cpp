/****************************************************************
** Program name: Circular Linked List
** Author: Milad Mikeal
** Date: 11/3/18
** Description: Queue class check if queue is empty, adds node
 * to the back, returns the front node, removes the front node,
 * prints the queue, and deallocates memory in destructor.
****************************************************************/
#include "Queue.hpp"
#include <iostream>
using std::cout;
using std::endl;

/****************************************************************
** Description: Constructor. Initializes head to null.
****************************************************************/
Queue::Queue() {
    head = nullptr;
}

/****************************************************************
** Description: Checks if queue is empty.
****************************************************************/
bool Queue::isEmpty() {
    return head == nullptr;
}

/****************************************************************
** Description: Creates new node with user-inputted int and
 * adds it to the back of the list.
****************************************************************/
void Queue::addBack(int val) {
    // If queue is empty
    if (isEmpty()) {
        // Create new node
        head = new QueueNode;
        // Make val of node equal inputted val
        head->val = val;
        // Make next and prev pointers point to head
        head->next = head;
        head->prev = head;
    // If not empty
    } else {
        // Create node pointer for last item
        QueueNode *tail = head->prev;
        // Create new node
        QueueNode *ptr = new QueueNode;
        // Have new node's value equal input val
        ptr->val = val;
        // Make new node's prev pointer point to what was at the end
        ptr->prev = tail;
        // Make new node's next value point to head at front
        ptr->next = head;
        // Have last node's next pointer point to new node at front
        tail->next = ptr;
        // Have head's prev pointer point to new node at end
        head->prev = ptr;
    }
}

/****************************************************************
** Description: Returns value of node at front of queue.
****************************************************************/
int Queue::getFront() {
    return head->val;
}

/****************************************************************
** Description: Removes front node of the queue and frees the
 * memory.
****************************************************************/
void Queue::removeFront() {
    // If queue is empty
    if (isEmpty()) {
        cout << "\nQueue is empty." << endl;
    // If only one node
    } else if (head == head->next) {
        // Delete node
        delete head;
        head = nullptr;
    // Otherwise
    } else {
        // Have pointer point to head
        QueueNode *ptr = head;
        // Have head equal next value
        head = head->next;
        // Have head's prev pointer point to last item
        head->prev = ptr->prev;
        // Have last item point to what is now head
        head->prev->next = head;
        // Delete what was previously the head
        delete ptr;
    }
}

/****************************************************************
** Description: Traverses through the queue fro, head using next
 * pointers and prints the values of each node in the queue.
****************************************************************/
void Queue::printQueue() {
    // If queue us not empty
    if (!isEmpty()) {
        // Have pointer point ot head
        QueueNode *ptr = head;
        cout << "\nQueue: ";
        // Loop until back to head
        while (ptr->next != head) {
            // Print value
            cout << ptr->val << " ";
            // Go to next node
            ptr = ptr->next;
        }
        // Print last node
        cout << ptr->val << endl;
    }
}

/****************************************************************
** Description: Destructor. Frees all the memories of nodes in
 * the queue.
****************************************************************/
Queue::~Queue() {
    // While not empty
    while (!isEmpty()) {
        // Call removeFront method
        removeFront();
    }
}