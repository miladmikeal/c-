/****************************************************************
** Program name: Searching and Sorting
** Author: Milad Mikeal
** Date: 11/10/18
** Description: This function implements a version of bubble
 * sort found here: https://www.geeksforgeeks.org/bubble-sort/
****************************************************************/
#include "sort.hpp"
#include "readValues.hpp"
#include <iostream>
#include <fstream>
using std::ofstream;
using std::cin;
using std::cout;
using std::endl;

void sort(std::string inputFile) {
    // Decalre variables
    ofstream outFile;
    int array[10];
    int n, temp;
    std::string outFileName;
    // Call readValues function
    n = readValues(inputFile, array);
    // Create necessary output file for each specific input file
    if (inputFile == "num.txt") {
        outFileName = "numsorted.txt";
    } else if (inputFile == "early.txt") {
        outFileName = "earlysorted.txt";
    } else if (inputFile == "middle.txt") {
        outFileName = "middlesorted.txt";
    } else if (inputFile == "end.txt") {
        outFileName = "endsorted.txt";
    }
    // Open output file
    outFile.open(outFileName);
    // Loop through array
    for (int i = 0; i < n - 1; i++) {
        // Create 2nd loop to track & compare previous value
        for (int j = 0; j < n - i -1; j++) {
            // If previous value is larget
            if (array[j] > array[j+1]) {
                // Switch values
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    // Display sorted values & add values to output file
    cout << "Sorted values of " << inputFile << ": ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
        outFile << array[i] << " ";
    }
    // Close file
    outFile.close();
    cout << endl;
}
