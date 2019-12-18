/****************************************************************
 ** Program name: Langton's Ant
 ** Author: Milad Mikeal
 ** Date: 9/21/18
 ** Description: The function asks the user if they want to
  * randomize the starting point. It takes the 'random' variable
  * by reference and has the user input a value for it.
 ****************************************************************/
#include <iostream>
#include <limits>
#include <stdlib.h>
#include "toRandomize.hpp"
using std::cout;
using std::cin;
using std::endl;

void toRandomize(int &random) {
    // Ask user if they would like to randomize the starting point
    cout << "Would you like to randomize the starting point? " << endl
         << "Press '1' for yes or '2' for no." << endl
         << "1. Yes" << endl
         << "2. No" << endl
         << "Selection: ";
    cin >> random;
    cout << '\n';
    // Verify random selection
    while (!cin || random > 2 || random < 1) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid option. "
             << "Press '1' for yes or '2' for no. " << endl
             << "1. Yes" << endl
             << "2. No" << endl
             << "Selection: ";
        cin >> random;
        cout << '\n';
    }
}
