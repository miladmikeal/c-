/****************************************************************
 ** Program name: Langton's Ant
 ** Author: Milad Mikeal
 ** Date: 9/21/18
 ** Description: The menu prints options to the screen for the
 * user and verifies the user's input after the user makes a
 * choice, then proceeds accordingly.
 ****************************************************************/
#include <iostream>
#include <limits>
#include <stdlib.h>
#include "menu.hpp"
using std::cout;
using std::cin;
using std::endl;

void menu() {
    // Define variables
    int selection;
    // For reusabilty
    std::string programName = "Langton's Ant";
    // Prompt user to start simulation or quit
    cout << "Please select option '1' or '2': " << endl
         << "1. Start " << programName <<  " program" << endl
         << "2. Quit" << endl
         << "Selection: ";
    cin >> selection;
    cout << '\n';
    // Verify selection
    while (!cin || selection > 2 || selection < 1) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid option. Please select '1' or '2': " << endl
             << "1. Start " << programName <<  " program" << endl
             << "2. Quit" << endl
             << "Selection: ";
        cin >> selection;
        cout << '\n';
    }
    // If option 2, quit program
    if (selection == 2) {
        exit(0);
    }
}
