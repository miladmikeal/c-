/****************************************************************
** Program name: Fantasy Combat Tournament
** Author: Milad Mikeal
** Date: 11/7/18
** Description: Character class header file.
****************************************************************/
#ifndef PROJECT4_CHARACTER_HPP
#define PROJECT4_CHARACTER_HPP


#include <string>

class Character {
protected:
    std::string name, type, att, def;
    int armor, strength;
    Character *next, *prev;
    int typeNum;
    bool dead;
public:
    Character();
    void setName(std::string);
    std::string getName();
    std::string getType();
    int getArmor();
    void setStrength(int);
    int getStrength();
    void setNext(Character *);
    Character* getNext();
    void setPrev(Character *);
    Character* getPrev();
    void setTypeNum(int);
    int getTypeNum();
    void setDead(bool);
    bool isDead();
    virtual void setValues() =0;
    virtual int attack() =0;
    virtual void defense(int) =0;
    virtual ~Character() = default;
};


#endif //PROJECT4_CHARACTER_HPP