/****************************************************************
** Program name: OSU Information System
** Author: Milad Mikeal
** Date: 10/15/18
** Description: This program simulates an information system
 * of OSU using inheritance and polymorphism.
****************************************************************/
#include <iostream>
#include "Menu.hpp"
#include "University.hpp"
#include "Building.hpp"
#include "Person.hpp"
#include "Student.hpp"
#include "Instructor.hpp"
using std::cout;
using std::endl;

int main() {
    // Declare variables
    int run = 1;
    int selection;
    // Create university object
    University OSU;
    // Create building objects
    Building building1("Adams Hall", 11168,
                        "606 SW 15th St");
    Building building2("Austin Hall", 107613,
                        "2751 DW Jefferson Way");
    // Create people objects
    Student student1("Milad Mikeal", 25, 3.7);
    Instructor instructor1("John Doe", 40, 4.5);
    // Declare & define Person pointers
    Person *pPerson1 = &student1;
    Person *pPerson2 = &instructor1;
    // Add buildings to vector
    OSU.addBuilding(building1);
    OSU.addBuilding(building2);
    // Add people to vector
    OSU.addPerson(&student1);
    OSU.addPerson(&instructor1);
    // Create main menu object
    Menu main;
    main.add("Print building information");
    main.add("Print student & instructor information");
    main.add("Choose person to do work");
    main.add("Exit the program");
    // Continue running until user exits
    while (run) {
        // Prompt user for menu option
        selection = main.prompt();
        // If 1
        if (selection == 1) {
            cout << "\nThese are the buildings:" << endl;
            // Print building info
            OSU.printBuidlings();
        // If 2
        } else if (selection == 2) {
            cout << "\nThese are the people:" << endl;
            // Print people info
            OSU.printPeople();
        // If 3
        } else if (selection == 3) {
            // Declare variable for menu selection
            int choice;
            // Create do_work menu
            Menu dowork;
            // Add options to dowork menu
            dowork.add(student1.getName());
            dowork.add(instructor1.getName());
            // Get choice
            choice = dowork.prompt();
            // If 1
            if (choice == 1) {
                // Call dowork method on pPerson1 pointer
                pPerson1->do_work();
            // If 2
            } else if (choice == 2) {
                // Call dowork method on pPerson2 pointer
                pPerson2->do_work();
            }
        // If 4
        } else if (selection == 4) {
            // Exit program
            return 0;
        }
    }
}