/****************************************************************
** Program name: Circular Linked List
** Author: Milad Mikeal
** Date: 11/3/18
** Description: This program implements a circular linked list
 * in the form of a queue. User can add numbers to the back or
 * delete numbers from the front.
****************************************************************/
#include <iostream>
#include <climits>
#include "Menu.hpp"
#include "getInt.hpp"
#include "Queue.hpp"
using std::cout;
using std::endl;

int main() {
    // Declare variables
    int selection, num, run = 1;
    // Create queue
    Queue queue;
    // Create main menu
    Menu main("Main Menu:");
    // Add menu options
    main.add("Add a value to the back of queue.");
    main.add("Display the front value.");
    main.add("Remove the front node.");
    main.add("Display the queue's content.");
    main.add("Exit");
    // Continue until user exits
    while (run) {
        // Prompt main menu
        selection = main.prompt();
        // If 1
        if (selection == 1) {
            // Prompt user to enter number
            cout << "\nEnter a number." << endl;
            getInt(&num, 0, INT_MAX);
            // Call addBack method
            queue.addBack(num);
        // If 2
        } else if (selection == 2) {
            // Print front node
            cout << "\nFront value: " << queue.getFront() << endl;
        // If 3
        } else if (selection == 3) {
            // Remove front node
            queue.removeFront();
        // If 4
        } else if (selection == 4) {
            // Print queue
            queue.printQueue();
        // If 5
        } else if (selection == 5) {
            // Exit
            return 0;
        }
    }
}