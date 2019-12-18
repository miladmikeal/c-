/****************************************************************
** Program name: OSU Information System
** Author: Milad Mikeal
** Date: 10/15/18
** Description: This class is inherited from Person. It
 * adds its own member variable (GPA), implements a virtual
 * do_work method, and implements a virtual printInfo method.
****************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include "Student.hpp"
using std::cout;
using std::endl;

/****************************************************************
** Description: Default constructor. Inherits from Person.
****************************************************************/
Student::Student() : Person() {
    GPA = 0.0;
}

/****************************************************************
** Description: Overloading constructor. Sets member variables
 * to input values. Inherits from Person.
****************************************************************/
Student::Student(std::string n, int a, float g)
    : Person(n, a) {
    name = n;
    age = a;
    GPA = g;
}

/****************************************************************
** Description: Virtual method. Displays the hours of homework
 * the student has done. Uses rand to determine hours.
****************************************************************/
void Student::do_work() {
    int homework;
    srand(time(0));
    homework = (rand() % (40 - 20 + 1)) + 20;
    cout << '\n';
    cout << name << " did " << homework << " hours of homework." << endl;
    cout << '\n';
}

/****************************************************************
** Description: Virtual method. Displays inherited information
 * from Person + GPA.
****************************************************************/
void Student::printInfo() {
    cout << "Name: " << name << endl
         << "Age: " << age << endl
         << "GPA: " << GPA << endl;
    cout << '\n';
}