/****************************************************************
** Program name: Searching and Sorting
** Author: Milad Mikeal
** Date: 11/10/18
** Description: This function implements a simple search
 * algorithm.
****************************************************************/
#include "simpleSearch.hpp"
#include <iostream>
#include <fstream>
using std::fstream;
using std::cout;
using std::endl;

void simpleSearch(std::string inputFile, int target) {
    // Declare variables
    fstream file;
    bool flag = false;
    int num;
    // Open file
    file.open(inputFile);
    // Prompt error if file not opened
    if (!file) {
        cout << "Could not find the file." << endl;
    }
    // Loop until end of file
    while (!file.eof()) {
        // Get number from file
        file >> num;
        // If number from file equals target
        if (num == target) {
            // Make flag true
            flag = true;
        }
    }
    // If flag true
    if (flag) {
        // Target was found
        cout << inputFile << ": target value found." << endl;
    // Otherwise
    } else {
        // Target not found
        cout << inputFile << ": target value not found." << endl;
    }
}