/****************************************************************
** Program name: OSU Information System
** Author: Milad Mikeal
** Date: 10/15/18
** Description: Menu class header file.
****************************************************************/
#ifndef LAB4_MENU_HPP
#define LAB4_MENU_HPP


#include <vector>
#include <string>
#include <iostream>
#include <math.h>

class Menu {
private:
    int numOptions;
    std::vector<std::string> options;
    int input();
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


#endif //LAB4_MENU_HPP
