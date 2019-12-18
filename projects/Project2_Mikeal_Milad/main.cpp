/****************************************************************
** Program name: Zoo Tycoon Game
** Author: Milad Mikeal
** Date: 10/10/18
** Description: This program simulates a zoo tycoon game where
 * the user runs a virtual zoo. The program begins by prompting
 * the user to select 1 or 2 of four animals to start with,
 * has a random event occur each day, calculates the days
 * profit, then asks the user if they would like to continue.
****************************************************************/
#include "Menu.hpp"
#include "getInt.hpp"
#include "Zoo.hpp"
#include "Tiger.hpp"
#include "Turtle.hpp"
#include "Penguin.hpp"
#include "Gorilla.hpp"
#include <iostream>
#include <limits>
using std::cout;
using std::cin;
using std::endl;

int main() {
    // Create menu
    Menu main("Main Menu:");
    main.add("Start Zoo Tycoon Game");
    main.add("Quit");
    if (main.prompt() == 1) {
        // Create Zoo object
        Zoo zoo;
        // Declare variables
        const double BASE_FOOD_COST = 10.0;
        int startingTigers, startingPenguins,
            startingTurtles, startingGorillas;
        int newAnimal, animalType;
        int run = 1;
        int day = 0;
        // Call greeting method
        zoo.greeting();
        cout << '\n';
        // Create menu for starting animals
        Menu startingAnimals;
        startingAnimals.add("One");
        startingAnimals.add("Two");
        // Get starting tiger(s)
        cout << "How many tigers would you like to start with?" << endl;
        startingTigers = startingAnimals.prompt();
        for (int i = 0; i < startingTigers; i++) {
            Tiger tiger(1, BASE_FOOD_COST);
            zoo.createTiger(tiger, false);
        }
        // Get starting penguin(s)
        cout << "\nHow many penguins would you like to start with?" << endl;
        startingPenguins = startingAnimals.prompt();
        for (int i = 0; i < startingPenguins; i++) {
            Penguin penguin(1, BASE_FOOD_COST);
            zoo.createPenguin(penguin, false);
        }
        // Get starting turtle(s)
        cout << "\nHow many turtles would you like to start with?" << endl;
        startingTurtles = startingAnimals.prompt();
        for (int i = 0; i < startingTurtles; i++) {
            Turtle turtle(1, BASE_FOOD_COST);
            zoo.createTurtle(turtle, false);
        }
        // Get starting gorilla(s)
        cout << "\nHow many gorillas would you like to start with?" << endl;
        startingGorillas = startingAnimals.prompt();
        for (int i = 0; i < startingGorillas; i++) {
            Gorilla gorilla(1, BASE_FOOD_COST);
            zoo.createGorilla(gorilla, false);
        }
        // Clear input buffer
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        // Loop until user opts to exit / runs out of money
        while (run) {
            // Display day and balance
            cout << "\nDay: " << ++day << endl;
            cout << "Current balance: $" << zoo.getBank() << endl;
            // Increment age of all animals
            zoo.incrementAge();
            // Call a random event
            zoo.randomEvent();
            // Calculate profit
            zoo.calcProfit();
            // Display days profit to user
            cout << "You made $" << zoo.getProfit() << " today." << endl;
            // Create yes/no menu
            Menu yesno;
            yesno.add("Yes");
            yesno.add("No");
            // Ask user if they want to buy an animal
            cout << "\nWould you like to buy an adult animal? " << endl;
            newAnimal = yesno.prompt();
            // If user selects yes
            if (newAnimal == 1) {
                // Create menu for new Animal
                Menu newAnimalMenu;
                newAnimalMenu.add("Tiger");
                newAnimalMenu.add("Penguin");
                newAnimalMenu.add("Turtle");
                newAnimalMenu.add("Gorilla");
                // Prompt user to select animal
                cout << "\nWhich animal would you like? " << endl;
                animalType = newAnimalMenu.prompt();
                // If 1
                if (animalType == 1) {
                    // Create tiger
                    Tiger tiger(3, BASE_FOOD_COST);
                    zoo.createTiger(tiger, false);
                    // If 2
                } else if (animalType == 2) {
                    // Create penguin
                    Penguin penguin(3, BASE_FOOD_COST);
                    zoo.createPenguin(penguin, false);
                    // If 3
                } else if (animalType == 3) {
                    // Create turtle
                    Turtle turtle(3, BASE_FOOD_COST);
                    zoo.createTurtle(turtle, false);
                    // If 4
                } else if (animalType == 4) {
                    // Create gorilla
                    Gorilla gorilla(3, BASE_FOOD_COST);
                    zoo.createGorilla(gorilla, false);
                }
            }
            // Ask user if they would like to keep playing
            cout << "\nWould you like to keep playing? " << endl;
            run = yesno.prompt();
            // Exit if user selects 2
            if (run == 2) {
                cout << "\nThank you for playing." << endl
                     << "See you next time." << endl;
                return 0;
            }
            // Check if user is out of money
            if (zoo.getBank() <= 0) {
                cout << "Unfortunately, you are out of money." << endl
                     << "Thank you for playing." << endl;
                return 0;
            }
            // Clear input buffer
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            // Have user hit enter to move onto next day
            do {
                cout << '\n' << "Press the Enter key to move on to "
                     << "the next day." << endl;
            } while (cin.get() != '\n');
        }
    } else {
        return 0;
    }


    return 0;
}