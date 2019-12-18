/****************************************************************
** Program name: Searching and Sorting
** Author: Milad Mikeal
** Date: 11/10/18
** Description: This function implements a binary search.
****************************************************************/
#include "binarySearch.hpp"
#include <iostream>
#include <fstream>
using std::fstream;
using std::cout;
using std::endl;

void binarySearch(std::string sortedFile, int target) {
    // Declare variables
    fstream file;
    int array[10];
    int n = 0, first, mid, last;
    bool flag = false;
    // Open sorted file
    file.open(sortedFile);
    // Prompt error if file not opened
    if (!file) {
        cout << "Could not find the file." << endl;
    }
    // Loop until end of file
    while (!file.eof()) {
        // Put each value from file into array
        file >> array[n];
        // Increment array
        n++;
    }
    // Set first, middle, and last values
    first = 0;
    last = n - 1;
    mid = (first + last) / 2;
    // Loop until first <= last
    while (first <= last) {
        // If middle value is less than target
        if (array[mid] < target) {
            // Make value after middle now be first
            first = mid + 1;
        // If middle value is the target
        } else if (array[mid] == target) {
            // Make flag true & exit loop
            flag = true;
            break;
        // If middle value is greater than target
        } else {
            // Make value before middle now be last
            last = mid - 1;
        }
        // Recalculate middle
        mid = (first + last) / 2;
    }
    // If flag is true
    if (flag) {
        // Target was found
        cout << sortedFile << ": target value found." << endl;
    // Otherwise
    } else {
        // Target was not found
        cout << sortedFile << ": target value not found." << endl;
    }
}