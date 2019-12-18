/****************************************************************
** Program name: Zoo Tycoon Game
** Author: Milad Mikeal
** Date: 10/10/18
** Description: Zoo class implementation file. It dynamically
 * allocates memory for an array for each animal, initializes
 * member variables, greets the user, has a method to create
 * each animal. It also generates a random event, calculates
 * profit, and increments age.
****************************************************************/
#include "Zoo.hpp"
#include "getInt.hpp"
#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
#include <time.h>
using std::cout;
using std::cin;
using std::endl;

/****************************************************************
** Description: Constructor. Initializes variables and dynamically
 * allocates array for each animal.
****************************************************************/
Zoo::Zoo() {
    tigersCap = penguinsCap = turtlesCap = gorillasCap = 10;
    tigers = new Tiger[tigersCap];
    penguins = new Penguin[penguinsCap];
    turtles = new Turtle[turtlesCap];
    gorillas = new Gorilla[gorillasCap];
    bank = 100000.0;
    profit = 0.0;
    numTigers = numPenguins = numTurtles = numGorillas = 0;
}

/****************************************************************
** Description: Destructor. Frees dynamically allocated
 * memory.
****************************************************************/
Zoo::~Zoo() {
    delete [] tigers;
    delete [] penguins;
    delete [] turtles;
    delete [] gorillas;
}

/****************************************************************
** Description: This method greets the user with starting
 * instructions.
****************************************************************/
void Zoo::greeting() {
    cout << "\nWelcome to your virtual zoo!" << endl
         << "You have $" << getBank() << " to spend." << endl
         << "Please select 1 or 2 of each of the "
         << "following animals to start..." << endl
         << "1. Tiger - $10000" << endl
         << "2. Penguin - $1000" << endl
         << "3. Turtle - $100" << endl
         << "4. Gorilla - $8000" << endl;
}

/****************************************************************
** Description: This method adds a tiger to the tigers array.
 * If the array capacity is reached, it doubles the size
 * of the array.
****************************************************************/
void Zoo::createTiger(Tiger nTiger, bool isBaby) {
    // If current array of tigers cap reached
    if (numTigers == tigersCap) {
        // Create new array twice size
        Tiger *newTigersArr = new Tiger[2 * tigersCap];
        // Add each element from tigers array to new array
        for (int i = 0; i < tigersCap; i++) {
            newTigersArr[i] = tigers[i];
        }
        // Delete old array
        delete [] tigers;
        // Double cap
        tigersCap = 2 * tigersCap;
        // Make tigers array equal new tigers array
        tigers = newTigersArr;
    }
    // Create tiger at necessary position on array
    tigers[numTigers] = nTiger;
    // Increment number of tigers
    numTigers++;
    // If not baby
    if (!isBaby) {
        // Factor in cost
        bank = bank - nTiger.getCost();
    }
}

/****************************************************************
** Description: This method adds a penguin to the penguin array.
 * If the array capacity is reached, it doubles the size of the
 * array.
****************************************************************/
void Zoo::createPenguin(Penguin nPenguin, bool isBaby) {
    // If current array of penguins cap reached
    if (numPenguins == penguinsCap) {
        // Create new array twice size
        Penguin *newPenguinsArr = new Penguin[2 * penguinsCap];
        // Add each element from penguins array to new array
        for (int i = 0; i < penguinsCap; i++) {
            newPenguinsArr[i] = penguins[i];
        }
        // Delete old array
        delete [] penguins;
        // Double cap
        penguinsCap = 2 * penguinsCap;
        // Make penguins array equal new penguins array
        penguins = newPenguinsArr;
    }
    // Create penguins at necessary position on array
    penguins[numPenguins] = nPenguin;
    // Increment number of penguins
    numPenguins++;
    // If not baby
    if (!isBaby) {
        // Factor in cost
        bank = bank - nPenguin.getCost();
    }
}

