/****************************************************************
** Program name: File I/O
** Author: Milad Mikeal
** Date: 9/28/2018
** Description: This program reads a file filled with letters,
 * counts the letter frequencies in the file, and writes the
 * result to a new file(s).
****************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include "count_letters.hpp"
#include "output_letters.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ios;
using std::ifstream;
using std::ofstream;

int main() {
    // Define variables
    ifstream inputFile;
    ofstream outputFile;
    string inFileName, outFileName;
    int count[26] = { 0 }, numOutFiles = 1;
    // Ask user for file to read
    cout << "What file would you like to read? ";
    cin >> inFileName;
    // Open input file
    inputFile.open(inFileName, ios::in);
    // If input file fails to open
    if (!inputFile) {
        cout << "Could not find the file." << endl;
        return 1;
    }
    // Loop through input file
    while (inputFile.good()) {
            // Call count_letters function
            count_letters(inputFile, count);
            // Prompt user to enter output file name
            cout << "Enter name for output file " << numOutFiles << ": ";
            cin >> outFileName;
            // Increase number of output files by 1
            numOutFiles++;
            // Open output file
            outputFile.open(outFileName, ios::out);
            // Call output_letters function
            output_letters(outputFile, count);
            // Close output file
            outputFile.close();
    }
    // Close input file
    inputFile.close();
    return 0;
}