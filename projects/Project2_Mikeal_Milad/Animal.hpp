/****************************************************************
** Program name: Zoo Tycoon Game
** Author: Milad Mikeal
** Date: 10/10/18
** Description: Animal class header file.
****************************************************************/
#ifndef PROJECT2_ANIMAL_HPP
#define PROJECT2_ANIMAL_HPP


class Animal {
protected:
    int age, numBabies;
    double cost, baseFoodCost, payoff;
public:
    Animal();
    Animal(int);
    Animal(int, double);
    Animal(int, double, int, double, double);
    void setAge(int);
    int getAge();
    double getCost();
    double getBaseFoodCost();
    void setPayoff(double);
    double getPayoff();
};


#endif //PROJECT2_ANIMAL_HPP