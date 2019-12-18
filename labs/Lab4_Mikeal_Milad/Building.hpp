/****************************************************************
** Program name: OSU Information System
** Author: Milad Mikeal
** Date: 10/15/18
** Description: Building class header file.
****************************************************************/
#ifndef LAB4_BUILDING_HPP
#define LAB4_BUILDING_HPP

#include <string>

class Building {
private:
    std::string name;
    int size;
    std::string address;
public:
    Building();
    Building(std::string, int, std::string);
    std::string getName();
    int getSize();
    std::string getAddress();
};


#endif //LAB4_BUILDING_HPP
