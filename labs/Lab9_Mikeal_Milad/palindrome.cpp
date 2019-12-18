/****************************************************************
** Program name: Stack and Queue STL Containers
** Author: Milad Mikeal
** Date: 11/20/18
** Description: This function uses STL container stack to create
 * a palindrome. The user inputs a string, which is then printed
 * forward, then printed backward.
****************************************************************/
#include <iostream>
#include <string>
#include "palindrome.hpp"
using std::stack;
using std::string;
using std::cout;
using std::cin;
using std::endl;

void palindrome() {
    // Declare variables
    stack <char> palindrome;
    string str;
    // Prompt user for string
    cout << "\nEnter a string: ";
    cin.ignore();
    getline (cin, str);
    // Add each char to stack
    for (unsigned int i = 0; i < str.length(); i++) {
        palindrome.push(str[i]);
    }
    cout << "Palindrome: ";
    cout << str;
    while (!palindrome.empty()) {
        cout << palindrome.top();
        palindrome.pop();
    }
    cout << endl;
}