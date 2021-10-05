#ifndef __Player
#define __Player

#include <iostream>
#include <string>
#include "Weapon.hpp"

class Player{
    private:
        std::string name;
        Weapon* weapon;
        int exp;
        int level;
        double arrmor, arrmor_base;
        double attackPower, attackPower_base;
        double health, health_base, health_max;
        int jumlah;
    
    public:
        Player(const char*, double, double, double);
        void display();
        void equipWeapon(Weapon*);
        int getJumlah();
        void gainExp(int up);
};



#endif
