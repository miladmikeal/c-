/****************************************************************
** Program name: War Game with Dice Design
** Author: Milad Mikeal
** Date: 10/7/18
** Description: Game class implemenation file. This class prompts
 * the menu, starts the game, has the user input the rules of the
 * game, prints the stats after each round, and determines the
 * winner of the game.
****************************************************************/
#include "Game.hpp"
#include "Menu.hpp"
#include "getInt.hpp"
#include <iostream>
#include <limits>
#include <unistd.h>
using std::cout;
using std::cin;
using std::endl;

/****************************************************************
** Description: Constructor. Prompts user to enter the number of
 * rounds to play, whether players 1 & 2 will have a loaded die,
 * and the number of sides for their respective die. Also sets
 * the number of sides for the die.
****************************************************************/
Game::Game() {
    // Prompt menu
    main.add("Begin War Game with Dice");
    main.add("Quit");
    main.prompt();
    // Declare variables
    p1points = p2points = roundsPlayed = 0;
    p1roll = p2roll = 0;
    // Prompt user to select the number of rounds
    cout << "How many rounds would you like to play? " << endl
         << "Select 1-21" << endl;
    getInt(&rounds, 1, 21);
    // Prompt user determine if player 1 will have loaded die
    cout << "Will player 1 have a loaded die? " << endl
         << "1. Yes" << endl
         << "2. No" << endl;
    getInt(&p1loaded, 1, 2);
    // Prompt user determine if player 2 will have loaded die
    cout << "Will player 2 have a loaded die? " << endl
         << "1. Yes" << endl
         << "2. No" << endl;
    getInt(&p2loaded, 1, 2);
    // Prompt user to determine number of sides for player 1
    cout << "How many sides will player 1's die have? " << endl
         << "Select 4-20" << endl;
    getInt(&p1sides, 4, 20);
    // Prompt user to determine number of sides for player 2
    cout << "How many sides will player 2's die have? " << endl
         << "Select 4-20" << endl;
    getInt(&p2sides, 4, 20);

    // Clear input buffer
    cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    // Set sides for necessary die for player 1
    if (p1loaded == 1) {
        loadedDie1.setN(p1sides);
    } else {
        die1.setN(p1sides);
    }
    // Set sides for necessary die for player 2
    if (p2loaded == 1) {
        loadedDie2.setN(p2sides);
    } else {
        die2.setN(p2sides);
    }
}

