#ifndef __WEAPON
#define __WEAPON

#include <string>

class Weapon{
    private:
        std::string name;

    public:
        Weapon(const char*);
        void display();
        std::string getName();
};

#endif
