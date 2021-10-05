#ifndef __PLAYER
#define __PLAYER

#include <iostream>
#include <string>

class Player{
    private:
        std::string name;
        double attackPower;
        int level;
        int exp;

    public:
        Player(const char* , double );
        // getter 
        std::string getName();
        // setter 
        void addExp(int expValue);
        void showDisplay();
};

#endif
