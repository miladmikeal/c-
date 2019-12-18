/****************************************************************
** Program name: File I/O
** Author: Milad Mikeal
** Date: 9/28/2018
** Description: This function counts the frequency of each letter
 * in the ifstream file passed by reference. It updates the
 * count array accordingly depending on how frequent each letter
 * is.
****************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include "count_letters.hpp"
using std::ifstream;
using std::string;

void count_letters(ifstream &inputFile, int *count) {
    // Define variables
    string line;
    char letter;
    // Set each count variable to 0
    for (int i = 0; i < 26; i++) {
        count[i] = 0;
    }
    // Read line
    if (getline(inputFile, line)) {
        // Return if line is empty
        if (line.empty()) {
            return;
        } else {
            // Loop through the line
            for (int i = 0; i < line.length(); i++) {
                // Lowercase each letter in line
                letter = tolower(line[i]);
                // a-z ASCII values are 97-122
                if ((int)letter >= 97 && (int)letter <= 122) {
                    // Add 1 to value of count array for corresponding letter
                    count[(int)letter - 97]++;
                }
            }
        }

    }
}