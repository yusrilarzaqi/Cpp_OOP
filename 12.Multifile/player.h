#ifndef _PLAYER
#define _PLAYER

class Player{
    public :
        std::string name;

        Player(const char*);
        void display();
        std::string getName();
        void setName(const char*);
};

#endif
