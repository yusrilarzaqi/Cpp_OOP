#ifndef __WEAPON
#define __WEAPON

#include <string>

class Weapon{
    private:
        std::string name;
        double attack_Power;
        
    public:
        Weapon(const char*, double);
};

#endif