/****************************************************************
** Description: This method adds a turtle to the turtles array.
 * If the array capacity is reached, it doubles the size of the
 * array.
****************************************************************/
void Zoo::createTurtle(Turtle nTurtle, bool isBaby) {
    // If current array of turtles cap reached
    if (numTurtles == turtlesCap) {
        // Create new array twice size
        Turtle *newTurtlesArr = new Turtle[2 * turtlesCap];
        // Add each element from turtles array to new array
        for (int i = 0; i < turtlesCap; i++) {
            newTurtlesArr[i] = turtles[i];
        }
        // Delete old array
        delete [] turtles;
        // Double cap
        turtlesCap = 2 * turtlesCap;
        // Make turtles array equal new turtles array
        turtles = newTurtlesArr;
    }
    // Create turtles at necessary position on array
    turtles[numTurtles] = nTurtle;
    // Increment number of turtles
    numTurtles++;
    // If not baby
    if (!isBaby) {
        // Factor in cost
        bank = bank - nTurtle.getCost();
    }
}

/****************************************************************
** Description: This method adds a gorilla to the gorillas array.
 * If the array capacity is reached, it doubles the size of the
 * array. (EXTRA CREDIT)
****************************************************************/
void Zoo::createGorilla(Gorilla nGorilla, bool isBaby) {
    // If current array of gorillas cap reached
    if (numGorillas == gorillasCap) {
        // Create new array twice size
        Gorilla *newGorillasArr = new Gorilla[2 * gorillasCap];
        // Add each element from gorillas array to new array
        for (int i = 0; i < gorillasCap; i++) {
            newGorillasArr[i] = gorillas[i];
        }
        // Delete old array
        delete [] gorillas;
        // Double cap
        gorillasCap = 2 * gorillasCap;
        // Make gorillas array equal new gorillas array
        gorillas = newGorillasArr;
    }
    // Create gorillas at necessary position on array
    gorillas[numGorillas] = nGorilla;
    // Increment number of gorillas
    numGorillas++;
    // If not baby
    if (!isBaby) {
        // Factor in cost
        bank = bank - nGorilla.getCost();
    }
}

/****************************************************************
** Description: This boolean method checks to see if there is an
 * adult tiger available to create a baby tiger.
****************************************************************/
bool Zoo::createBabyTiger() {
    // Flag to check if there is adult tiger
    bool adultTiger = false;
    // Loop through tigers array
    for (int i = 0; i < numTigers; i++) {
        // If there is an adult tiger
        if (tigers[i].getAge() >= 3) {
            // Make flag true
            adultTiger = true;
        }
    }
    // Return flag
    return adultTiger;
}

/****************************************************************
** Description: This boolean method checks to see if there is an
 * adult penguin available to create baby penguins.
****************************************************************/
bool Zoo::createBabyPenguin() {
    // Flag to check if there is adult penguin
    bool adultPenguin = false;
    // Loop through penguins array
    for (int i = 0; i < numPenguins; i++) {
        // If there is an adult penguin
        if (penguins[i].getAge() >= 3) {
            // Make flag true
            adultPenguin = true;
        }
    }
    // Return flag
    return adultPenguin;
}

/****************************************************************
** Description: This boolean method checks to see if there is an
 * adult turtle available to create baby turtles.
****************************************************************/
bool Zoo::createBabyTurtle() {
    // Flag to check if there is adult turtle
    bool adultTurtle = false;
    // Loop through turtles array
    for (int i = 0; i < numTurtles; i++) {
        // If there is an adult turtles
        if (turtles[i].getAge() >= 3) {
            // Make flag true
            adultTurtle = true;
        }
    }
    // Return flag
    return adultTurtle;
}

/****************************************************************
** Description: This boolean method checks to see if there is an
 * adult gorilla available to create baby gorillas.(EXTRA CREDIT)
****************************************************************/
bool Zoo::createBabyGorilla() {
    // Flag to check if there is adult gorilla
    bool adultGorilla = false;
    // Loop through gorillas array
    for (int i = 0; i < numGorillas; i++) {
        // If there is an adult gorillas
        if (gorillas[i].getAge() >= 3) {
            // Make flag true
            adultGorilla = true;
        }
    }
    // Return flag
    return adultGorilla;
}

/****************************************************************
** Description: This method deletes a tiger.
****************************************************************/
bool Zoo::deleteTiger() {
    // Check if there are any tigers
    if (numTigers == 0) {
        return false;
    } else {
        cout << "A tiger has been removed from the zoo." << endl;
        cout << '\n';
        // Decrement number of tigers
        numTigers--;
        return true;
    }
}

