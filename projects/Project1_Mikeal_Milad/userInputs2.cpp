/****************************************************************
 ** Program name: Langton's Ant
 ** Author: Milad Mikeal
 ** Date: 9/21/18
 ** Description: This function is called if the user decides to
 * randomize the starting point. It takes parameters by reference
 * and has the user input values for rows, columns, and steps.
 * These variables are used throughout the program.
 ****************************************************************/
#include <iostream>
#include <climits>
#include <limits>
#include "userInputs2.hpp"
using std::cout;
using std::cin;
using std::endl;

void userInputs2(int &rows, int &columns, int &steps) {
    // Prompt user to input rows
    cout << "Please select the number of rows for the board: ";
    cin >> rows;
    // Validate rows input
    while (!cin || rows < 1) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid option. "
             << "Please select the number of rows for the board: ";
        cin >> rows;
    }
    // Prompt user to input columns
    cout << "Please select the number of columns for the board: ";
    cin >> columns;
    // Validate columns input
    while (!cin || columns < 1) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid option. "
             << "Please select the number of columns for the board: ";
        cin >> columns;
    }
    // Prompt user to input steps
    cout << "How many steps would you like the ant to take? ";
    cin >> steps;
    // Validate steps input
    while (!cin || steps < 1 || steps > INT_MAX) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid option. "
             << "Please select the number of steps: ";
        cin >> steps;
    }
    cout << '\n';
}
