/****************************************************************
** Program name: Searching and Sorting
** Author: Milad Mikeal
** Date: 11/10/18
** Description: This program implements a simple search, bubble
 * sort, and binary search.
****************************************************************/
#include <iostream>
#include <fstream>
#include "readValues.hpp"
#include "simpleSearch.hpp"
#include "sort.hpp"
#include "binarySearch.hpp"
#include "getInt.hpp"
using std::cout;
using std::endl;

int main() {
    // Declare variables
    int num[10], early[10], middle[10], end[10];
    int target;

    // Call readValues function on each txt file
    readValues("num.txt", num);
    readValues("early.txt", early);
    readValues("middle.txt", middle);
    readValues("end.txt", end);

    // Prompt user for target value
    cout << "\nPlease enter target value: " << endl;
    getInt(&target, 0, 100);

    // Call simpleSearch function on each txt file
    cout << "\nSimple Search: " << endl;
    simpleSearch("num.txt", target);
    simpleSearch("early.txt", target);
    simpleSearch("middle.txt", target);
    simpleSearch("end.txt", target);

    // Sort each txt file
    cout << "\nBubble Sort: " << endl;
    sort("num.txt");
    sort("early.txt");
    sort("middle.txt");
    sort("end.txt");

    // Call binarySearch function on each txt file
    cout << "\nBinary Search: " << endl;
    binarySearch("numsorted.txt", target);
    binarySearch("earlysorted.txt", target);
    binarySearch("middlesorted.txt", target);
    binarySearch("endsorted.txt", target);
}