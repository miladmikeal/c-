/****************************************************************
** Program name: Algorithm Efficiency
** Author: Milad Mikeal
** Date: 11/24/18
** Description: This program contains the fibonacci function
 * both recursively and iteratively.
****************************************************************/
#include <iostream>
#include <ctime>
#include "fibonacci.hpp"
using std::cout;
using std::endl;

/****************************************************************
** Description: Recursive version of fibonacci.
****************************************************************/
unsigned long long recursive(unsigned long long num) {
    // Base case
    if (num <= 1) {
        return num;
    }
    // Recursive case
    return recursive(num - 1) + recursive(num - 2);
}

/****************************************************************
** Description: Displays answer and clicks for recursive
 * fibonacci.
****************************************************************/
void showRecursive(unsigned long long input) {
    clock_t t;
    cout << "Recursive: " << recursive(input) << endl;
    t = clock();
    for (int i = 0; i < 1000; i++) {
        recursive(input);
    }
    t = clock() - t;
    cout << "Recursive clicks: " << ((float)t)/(CLOCKS_PER_SEC/1000) << endl;
}

/****************************************************************
** Description: Iterative version of fibonacci.
 * https://www.sanfoundry.com/cpp-program-find-fibonacci-numbers-iteration/
****************************************************************/
unsigned long long iterative(unsigned long long num) {
    // Declare variables
    int prev = 1, cur = 1, next = 1;
    // Loop from 3 to num
    for (int i = 3; i <= num; ++i) {
        next = cur + prev;
        prev = cur;
        cur = next;
    }
    return next;
}

/****************************************************************
** Description: Displays answer and clicks for iterative
 * fibonacci.
****************************************************************/
void showIterative(unsigned long long input) {
    clock_t t;
    cout << "Iterative: " << iterative(input) << endl;
    t = clock();
    for (int i = 0; i < 1000; i++) {
        iterative(input);
    }
    t = clock() - t;
    cout << "Iterative clicks: " << ((float)t)/(CLOCKS_PER_SEC/1000) << endl;
}