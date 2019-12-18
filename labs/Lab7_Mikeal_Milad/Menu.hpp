/****************************************************************
** Program name: Circular Linked List
** Author: Milad Mikeal
** Date: 11/3/18
** Description: Menu class header file.
****************************************************************/
#ifndef LAB7_MENU_HPP
#define LAB7_MENU_HPP

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


#endif //LAB7_MENU_HPP
