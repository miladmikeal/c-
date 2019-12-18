/****************************************************************
** Program name: Stack and Queue STL Containers
** Author: Milad Mikeal
** Date: 11/20/18
** Description: Menu class header file.
****************************************************************/
#ifndef LAB9_MENU_HPP
#define LAB9_MENU_HPP


#include <vector>
#include <string>
#include <iostream>
#include <math.h>

class Menu {
private:
    std::string heading;
    int numOptions;
    std::vector<std::string> options;
    int input();
public:
    Menu();
    Menu(std::string);
    void display();
    void add(std::string);
    void edit(int, std::string);
    void del(int);
    int prompt();
    int getNum();
    std::string getOption(int);
};


#endif //LAB9_MENU_HPP
