/****************************************************************
 ** Program name: Langton's Ant
 ** Author: Milad Mikeal
 ** Date: 9/21/18
 ** Description: This function is called if the user decides not
 * to randomize the starting point. It takes parameters by
 * reference and has the user input values for rows, columns,
 * steps, starting row, and starting column. These variables are
 * used throughout the program.
 ****************************************************************/
#include <iostream>
#include <climits>
#include <limits>
#include "userInputs.hpp"
using std::cout;
using std::cin;
using std::endl;

void userInputs(int &rows, int &columns, int &steps,
                int &startingRow, int &startingCol) {
    // Prompt user to input rows
    cout << "Please select the number (1-50) of rows for the board: ";
    cin >> rows;
    // Validate rows input
    while (!cin || rows < 1 || rows > 50) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid option. "
             << "Please select the number of rows for the board: ";
        cin >> rows;
    }
    // Prompt user to input columns
    cout << "Please select the number of columns (1-50) for the board: ";
    cin >> columns;
    // Validate columns input
    while (!cin || columns < 1 || columns > 50) {
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
        cout << "Invalid option. Please select the number of steps: ";
        cin >> steps;
    }
    // Prompt user for starting row
    cout << "Which row would you like the ant to start on? ";
    cin >> startingRow;
    // Validate starting row input
    while (!cin || startingRow > rows || startingRow < 1) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid option. "
             << "Which row would you like the ant to start on? ";
        cin >> startingRow;
    }
    // Prompt user for starting column
    cout << "Which column would you like the ant to start on? ";
    cin >> startingCol;
    // Validate starting column input
    while (!cin || startingCol > columns || startingCol < 1) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid option. "
             << "Which column would you like the ant to start on? ";
        cin >> startingCol;
    }
    cout << '\n';
}
