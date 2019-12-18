/****************************************************************
** Program name: Stack and Queue STL Containers
** Author: Milad Mikeal
** Date: 11/20/18
** Description: This program creates two data structures using
 * STL containers: "stack" and "queue." The stack is used to
 * create a palindrome, and the queue is used to create a buffer.
****************************************************************/
#include <iostream>
#include <random>
#include "Menu.hpp"
#include "buffer.hpp"
#include "palindrome.hpp"
using std::cout;
using std::endl;

int main() {
    // Declare variables
    int selection, run = 1;
    // Create main menu
    Menu main("Main menu:");
    // Add menu options
    main.add("Create buffer with Queue");
    main.add("Create palindrome with Stack");
    main.add("Exit");
    // Seed rand
    unsigned int sval;
    time_t t;
    sval = (unsigned) time(&t);
    srand(sval);
    // Continue until user exits
    while (run) {
        // Prompt main menu
        selection = main.prompt();
        // If 1
        if (selection == 1) {
            // Call buffer function
            cout << "\nQueue:" << endl;
            buffer();
        // If 2
        } else if (selection == 2) {
            // Call palindrome function
            cout << "\nStack:" << endl;
            palindrome();
        // If 3
        } else if (selection == 3) {
            // Exit
            return 0;
        }
    }
}