/****************************************************************
** Program name: OSU Information System
** Author: Milad Mikeal
** Date: 10/15/18
** Description: University class header file.
****************************************************************/
#ifndef LAB4_UNIVERSITY_HPP
#define LAB4_UNIVERSITY_HPP

#include <string>
#include <vector>
#include "Building.hpp"
#include "Person.hpp"
#include "Student.hpp"
#include "Instructor.hpp"

class University {
protected:
    std::string name;
    std::vector<Building> buildings;
    std::vector<Person*> people;
public:
    University();
    void addBuilding(Building);
    void addPerson(Person *);
    void printBuidlings();
    void printPeople();
};


#endif //LAB4_UNIVERSITY_HPP
