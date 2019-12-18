/****************************************************************
** Program name: Recursive Functions
** Author: Milad Mikeal
** Date: 10/19/18
** Description: This program demonstrates recursion by recursively
 * reversing a string, recursively adding the elements in an
 * array, and recursively calculating a numbers triangular.
****************************************************************/
#include <iostream>
#include <string>
#include "Menu.hpp"
#include "getInt.hpp"
#include "functions.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;

int main() {
    // Declare variables
    int run = 1;
    int selection;
    int size, *array;
    int num;
    string string1;
    // Create Main menu object
    Menu main("Main Menu:");
    // Add main menu options
    main.add("Reverse a string");
    main.add("Calculate the sum of an array of integers");
    main.add("Calculate the triangular number");
    main.add("Quit program");
    // Loop until user quits
    while (run) {
        // Prompt main menu
        selection = main.prompt();
        // If user selects 1
        if (selection == 1) {
            // Prompt user to enter string
            cout << "\nEnter a string: ";
            cin.ignore();
            getline(cin, string1);
            cout << "Reversed: ";
            // Call function to reverse string
            reverseString(string1);
        // If user selects 2
        } else if (selection == 2) {
            // Prompt user to select size of array
            cout << "\nHow long would you like the array to be? " << endl
                 << "Pick a number between 1 and 25." << endl;
            getInt(&size, 1, 25);
            // Dynamically create array of user specified size
            array = new int[size];
            // Prompt user to input values for array
            cout << "\nPlease enter " << size << " numbers between 1 and "
                 << "1000 for the array:" << endl;
            // Get num for each element of array
            for (int i = 0; i < size; i++) {
                getInt(&array[i], 1, 1000);
            }
            // Print sum by calling sumArray function
            cout << "\nSum: " << sumArray(array, size) << endl;
            // Free dynamically allocated array
            delete [] array;
        // If user selects 3
        } else if (selection == 3) {
            // Prompt user for number to calculate triangular of
            cout << "\nWhat number would you like to calculate "
                 << "the triangular of?" << endl
                 << "Select a number between 1 and 100." << endl;
            getInt(&num, 1, 100);
            // Call triangular function and print result
            cout << triangular(num) << endl;
        // If user selects 4
        } else if (selection == 4) {
            // Exit
            return 0;
        }
    }
}