/****************************************************************
** Description: This method proceeds based on whether or not
 * each player has a loaded die. It then prompts the user to
 * hit "Enter" to start a roll simulation, determines who rolled
 * a higher number, adds points accordingly to that player's
 * point total, increments the number of rounds played, then
 * prints the stats in their current form.
****************************************************************/
void Game::start() {
    // If both players have a loaded die
    if (p1loaded == 1 && p2loaded ==1) {
        // Loop until the number of rounds is reached
        while (roundsPlayed < rounds) {
            // Prompt user to hit enter to roll die for p1
            do {
                cout << '\n' << "Press the Enter key to roll die "
                     << "for player 1." << endl;
            } while (cin.get() != '\n');
            cout << "Player 1 rolling die... " << endl;
            // Sleep system for 1 second
            usleep(1000000);
            // Roll loaded die for p1
            p1roll = loadedDie1.roll();
            // Prompt user to hit enter to roll die for p2
            do {
                cout << '\n' << "Press the Enter key to roll die "
                     << "for player 2." << endl;
            } while (cin.get() != '\n');
            cout << "Player 2 rolling die... " << endl;
            // Sleep system for 1 second
            usleep(1000000);
            // Roll loaded die for p2
            p2roll = loadedDie2.roll();
            // If p1 roll is higher
            if (p1roll > p2roll) {
                // Add 1 to p1 points
                p1points++;
            // If p2 roll is higher
            } else if (p1roll < p2roll) {
                // Add 1 to p2 points
                p2points++;
            }
            // Increment rounds played
            roundsPlayed++;
            cout << '\n';
            // Print stats of game so far
            printStats();
        }
    // If only player 1 has a loaded die
    } else if (p1loaded == 1 && p2loaded == 2) {
        // Loop until the number of rounds is reached
        while (roundsPlayed < rounds) {
            // Prompt user to hit enter to roll die for p1
            do {
                cout << '\n' << "Press the Enter key to roll die "
                     << "for player 1." << endl;
            } while (cin.get() != '\n');
            cout << "Player 1 rolling die... " << endl;
            // Sleep system for 1 second
            usleep(1000000);
            // Roll loaded die for p1
            p1roll = loadedDie1.roll();
            // Prompt user to hit enter to roll die for p2
            do {
                cout << '\n' << "Press the Enter key to roll die "
                     << "for player 2." << endl;
            } while (cin.get() != '\n');
            cout << "Player 2 rolling die... " << endl;
            // Sleep system for 1 second
            usleep(1000000);
            // Roll normal die for p2
            p2roll = die2.roll();
            // If p1 roll is higher
            if (p1roll > p2roll) {
                // Add 1 to p1 points
                p1points++;
            // If p2 roll is higher
            } else if (p1roll < p2roll) {
                // Add 1 to p2 points
                p2points++;
            }
            // Increment rounds played
            roundsPlayed++;
            cout << '\n';
            // Print stats of game so far
            printStats();
        }
    } else if (p1loaded == 2 && p2loaded == 1) {
        // Loop until the number of rounds is reached
        while (roundsPlayed < rounds) {
            // Prompt user to hit enter to roll die for p1
            do {
                cout << '\n' << "Press the Enter key to roll die "
                     << "for player 1." << endl;
            } while (cin.get() != '\n');
            cout << "Player 1 rolling die... " << endl;
            // Sleep system for 1 second
            usleep(1000000);
            // Roll normal die for p2
            p1roll = die1.roll();
            // Prompt user to hit enter to roll die for p2
            do {
                cout << '\n' << "Press the Enter key to roll die "
                     << "for player 2." << endl;
            } while (cin.get() != '\n');
            cout << "Player 2 rolling die... " << endl;
            // Sleep system for 1 second
            usleep(1000000);
            // Roll loaded die for p2
            p2roll = loadedDie2.roll();
            // If p1 roll is higher
            if (p1roll > p2roll) {
                // Add 1 to p1 points
                p1points++;
                // If p2 roll is higher
            } else if (p1roll < p2roll) {
                // Add 1 to p2 points
                p2points++;
            }
            // Increment rounds played
            roundsPlayed++;
            cout << '\n';
            // Print stats of game so far
            printStats();
        }
    } else if (p1loaded == 2 && p2loaded == 2) {
        // Loop until the number of rounds is reached
        while (roundsPlayed < rounds) {
            // Prompt user to hit enter to roll die for p1
            do {
                cout << '\n' << "Press the Enter key to roll die "
                     << "for player 1." << endl;
            } while (cin.get() != '\n');
            cout << "Player 1 rolling die... " << endl;
            // Sleep system for 1 second
            usleep(1000000);
            // Roll normal die for p1
            p1roll = die1.roll();
            // Prompt user to hit enter to roll die for p2
            do {
                cout << '\n' << "Press the Enter key to roll die "
                     << "for player 2." << endl;
            } while (cin.get() != '\n');
            cout << "Player 2 rolling die... " << endl;
            // Sleep system for 1 second
            usleep(1000000);
            // Roll normal die for p2
            p2roll = die2.roll();
            // If p1 roll is higher
            if (p1roll > p2roll) {
                // Add 1 to p1 points
                p1points++;
            // If p2 roll is higher
            } else if (p1roll < p2roll) {
                // Add 1 to p2 points
                p2points++;
            }
            // Increment rounds played
            roundsPlayed++;
            cout << '\n';
            // Print stats of game so far
            printStats();
        }
    }
}