/****************************************************************
** Description: This method deletes a penguin.
****************************************************************/
bool Zoo::deletePenguin() {
    // Check if there are any penguins
    if (numPenguins == 0) {
        return false;
    } else {
        cout << "A penguin has been removed from the zoo." << endl;
        cout << '\n';
        // Decrement number of penguins
        numPenguins--;
        return true;
    }
}

/****************************************************************
** Description: This method deletes a turtle.
****************************************************************/
bool Zoo::deleteTurtle() {
    // Check if there are any turtles
    if (numTurtles == 0) {
        return false;
    } else {
        cout << "A turtle has been removed from the zoo." << endl;
        cout << '\n';
        // Decrement number of turtle
        numTurtles--;
        return true;
    }
}

/****************************************************************
** Description: This method deletes a gorilla. (EXTRA CREDIT)
****************************************************************/
bool Zoo::deleteGorilla() {
    // Check if there are any gorillas
    if (numGorillas == 0) {
        return false;
    } else {
        cout << "A gorilla has been removed from the zoo." << endl;
        cout << '\n';
        // Decrement number of gorillas
        numGorillas--;
        return true;
    }
}

/****************************************************************
** Description: This method determines the random event for each
 * day. 1 results in a random sickness. 2 results in a boom in
 * attendance. 3 results in a new animal(s) being born. 4 results
 * in nothing happening.
****************************************************************/
void Zoo::randomEvent() {
    // Seed rand
    srand(time(0));
    // Declare variables
    int event = rand() % 4 + 1;
    int subRand, bonus;
    bool flag;
    // Event 1: Random sickness
    if (event == 1) {
        cout << "Random Event:" << endl
             << "An animal has gotten sick." << endl;
        // Wait for user to hit enter
        do {
            cout << '\n' << "Press the Enter key to see which "
                 << "animal got sick." << endl;
        } while (cin.get() != '\n');
        // To choose which animal will die
        subRand = rand() % 4 + 1;
        // If 1
        if (subRand == 1) {
            // Delete tiger
            flag = deleteTiger();
            // If there are no tigers
            if (!flag) {
                // Delete penguin
                flag = deletePenguin();
            }
            // If there are no tigers/penguins
            if (!flag) {
                // Delete turtle
                flag = deleteTurtle();
            }
            // If there are no tigers/penguins/turtles
            if (!flag) {
                // Delete gorilla
                flag = deleteGorilla();
            }
        // If 2
        } else if (subRand == 2) {
            // Delete penguin
            flag = deletePenguin();
            // If there are no penguins
            if (!flag) {
                // Delete turtle
                flag = deleteTurtle();
            }
            // If there are no penguins/turtles
            if (!flag) {
                // Delete gorilla
                flag = deleteGorilla();
            }
            // If there are no penguins/turtles/gorillas
            if (!flag) {
                // Delete tiger
                flag = deleteTiger();
            }
        // If 3
        } else if (subRand == 3) {
            // Delete turtle
            flag = deleteTurtle();
            // If there are no turtles
            if (!flag) {
                // Delete gorilla
                flag = deleteGorilla();
            }
            // If no turtles/gorillas
            if (!flag) {
                // Delete tiger
                flag = deleteTiger();
            }
            // If there are no turtles/gorillas/tigers
            if (!flag) {
                // Delete penguin
                flag = deletePenguin();
            }
        // If 4
        } else if (subRand == 4) {
            // Delete gorilla
            flag = deleteGorilla();
            // If there are no gorillas
            if (!flag) {
                // Delete tiger
                flag = deleteTiger();
            }
            // If there are no gorillas/tigers
            if (!flag) {
                flag = deletePenguin();
            }
            // If there are no gorillas/tigers/penguins
            if (!flag) {
                // Delete turtle
                flag = deleteTurtle();
            }
        }
        // If there are no animals
        if (!flag) {
            cout << "No animal can be removed from the zoo." << endl;
        }
    // Event 2: boom in attendance
    } else if(event == 2) {
        cout << "Random Event:" << endl
             << "There has been a boom in attendance!" << endl;
        for (int i = 0; i < numTigers; i++) {
            // Reseed rand
            srand(time(0));
            bonus = rand() % 251 + 250;
            tigers[i].setPayoff(tigers[i].getPayoff() + bonus);
        }
    // Event 3: a baby is born
    } else if (event == 3) {
        cout << "Random Event:" << endl
             << "New baby/babies!" << endl;
        flag = false;
        // Reseed rand
        srand(time(0));
        subRand = rand() % 4 + 1;
        // If 1
        if (subRand == 1) {
            // Create baby tiger
            flag = createBabyTiger();
            if (flag) {
                cout << "You have a new baby tiger." << endl;
                Tiger tiger(0);
                createTiger(tiger, true);
            }
            // If there are no adult tigers
            if (!flag) {
                // Create penguin
                flag = createBabyPenguin();
                if (flag) {
                    cout << "You have 5 new baby penguins." << endl;
                    for (int i = 0; i < 5; i++) {
                        Penguin penguin(0);
                        createPenguin(penguin, true);
                    }
                }
            }
            // If there are no adult tigers/penguins
            if (!flag) {
                // Create turtle
                flag = createBabyTurtle();
                if (flag) {
                    cout << "You have 10 new baby turtles." << endl;
                    for (int i = 0; i < 10; i++) {
                        Turtle turtle(0);
                        createTurtle(turtle, true);
                    }
                }
            }
            // If there are no adult tigers/penguins/turtles
            if (!flag) {
                // Create gorilla
                flag = createBabyGorilla();
                if (flag) {
                    cout << "You have 2 new baby gorillas." << endl;
                    for (int i = 0; i < 2; i++) {
                        Gorilla gorilla(0);
                        createGorilla(gorilla, true);
                    }
                }
            }
        // If 2
        } else if (subRand == 2) {
            // Create baby penguin
            flag = createBabyPenguin();
            if (flag) {
                cout << "You have 5 new baby penguins." << endl;
                for (int i = 0; i < 5; i++) {
                    Penguin penguin(0);
                    createPenguin(penguin, true);
                }
            }
            // If there are no adult penguins
            if (!flag) {
                // Create baby turtle
                flag = createBabyTurtle();
                if (flag) {
                    cout << "You have 10 new baby turtles." << endl;
                    for (int i = 0; i < 10; i++) {
                        Turtle turtle(0);
                        createTurtle(turtle, true);
                    }
                }
            }
            // If there are no adult penguins/turtles
            if (!flag) {
                // Create gorilla
                flag = createBabyGorilla();
                if (flag) {
                    cout << "You have 2 new baby gorillas." << endl;
                    for (int i = 0; i < 2; i++) {
                        Gorilla gorilla(0);
                        createGorilla(gorilla, true);
                    }
                }
            }
            // If there are no adult penguins/turtles/gorillas
            if (!flag) {
                // Create baby tiger
                flag = createBabyTiger();
                if (flag) {
                    cout << "You have a new baby tiger." << endl;
                    Tiger tiger(0);
                    createTiger(tiger, true);
                }
            }
        // If 3
        } else if (subRand == 3) {
            // Create baby turtle
            flag = createBabyTurtle();
            if (flag) {
                cout << "You have 10 new baby turtles." << endl;
                for (int i = 0; i < 10; i++) {
                    Turtle turtle(0);
                    createTurtle(turtle, true);
                }
            }
            // If there are no adult turtles
            if (!flag) {
                // Create gorilla
                flag = createBabyGorilla();
                if (flag) {
                    cout << "You have 2 new baby gorillas." << endl;
                    for (int i = 0; i < 2; i++) {
                        Gorilla gorilla(0);
                        createGorilla(gorilla, true);
                    }
                }
            }
            // If there are no adult turtles/gorillas
            if (!flag) {
                // Create baby tiger
                flag = createBabyTiger();
                if (flag) {
                    cout << "You have a new baby tiger." << endl;
                    Tiger tiger(0);
                    createTiger(tiger, true);
                }
            }
            // If there are no adult turtles/gorillas/tigers
            if (!flag) {
                // Create baby penguin
                flag = createBabyPenguin();
                if (flag) {
                    cout << "You have 5 new baby penguins." << endl;
                    for (int i = 0; i < 5; i++) {
                        Penguin penguin(0);
                        createPenguin(penguin, true);
                    }
                }
            }
        // If 4
        } else if (subRand == 4) {
            // Create gorilla
            flag = createBabyGorilla();
            if (flag) {
                cout << "You have 2 new baby gorillas." << endl;
                for (int i = 0; i < 2; i++) {
                    Gorilla gorilla(0);
                    createGorilla(gorilla, true);
                }
            }
            // If there are no adult gorillas
            if (!flag) {
                // Create baby tiger
                flag = createBabyTiger();
                if (flag) {
                    cout << "You have a new baby tiger." << endl;
                    Tiger tiger(0);
                    createTiger(tiger, true);
                }
            }
            // If there are no adult gorillas/tigers
            if (!flag) {
                // Create baby penguin
                flag = createBabyPenguin();
                if (flag) {
                    cout << "You have 5 new baby penguins." << endl;
                    for (int i = 0; i < 5; i++) {
                        Penguin penguin(0);
                        createPenguin(penguin, true);
                    }
                }
            }
            // If there are no adult gorillas/tigers/penguins
            if (!flag) {
                // Create baby turtle
                flag = createBabyTurtle();
                if (flag) {
                    cout << "You have 10 new baby turtles." << endl;
                    for (int i = 0; i < 10; i++) {
                        Turtle turtle(0);
                        createTurtle(turtle, true);
                    }
                }
            }
        }
        // If there are not adults to create babies
        if (!flag) {
            cout << "No babies can be added at the moment." << endl;
        }
    // If 4
    } else if (event == 4) {
        // Nothing special. Ask user if they would like to buy animal
        cout << "Random Event:" << endl
             << "Nothing special happened." << endl;
    }
}

