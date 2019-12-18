/****************************************************************
** Program name: Fantasy Combat Tournament
** Author: Milad Mikeal
** Date: 11/7/18
** Description: Built upon project 3 - Fantasy Combat game, this
 * program builds a tournament. The user can select how many
 * characters per team and which character for each team. The
 * teams take turns battling, with the losing character being
 * added to the loser container, and the winning character being
 * added to the back of their team's container. A team loses when
 * there are no more characters in their container. The user
 * can then opt to see the losing container, then opt to play
 * again.
****************************************************************/
#include <iostream>
#include "Menu.hpp"
#include "getInt.hpp"
#include "Queue.hpp"
#include "Character.hpp"
using std::cout;
using std::cin;
using std::endl;

int main() {
    // Declare variables
    int selection, choice, loserSelection, again, run = 1;
    int numFighters, damage, strength, recovery;
    int team1points = 0;
    int team2points = 0;
    std::string name;
    Queue team1, team2, losers;
    // Seed srand
    unsigned int sval;
    time_t t;
    sval = (unsigned) time(&t);
    srand(sval);
    // Create main menu
    Menu main("Main Menu:");
    // Add main menu options
    main.add("Play");
    main.add("Exit");
    // Create character menu
    Menu characters("Please select a character:");
    // Add characters to menu
    characters.add("Vampire");
    characters.add("Barbarian");
    characters.add("Blue Men");
    characters.add("Medusa");
    characters.add("Harry Potter");
    // Create runAgain menu
    Menu runAgain("Would you like to play again?");
    // Add runAgain menu options
    runAgain.add("Yes");
    runAgain.add("No");
    // Create menu to view loser container
    Menu viewLosers("Would you like to see the loser pile?");
    // Add viewLosers menu options
    viewLosers.add("Yes");
    viewLosers.add("No");
    // Prompt user for main menu
    selection = main.prompt();
    // Loop until user exits
    while (run) {
        if (selection == 1) {
            cout << "\nHow many fighters per team would you like?" << endl;
            getInt(&numFighters, 1, 9);
            // Get character for team 1
            cout << "\nTeam 1 - ";
            for (int i = 0; i < numFighters; i++) {
                // Prompt characters
                choice = characters.prompt();
                // Name character
                cout << "What would you like this character's name to be?" << endl;
                cin.ignore();
                getline(cin, name);
                // Add to queue
                team1.addBack(choice);
                // Set characters name
                team1.getLast()->setName(name);
            }
            // Get character for team 2
            cout << "\nTeam 2 - ";
            for (int i = 0; i < numFighters; i++) {
                // Prompt characters
                choice = characters.prompt();
                // Name character
                cout << "What would you like this character's name to be?" << endl;
                cin.ignore();
                getline(cin, name);
                // Add to queue
                team2.addBack(choice);
                // Set characters name
                team2.getLast()->setName(name);
            }
            // Continue until one team is empty
            while (!team1.isEmpty() && !team2.isEmpty()) {
                // Set dead character flags to false to start round
                bool char1dead = false;
                bool char2dead = false;
                // While neither character is dead
                while (!char1dead && !char2dead) {
                    // Attack with team 1's front player
                    cout << "\nTeam 1 - " << team1.getFront()->getName()
                         << " attack: " << endl;
                    damage = team1.getFront()->attack();
                    // Defend with team 2's front player
                    cout << "\nTeam 2 - " << team2.getFront()->getName()
                         << " defense:" << endl;
                    team2.getFront()->defense(damage);
                    // Check if team 2 character is dead
                    char2dead = team2.getFront()->isDead();
                    // If not
                    if (!char2dead) {
                        cout << "\nTeam 2 - " << team2.getFront()->getName()
                             << " attack:" << endl;
                        damage = team2.getFront()->attack();
                        cout << "\nTeam 1 - " << team1.getFront()->getName()
                             << " defense: " << endl;
                        team1.getFront()->defense(damage);
                        // Check if team 1 character is dead
                        char1dead = team1.getFront()->isDead();
                    }
                    // Calculate recovery
                    recovery = rand() % 6 + 1;
                    // If team 1's character is dead
                    if (char1dead) {
                        // Announce team 2's winning player
                        cout << "\n\nTeam 2 wins this round with "
                             << team2.getFront()->getName() << "." << endl;
                        cout << team2.getFront()->getName() << " recovered "
                             << recovery << " strength points.";
                        // Increment team 2's points
                        team2points++;
                        // Get current strength of team 2's front player
                        strength = team2.getFront()->getStrength();
                        // Get current name of team 2's front player
                        name = team2.getFront()->getName();
                        // Add team 2's winner back to end of queue
                        team2.addBack(team2.getFront()->getTypeNum());
                        // Set his name
                        team2.getLast()->setName(name);
                        // Set his strength + recovery
                        team2.getLast()->setStrength(strength + recovery);
                        // Remove front from team 2
                        team2.removeFront();
                        // Get current name of team 1's front player
                        name = team1.getFront()->getName();
                        // Add team 1's player to loser container
                        losers.addBack(team1.getFront()->getTypeNum());
                        // Set name in losers queue
                        losers.getLast()->setName(name);
                        // Remove team 1's front player from queue
                        team1.removeFront();
                    // If team 2's character is dead
                    } else if (char2dead) {
                        // Announce team 1's winning player
                        cout << "\n\nTeam 1 wins this round with "
                             << team1.getFront()->getName() << "." << endl;
                        cout << team1.getFront()->getName() << " recovered "
                             << recovery << " strength points.";
                        // Increment team 1's points
                        team1points++;
                        // Get current strength of team 1's front player
                        strength = team1.getFront()->getStrength();
                        // Get current name of team 1's front player
                        name = team1.getFront()->getName();
                        // Add team 1's character back to queue
                        team1.addBack(team1.getFront()->getTypeNum());
                        // Set his name
                        team1.getLast()->setName(name);
                        // Set his strength + recovery
                        team1.getLast()->setStrength(strength + recovery);
                        // Remove front from team 1
                        team1.removeFront();
                        // Get current name of team 2's front player
                        name = team2.getFront()->getName();
                        // Add team 2's player to loser container
                        losers.addBack(team2.getFront()->getTypeNum());
                        // Set name in losers queue
                        losers.getLast()->setName(name);
                        // Remove team 2's front player from queue
                        team2.removeFront();
                    }
                }
            }
            // Declare winner of tournament
            if (team1points > team2points) {
                cout << "\n\nTeam 1 won the tournament!" << endl;
            } else if (team2points > team1points) {
                cout << "\n\nTeam 2 won the tournament!" << endl;
            } else {
                cout << "\n\nTournament ended in a draw!" << endl;
            }
            // Prompt viewLosers menu
            loserSelection = viewLosers.prompt();
            // If user wants to see losers
            if (loserSelection == 1) {
                // Show losers queue container
                losers.printQueue();
            }
            // Prompt run again menu
            again = runAgain.prompt();
            if (again == 1) {
                // Reset points to 0
                team1points = team2points = 0;
                // Empty team 1's queue
                while (!team1.isEmpty()) {
                    team1.removeFront();
                }
                // Empty team 2's queue
                while (!team2.isEmpty()) {
                    team2.removeFront();
                }
                // Empty loser queue
                while (!losers.isEmpty()) {
                    losers.removeFront();
                }
            } else {
                // Exit
                return 0;
            }
        } else {
            // Exit
            return 0;
        }
    }
}