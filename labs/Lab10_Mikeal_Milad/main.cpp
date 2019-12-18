/****************************************************************
** Program name: Algorithm Efficiency
** Author: Milad Mikeal
** Date: 11/24/18
** Description: This program calculates fibonacci both recursively
 * and iteratively and displays the time clicks for different
 * values.
****************************************************************/
#include <iostream>
#include "Menu.hpp"
#include "getInt.hpp"
#include "fibonacci.hpp"
using std::cout;
using std::endl;

int main() {
    // Declare variables
    int selection, num, run = 1;
    // Create Menu
    Menu main("Main Menu:");
    // Add menu options
    main.add("Recursive");
    main.add("Iterative");
    main.add("Exit");
    // Loop until user exits
    while (run) {
        // Prompt main menu
        selection = main.prompt();
        // If 1
        if (selection == 1) {
            // Prompt user for num
            cout << "What number would you like to recursively calculate "
                 << "fibonacci for?" << endl;
            getInt(&num, 1, 1000);
            // Call showRecursive function
            showRecursive(num);
        // If 2
        } else if (selection == 2) {
            // Prompt user for num
            cout << "What number would you like to iteratively calculate "
                 << "fibonacci for?" << endl;
            getInt(&num, 1, 1000);
            // Call showIterative function
            showIterative(num);
        // If 3
        } else if (selection == 3) {
            // Exit
            return 0;
        }
    }
}