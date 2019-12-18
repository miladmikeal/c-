/****************************************************************
** Program name: Stack and Queue STL Containers
** Author: Milad Mikeal
** Date: 11/20/18
** Description: This function uses STL container "queue" to
 * create a buffer. The user is prompted to enter the number of
 * rounds, percentage to put a randomly generated number between
 * 1-1000, and percentage to take a number from the bugger. The
 * buffer values and average length of the buffer is displayed
 * after each round.
****************************************************************/
#include <iostream>
#include "buffer.hpp"
#include "getInt.hpp"
using std::cout;
using std::endl;
using std::queue;

void buffer() {
    // Declare variables
    queue <int> buffer;
    int N, rounds, percentPut, percentTake, chance;
    double avgRound = 0;
    double avgPrev = 0;
    // Prompt user for rounds
    cout << "\nHow many rounds would you like to have simulated?" << endl;
    getInt(&rounds, 1, 50);
    // Prompt user for percentage chance tp put num in back
    cout << "\nWhat percentage chance is there to put randomly generated "
         << "number at the end of the buffer?" << endl;
    getInt(&percentPut, 1, 100);
    // Prompt user for percentage chance tp put num in back
    cout << "\nWhat percentage chance is there to take randomly generated "
         << "number from the front of the buffer?" << endl;
    getInt(&percentTake, 1, 100);
    // For number of rounds
    for (int i = 1; i <= rounds; i++) {
        // Calculate chance
        chance = rand() % 100 + 1;
        // If chance is less than / equal to percentPut
        if (chance <= percentPut) {
            // Calculate N
            N = rand() % 1000 + 1;
            // Add N to buffer
            buffer.push(N);
        }
        // If buffer is not empty
        if (!buffer.empty()) {
            // Calculate chance
            chance = rand() % 100 + 1;
            // If chance is less than / equal to percentTake
            if (chance <= percentTake) {
                // Remove front item
                buffer.pop();
            }
        }
        // Call showQueue function
        cout << "\nBuffer: ";
        showQueue(buffer);
        // Calculate avgRound
        avgRound = (avgPrev * (i - 1) + buffer.size()) / i;
        // Display Average Length in round
        cout << "Average Length in Round " << i << " is " << avgRound << endl;
        // Set avgPrev to avgRound
        avgPrev = avgRound;
    }

}

/****************************************************************
** Description: This function prints each value in the queue.
****************************************************************/
void showQueue(queue <int> input) {
    queue <int> q = input;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}