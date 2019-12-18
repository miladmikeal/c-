/****************************************************************
** Program name: Doubly-linked List
** Author: Milad Mikeal
** Date: 10/27/18
** Description: Linked list class implementation file. Allows
 * user to add to front, add to back, delete front, delete back,
 * traverse reversely, print head, and print tail.
****************************************************************/
#include "LinkedList.hpp"
#include <iostream>
using std::cout;
using std::endl;

/****************************************************************
** Description: Constructor. Initializes head, tail, & ptr to null.
****************************************************************/
LinkedList::LinkedList() {
    head = tail = ptr = nullptr;
}

/****************************************************************
** Description: Add number to beginning of linked list.
****************************************************************/
void LinkedList::addToHead(int num) {
    // Create pointer pointing at new node
    ptr = new Node();
    // Assign parameter number to val
    ptr->setVal(num);
    // To mark beginning
    ptr->setPrev(nullptr);
    // Have next pointer point to what is currently head
    ptr->setNext(head);
    // If head is null, only one value in list
    if (head == nullptr) {
        // Head and tail assigned node
        head = ptr;
        tail = ptr;
    // Otherwise
    } else {
        // Prev pointer point to node
        head->setPrev(ptr);
    }
    // Assign Node to head
    head = ptr;
    ptr = nullptr;
    // Call private traverse method
    traverse();
}

/****************************************************************
** Description: Add number to end of linked list.
****************************************************************/
void LinkedList::addToTail(int num) {
    // Create pointer pointing at new node
    ptr = new Node();
    // Assign parameter number to val
    ptr->setVal(num);
    // To mark the end
    ptr->setNext(nullptr);
    // Set prev pointer to what is currently tail
    ptr->setPrev(tail);
    // If tail is null, only one value in list
    if (tail == nullptr){
        // Head and tail assigned to node
        head = ptr;
        tail = ptr;
    // Otherwise
    } else {
        // Next pointer point to node
        tail->setNext(ptr);
    }
    // Assign Node to tail
    tail = ptr;
    ptr = nullptr;
    // Call private traverse method
    traverse();
}

/****************************************************************
** Description: Delete first item in linked list.
****************************************************************/
int LinkedList::deleteFirst() {
    // Check if empty
    if (head == nullptr) {
        return -1;
    }
    // Have node pointer point to head
    ptr = head;
    // If next not null
    if (head->getNext() != nullptr) {
        // Set next node's previous pointer to null
        (head->getNext())->setPrev(nullptr);
    }
    // Make next item now be head
    head = head->getNext();
    // Assign ptr value to val variable
    int val = ptr->getVal();
    // Delete ptr
    delete ptr;
    ptr = nullptr;
    // Call private traverse method
    traverse();
    return val;
}

/****************************************************************
** Description: Delete last item in linked list.
****************************************************************/
int LinkedList::deleteLast() {
    // Check if empty
    if (tail == nullptr) {
        return -1;
    }
    // Have node pointer point to tail
    ptr = tail;
    // If previous is not null
    if (tail->getPrev() != nullptr) {
        // Set previous node's next pointer to null
        (tail->getPrev())->setNext(nullptr);
    }
    // Make prev item now be tail
    tail = tail->getPrev();
    // Assign ptr value to val variable
    int val = ptr->getVal();
    // Delete ptr
    delete ptr;
    ptr = nullptr;
    // Call private traverse method
    traverse();
    return val;
}

/****************************************************************
** Description: Traverse linked list reversely.
****************************************************************/
void LinkedList::traverseReverse() {
    // Have pointer point to tail
    ptr = tail;
    cout << "\nLinked List Values Reversed: ";
    // Until ptr points to null at head
    while (ptr != nullptr) {
        // Print val
        cout << ptr->getVal() << " ";
        // Then point to previous val
        ptr = ptr->getPrev();
    }
    cout << endl;
}

/****************************************************************
** Description: Private. Traverse linked list.
****************************************************************/
void LinkedList::traverse() {
    // Have pointer point to head
    ptr = head;
    cout << "\nLinked List Values: ";
    // Until ptr points to null at tail
    while (ptr != nullptr) {
        // Print val
        cout << ptr->getVal() << " ";
        // Then point to next val
        ptr = ptr->getNext();
    }
    cout << endl;
}

/****************************************************************
** Description: Print head. (extra credit)
****************************************************************/
void LinkedList::printHead() {
    if (head == nullptr) {
        cout << "\nNo head node." << endl;
    } else {
        cout << "\nHead: " << head->getVal() << endl;
    }
}

/****************************************************************
** Description: Print tail. (extra credit)
****************************************************************/
void LinkedList::printTail() {
    if (tail == nullptr) {
        cout << "\nNo tail node." << endl;
    } else {
        cout << "\nTail: " << tail->getVal() << endl;
    }
}

/****************************************************************
** Description: Destructor. Deallocates memory for each node.
****************************************************************/
LinkedList::~LinkedList() {
    // Have ptr point to head
    ptr = head;
    // Loop through nodes until end
    while (ptr != nullptr) {
        // Create trash node
        Node *trash = ptr;
        // Have ptr point to next ptr
        ptr = ptr->getNext();
        // Delete trash
        delete trash;
    }
}