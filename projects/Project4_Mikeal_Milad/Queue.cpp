/****************************************************************
** Program name: Fantasy Combat Tournament
** Author: Milad Mikeal
** Date: 11/7/18
** Description: Queue class check if queue is empty, adds char
 * to the back, returns the front char, returns last char,
 * removes the front char, prints the queue, and deallocates
 * memory in destructor.
****************************************************************/
#include "Queue.hpp"
#include <iostream>
using std::cout;
using std::endl;

/****************************************************************
** Description: Constructor. Initializes head to null.
****************************************************************/
Queue::Queue() {
    head = character = nullptr;
}

/****************************************************************
** Description: Checks if queue is empty.
****************************************************************/
bool Queue::isEmpty() {
    return head == nullptr;
}

/****************************************************************
** Description: Creates new char with user-inputted int and
 * adds it to the back of the list.
****************************************************************/
void Queue::addBack(int val) {
    // If queue is empty
    if (isEmpty()) {
        if (val == 1) {
            head = new Vampire;
        } else if (val == 2) {
            head = new Barbarian;
        } else if (val == 3) {
            head = new BlueMen;
        } else if (val == 4) {
            head = new Medusa;
        } else if (val == 5) {
            head = new HarryPotter;
        }
        // Set values of character
        head->setValues();
        // Make next and prev pointers point to head
        head->setNext(head);
        head->setPrev(head);
        // If not empty
    } else {
        // Create character pointer for last item
        Character *tail = head->getPrev();
        if (val == 1) {
            character = new Vampire;
        } else if (val == 2) {
            character = new Barbarian;
        } else if (val == 3) {
            character = new BlueMen;
        } else if (val == 4) {
            character = new Medusa;
        } else if (val == 5) {
            character = new HarryPotter;
        }
        // Set values of character
        character->setValues();
        // Make new character's prev pointer point to what was at the end
        character->setPrev(tail);
        // Make new character's next value point to head at front
        character->setNext(head);
        // Have last character's next pointer point to new character at front
        tail->setNext(character);
        // Have head's prev pointer point to new character at end
        head->setPrev(character);
    }
}

/****************************************************************
** Description: Returns value of char at front of queue.
****************************************************************/
Character* Queue::getFront() {
    return head;
}

/****************************************************************
** Description: Returns value of char at back of queue.
****************************************************************/
Character* Queue::getLast() {
    return head->getPrev();
}

/****************************************************************
** Description: Removes front char of the queue and frees the
 * memory.
****************************************************************/
void Queue::removeFront() {
    // If queue is empty
    if (isEmpty()) {
        cout << "\nQueue is empty." << endl;
        // If only one character
    } else if (head == head->getNext()) {
        // Delete character
        delete head;
        head = nullptr;
        // Otherwise
    } else {
        // Have pointer point to head
        character = head;
        // Have head equal next value
        head = head->getNext();
        // Have head's prev pointer point to last item
        head->setPrev(character->getPrev());
        // Have last item point to what is now head
        (head->getPrev())->setNext(head);
        // Delete what was previously the head
        delete character;
    }
}

/****************************************************************
** Description: Traverses through the queue from head using next
 * pointers and prints the name of each char in the queue.
****************************************************************/
void Queue::printQueue() {
    // If queue us not empty
    if (!isEmpty()) {
        // Have pointer point ot head
        character = head;
        cout << "\nLoser Container: " << endl;
        // Loop until back to head
        while (character->getNext() != head) {
            // Print value
            cout << character->getName() << endl;
            // Go to next character
            character = character->getNext();
        }
        // Print last character
        cout << character->getName() << endl;
    }
}

/****************************************************************
** Description: Destructor. Frees all the memories of chars in
 * the queue.
****************************************************************/
Queue::~Queue() {
    // While not empty
    while (!isEmpty()) {
        // Call removeFront method
        removeFront();
    }
}