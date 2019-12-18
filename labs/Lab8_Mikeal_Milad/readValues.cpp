/****************************************************************
** Program name: Searching and Sorting
** Author: Milad Mikeal
** Date: 11/10/18
** Description: This function takes the values from an input file
 * and puts them in an array.
****************************************************************/
#include "readValues.hpp"
#include <iostream>
#include <fstream>
using std::fstream;
using std::cout;
using std::endl;

int readValues(std::string inputFile, int *array) {
    // Declare variables
    fstream file;
    int n = 0;
    // Open file
    file.open(inputFile);
    // Prompt error if file not opened
    if (!file) {
        cout << "Could not find the file." << endl;
    }
    // Loop until end of file
    while (!file.eof()) {
        // Put each value from file into array
        file >> array[n];
        // Increment n
        n++;
    }
    // Return n
    return n;
}
