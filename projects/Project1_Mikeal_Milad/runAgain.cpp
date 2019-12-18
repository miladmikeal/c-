/****************************************************************
 ** Program name: Langton's Ant
 ** Author: Milad Mikeal
 ** Date: 9/21/18
 ** Description: The function asks the user if they want to run
  * the program again. It takes the 'run' variable by reference
  * and has the user input a value for it.
 ****************************************************************/
#include <iostream>
#include <limits>
#include <stdlib.h>
#include "runAgain.hpp"
using std::cout;
using std::cin;
using std::endl;

void runAgain(int &run) {
    // Ask user if they would like to play again
    cout << "\nWould you like to play again? " << endl
         << "Press '1' for yes or '2' for no." << endl
         << "Selection: ";
    cin >> run;
    cout << '\n';
    // Verify selection
    while (!cin || run > 2 || run < 1) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid option. Please select '1' or '2': " << endl
             << "1. Yes" << endl
             << "2. No" << endl
             << "Selection: ";
        cin >> run;
        cout << '\n';
    }
}
