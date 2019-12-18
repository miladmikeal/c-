/****************************************************************
** Program name: War Game with Dice Design
** Author: Milad Mikeal
** Date: 10/7/18
** Description: Menu class header file.
****************************************************************/
#ifndef LAB3_MENU_HPP
#define LAB3_MENU_HPP

#include <vector>
#include <string>
#include <iostream>
#include <math.h>

class Menu {
private:
    int numOptions;
    std::vector<std::string> options;
    int input();
    bool hasDecimal(float);
public:
    Menu();
    void display();
    void add(std::string);
    void edit(int, std::string);
    void del(int);
    int prompt();
    int getNum();
    std::string getOption(int);
};

#endif //LAB3_MENU_HPP
