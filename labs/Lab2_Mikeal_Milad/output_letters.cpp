/****************************************************************
** Program name: File I/O
** Author: Milad Mikeal
** Date: 9/28/2018
** Description: This function outputs the frequency of each
 * letter - determined by the count_letters function - adds them
 * to an output file, one for each line.
****************************************************************/
#include <iostream>
#include <fstream>
#include "output_letters.hpp"
using std::endl;
using std::ofstream;

void output_letters(std::ofstream &outputFile, int *count) {
    // For each letter in alphabet
    for (int i = 0; i < 26; i++) {
        // Get character value of corresponding ASCII value
        // And count
        outputFile << (char)(i + 97) << ": " << count[i] << endl;
    }
}