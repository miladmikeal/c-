/****************************************************************
** Program name: Fantasy Combat Game
** Author: Milad Mikeal
** Date: 10/20/18
** Description: Fantasy combat game allows user to select two
 * characters to face off in battle. Each character takes turns
 * generating attacks and defenses, some with special abilities.
 * A character wins when the other character reaches 0 strength
 * points. The user can then opt to play again or quit.
****************************************************************/
#include <iostream>
#include "Menu.hpp"
#include "getInt.hpp"
#include "Character.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"
using std::cout;
using std::endl;

int main() {
    // Declare variables
    int selection, damage, again = 1;
    int round = 0;
    // Create character choice variables
    int choice1, choice2;
    // Create character pointers
    Character *char1;
    Character *char2;
    // Create main menu object
    Menu main("Main Menu:");
    // Add menu options
    main.add("Start Game");
    main.add("Quit");
    // Create character menu
    Menu characters("Please select a character:");
    // Add characters to menu
    characters.add("Vampire");
    characters.add("Barbarian");
    characters.add("Blue Men");
    characters.add("Medusa");
    characters.add("Harry Potter");
    // Create playAgain menu
    Menu playAgain("Would you like to play again?");
    // Add menu options
    playAgain.add("Yes");
    playAgain.add("No");
    // Prompt main menu
    selection = main.prompt();
    // If 1
    if (selection == 1) {
        while (again == 1) {
            // Set both characters to alive
            bool char1dead = false;
            bool char2dead = false;
            cout << "\nSelect 2 characters to battle each other."
                 << endl;
            // Prompt for first character
            cout << "\nPlayer 1:" << endl;
            choice1 = characters.prompt();
            // Create first character
            if (choice1 == 1) {
                char1 = new Vampire;
            } else if (choice1 == 2) {
                char1 = new Barbarian;
            } else if (choice1 == 3) {
                char1 = new BlueMen;
            } else if (choice1 == 4) {
                char1 = new Medusa;
            } else if (choice1 == 5) {
                char1 = new HarryPotter;
            }
            // Prompt for 2nd character
            cout << "\nPlayer 2:" << endl;
            choice2 = characters.prompt();
            // Create 2nd character
            if (choice2 == 1) {
                char2 = new Vampire;
            } else if (choice2 == 2) {
                char2 = new Barbarian;
            } else if (choice2 == 3) {
                char2 = new BlueMen;
            } else if (choice2 == 4) {
                char2 = new Medusa;
            } else if (choice2 == 5) {
                char2 = new HarryPotter;
            }
            // Set character values
            char1->setValues();
            char2->setValues();
            // Show players and strength
            cout << "Player 1: "
                 << char1->getName() << endl
                 << "Strength: "
                 << char1->getStrength() << endl
                 << "Player 2: "
                 << char2->getName() << endl
                 << "Strength: "
                 << char2->getStrength() << endl
                 << '\n';
            // Loop until someone dies
            while (!char1dead && !char2dead) {
                round++;
                cout << "\nRound " << round << ": " << endl
                     << "--------" << endl;
                // Attack with player 1
                cout << "\nPlayer 1 attack:" << endl;
                damage = char1->attack();
                cout << '\n';
                // Defend with player 2
                cout << "Player 2 defense:" << endl;
                char2->defense(damage);
                cout << '\n';
                // Check if player 2 is dead
                char2dead = char2->isDead();
                // If char2 is still alive
                if (!char2dead) {
                    // Attack with player 2
                    cout << "\nPlayer 2 attack:" << endl;
                    damage = char2->attack();
                    cout << '\n';
                    // Defend with player 1
                    cout << "Player 1 defense:" << endl;
                    char1->defense(damage);
                    cout << '\n';
                    // Check if player is dead
                    char1dead = char1->isDead();
                }
                // If player 1 dies
                if (char1dead) {
                    // Player 2 wins
                    cout << "Player 2 wins with "
                         << char2->getName() << endl;
                // If player 2 dies
                } else if(char2dead) {
                    // Player 1 wins
                    cout << "Player 1 wins with "
                         << char1->getName() << endl;
                }
            }
            // Prompt user
            again = playAgain.prompt();
            // If user opts to exit
            if (again == 2) {
                delete char1;
                delete char2;
                // Exit
                return 0;
            }
            // Reset round to 0
            round = 0;
        }
    // If 2
    } else if (selection == 2) {
        // Exit
        return 0;
    }
}