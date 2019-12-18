/****************************************************************
** Program name: OSU Information System
** Author: Milad Mikeal
** Date: 10/15/18
** Description: Student class header file.
****************************************************************/
#ifndef LAB4_STUDENT_HPP
#define LAB4_STUDENT_HPP


#include "Person.hpp"

class Student : public Person {
private:
    float GPA;
public:
    Student();
    Student(std::string, int, float);
    void do_work();
    void printInfo();
};


#endif //LAB4_STUDENT_HPP
