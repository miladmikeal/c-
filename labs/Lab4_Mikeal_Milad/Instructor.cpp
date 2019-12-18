/****************************************************************
** Program name: OSU Information System
** Author: Milad Mikeal
** Date: 10/15/18
** Description: This class is inherited from Person. It adds its
 * own member variable (rating), implements the virtual do_work
 * method, and implements the virtual printInfo method.
****************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include "Instructor.hpp"
using std::cout;
using std::endl;

/****************************************************************
** Description: Default constructor. Inherits from Person.
****************************************************************/
Instructor::Instructor() : Person() {
    rating = 0.0;
}

/****************************************************************
** Description: Overloading constructor. Sets member variables
 * to input values. Inherits from person.
****************************************************************/
Instructor::Instructor(std::string n, int a, float r)
    : Person(n, a) {
    name = n;
    age = a;
    rating = r;
}

/****************************************************************
** Description: Virtual method. Displays the number of hours
 * instructor has been grading papers. Uses rand to determine
 * hours.
****************************************************************/
void Instructor::do_work() {
    int grading;
    srand(time(0));
    grading = (rand() % (40 - 20 + 1)) + 20;
    cout << '\n';
    cout << name << " graded papers for " << grading << " hours." << endl;
    cout << '\n';
}

/****************************************************************
** Description: Virtual method. Prints information inherited
 * from Person + rating.
****************************************************************/
void Instructor::printInfo() {
    cout << "Name: " << name << endl
         << "Age: " << age << endl
         << "Rating: " << rating << endl;
}