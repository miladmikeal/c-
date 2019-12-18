/****************************************************************
** Program name: Searching and Sorting
** Author: Milad Mikeal
** Date: 11/10/18
** Description: This function is used for input validation. It
 * prompts the user to enter an int. If non-numeric values,
 * floating point values, or anything else is entered, it prompts
 * the user to re-enter the value.
****************************************************************/
#include "getInt.hpp"
#include <sstream>
#include <string>
#include <iostream>
using std::string;
using std::stoi;
using std::stod;
using std::cout;
using std::cin;
using std::endl;

void getInt(int *pInt, int minVal, int maxVal) {
    // Declare variables
    int x = 1;
    string val;
    bool loop = true;
    // While loop is true
    while(loop) {
        // Input selection
        cout << "Selection: ";
        cin >> val;
        // Exit loop if no failures
        loop = false;
        // Check for non-numeric characters
        x = val.string::find_first_not_of("0123456789");
        if (x >= 0) {
            // Reprompt if non-numeric characters found
            cout << "Invalid! Please enter integer between "
                 << minVal << " and " << maxVal << ": " << endl;
            loop = true;
        }
        // Check if value within range
        if (!loop && (stoi(val) > maxVal || stoi(val) < minVal)) {
            cout << "Invalid! Please enter integer between "
                 << minVal << " and " << maxVal << "." << endl;
            loop = true;
        }
    }
    // Convert to int
    *pInt = stoi(val);
}
