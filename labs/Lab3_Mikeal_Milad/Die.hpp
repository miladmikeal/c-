/****************************************************************
** Program name: War Game with Dice Design
** Author: Milad Mikeal
** Date: 10/7/18
** Description: Die class header implementation file.
****************************************************************/
#ifndef LAB3_DIE_HPP
#define LAB3_DIE_HPP


class Die {
private:
    int N = 6;
public:
    Die();
    Die(int);
    void setN(int);
    int getN();
    int roll();
};


#endif //LAB3_DIE_HPP
