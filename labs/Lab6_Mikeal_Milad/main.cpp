/****************************************************************
** Program name: Doubly-linked List
** Author: Milad Mikeal
** Date: 10/27/18
** Description: This program creates a doubly-linked list. The
 * user can add a new node to the head, add a new node to the
 * end, delete from the front, delete from the back, and traverse
 * the list reversely. The user can also print the head and tail
 * node individually (extra credit).
****************************************************************/
#include <iostream>
#include <climits>
#include "Menu.hpp"
#include "getInt.hpp"
#include "Node.hpp"
#include "LinkedList.hpp"
using std::cout;
using std::endl;

int main() {
    // Declare variables
    int selection, num, count = 0, run = 1;
    // Create linked list object
    LinkedList list;
    // Create partial menu
    Menu partial("Main Menu:");
    // Add partial menu options
    partial.add("Add a new node to the head.");
    partial.add("Add a new node to the tail.");
    partial.add("Exit");
    // Create main menu
    Menu full("Main Menu:");
    // Add menu options
    full.add("Add a new node to the head.");
    full.add("Add a new node to the tail.");
    full.add("Delete from head.");
    full.add("Delete from tail.");
    full.add("Traverse the list reversely.");
    full.add("Print head.");
    full.add("Print tail.");
    full.add("Exit");
    // Loop until user exits
    while (run) {
        if (count == 0) {
            selection = partial.prompt();
            if (selection == 1) {
                // Add number of head
                cout << "\nSelect a number to add." << endl;
                getInt(&num, 1, INT_MAX);
                list.addToHead(num);
                count++;
            } else if (selection == 2) {
                // Add number to tail
                cout << "\nSelect a number to add." << endl;
                getInt(&num, 1, INT_MAX);
                list.addToTail(num);
                count++;
            } else if (selection == 3) {
                return 0;
            }
        } else {
            // Prompt menu to user
            selection = full.prompt();
            // If 1
            if (selection == 1) {
                // Add number of head
                cout << "\nSelect a number to add." << endl;
                getInt(&num, 1, INT_MAX);
                list.addToHead(num);
                count++;
                // If 2
            } else if (selection == 2) {
                // Add number to tail
                cout << "\nSelect a number to add." << endl;
                getInt(&num, 1, INT_MAX);
                list.addToTail(num);
                count++;
                // If 3
            } else if (selection == 3) {
                // Delete first number
                list.deleteFirst();
                count--;
                // If 4
            } else if (selection == 4) {
                // Delete last number
                list.deleteLast();
                count--;
                // If 5
            } else if (selection == 5) {
                // Traverse list reverse
                list.traverseReverse();
                // If 6
            } else if (selection == 6) {
                // Print head
                list.printHead();
            } else if (selection == 7) {
                // Print tail
                list.printTail();
            } else if (selection == 8) {
                return 0;
            }
        }
    }
}