/****************************************************************
** Description: This method calculates the profit for each day
 * and resets the tigers payoff back to default.
****************************************************************/
void Zoo::calcProfit() {
    // Reset daily profit to 0
    profit = 0.0;
    // Calculate profit from tigers
    for (int i = 0; i < numTigers; i++) {
        profit = profit + tigers[i].getPayoff();
    }
    // Calculate profit from penguins
    for (int i = 0; i < numPenguins; i++) {
        profit = profit + penguins[i].getPayoff();
    }
    // Calculate profit from turtles
    for (int i = 0; i < numTurtles; i++) {
        profit = profit + turtles[i].getPayoff();
    }
    // Calculate profit from gorillas
    for (int i = 0; i < numGorillas; i++) {
        profit = profit + gorillas[i].getPayoff();
    }
    bank += profit;
    // Set tiger payoff back to default
    for (int i = 0; i < numTigers; i++) {
        tigers[i].setPayoff(2000.0);
    }
}

/****************************************************************
** Description: This method increments the age of each animal
 * each day, and deducts the good cost for all the animals.
****************************************************************/
void Zoo::incrementAge() {
    // Increment age for tigers & subtract food cost
    for (int i = 0; i < numTigers; i++) {
        tigers[i].setAge(tigers[i].getAge() + 1);
        bank = bank - tigers[i].getBaseFoodCost();
    }
    // Increment age for penguins & subtract food cost
    for (int i = 0; i < numPenguins; i++) {
        penguins[i].setAge(penguins[i].getAge() + 1);
        bank = bank - penguins[i].getBaseFoodCost();
    }
    // Increment age for turtles & subtract food cost
    for (int i = 0; i < numTurtles; i++) {
        turtles[i].setAge(turtles[i].getAge() + 1);
        bank = bank - turtles[i].getBaseFoodCost();
    }
    // Increment age for gorillas & subtract food cost
    for (int i = 0; i < numGorillas; i++) {
        gorillas[i].setAge(gorillas[i].getAge() + 1);
        bank = bank - gorillas[i].getBaseFoodCost();
    }
}

/****************************************************************
** Description: This method returns the money in the bank.
****************************************************************/
double Zoo::getBank() {
    return bank;
}

/****************************************************************
** Description: This method returns the profit.
****************************************************************/
double Zoo::getProfit() {
    return profit;
}