/****************************************************************
** Description: This method prints the stats of the game in its
 * current state.
****************************************************************/
void Game::printStats() {
    // If both players have a loaded die
    if (p1loaded == 1 && p2loaded == 1) {
        cout << "Round: " << roundsPlayed << " of "
             << rounds << "." <<  endl
             << "--------------------------" << endl;
        cout << '\n';
        cout << "Player 1 - Roll: " << p1roll << endl
             << "--------------------------" << endl
             << "Type of Die: Loaded" << endl
             << "Number of sides: " << p1sides << endl
             << "Score: " << p1points << endl;
        cout << '\n';
        cout << "Player 2 - Roll: " << p2roll << endl
             << "--------------------------" << endl
             << "Type of Die: Loaded" << endl
             << "Number of sides: " << p2sides << endl
             << "Score: " << p2points << endl;
        cout << '\n';
        cout << '\n';
    // If only player 1 has a loaded die
    } else if (p1loaded == 1 && p2loaded == 2) {
        cout << "Round: " << roundsPlayed << " of "
             << rounds << "." <<  endl
             << "--------------------------" << endl;
        cout << '\n';
        cout << "Player 1 - Roll: " << p1roll << endl
             << "--------------------------" << endl
             << "Type of Die: Loaded" << endl
             << "Number of sides: " << p1sides << endl
             << "Score: " << p1points << endl;
        cout << '\n';
        cout << "Player 2 - Roll: " << p2roll << endl
             << "--------------------------" << endl
             << "Type of Die: Normal" << endl
             << "Number of sides: " << p2sides << endl
             << "Score: " << p2points << endl;
        cout << '\n';
        cout << '\n';
    // If only player 2 has a loaded die
    } else if (p1loaded == 2 && p2loaded == 1) {
        cout << "Round: " << roundsPlayed << " of "
             << rounds << "." <<  endl
             << "--------------------------" << endl;
        cout << '\n';
        cout << "Player 1 - Roll: " << p1roll << endl
             << "--------------------------" << endl
             << "Type of Die: Normal" << endl
             << "Number of sides: " << p1sides << endl
             << "Score: " << p1points << endl;
        cout << '\n';
        cout << "Player 2 - Roll: " << p2roll << endl
             << "--------------------------" << endl
             << "Type of Die: Loaded" << endl
             << "Number of sides: " << p2sides << endl
             << "Score: " << p2points << endl;
        cout << '\n';
        cout << '\n';
    // If neither player has a loaded die
    } else if (p1loaded == 2 && p2loaded == 2) {
        cout << "Round: " << roundsPlayed << " of "
             << rounds << "." <<  endl
             << "--------------------------" << endl;
        cout << '\n';
        cout << "Player 1 - Roll: " << p1roll << endl
             << "--------------------------" << endl
             << "Type of Die: Normal" << endl
             << "Number of sides: " << p1sides << endl
             << "Score: " << p1points << endl;
        cout << '\n';
        cout << "Player 2 - Roll: " << p2roll << endl
             << "--------------------------" << endl
             << "Type of Die: Normal" << endl
             << "Number of sides: " << p2sides << endl
             << "Score: " << p2points << endl;
        cout << '\n';
        cout << '\n';
    }
}

/****************************************************************
** Description: This method displays each player's score and the
 * winner of the game.
****************************************************************/
void Game::declareWinner() {
    // Display each players score
    cout << "Player 1 score: " << p1points << endl
         << "Player 2 score: " << p2points << endl;
    cout << '\n';
    // Display winner
    if (p1points > p2points) {
        cout << "Player 1 wins!" << endl;
    } else if (p2points > p1points) {
        cout << "Player 2 wins!" << endl;
    } else {
        cout << "Tie game!" << endl;
    }
}
