/****************************************************************
** Program name: OSU Information System
** Author: Milad Mikeal
** Date: 10/15/18
** Description: Instructor class header file.
****************************************************************/
#ifndef LAB4_INSTRUCTOR_HPP
#define LAB4_INSTRUCTOR_HPP


#include "Person.hpp"

class Instructor : public Person {
private:
    float rating;
public:
    Instructor();
    Instructor(std::string, int, float);
    void do_work();
    void printInfo();
};


#endif //LAB4_INSTRUCTOR_HPP
