/****************************************************************
** Program name: OSU Information System
** Author: Milad Mikeal
** Date: 10/15/18
** Description: Person class header file.
****************************************************************/
#ifndef LAB4_PERSON_HPP
#define LAB4_PERSON_HPP

#include <string>

class Person {
protected:
    std::string name;
    int age;
public:
    Person();
    Person(std::string, int);
    std::string getName();
    virtual void do_work() =0;
    virtual void printInfo() =0;
};


#endif //LAB4_PERSON_HPP
