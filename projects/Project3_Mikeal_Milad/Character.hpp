/****************************************************************
** Program name: Fantasy Combat Game
** Author: Milad Mikeal
** Date: 10/20/18
** Description: Character class header file.
****************************************************************/
#ifndef PROJECT3_CHARACTER_HPP
#define PROJECT3_CHARACTER_HPP

#include <string>

class Character {
protected:
    std::string name, att, def;
    int armor, strength;
    bool dead;
public:
    Character();
    std::string getName();
    int getArmor();
    void setStrength(int);
    int getStrength();
    void setDead(bool);
    bool isDead();
    virtual void setValues() =0;
    virtual int attack() =0;
    virtual void defense(int) =0;
    virtual ~Character() = default;
};


#endif //PROJECT3_CHARACTER_HPP
