#include "Player.hpp"
#include <iostream>


Player::Player(const char* name, double attackPower){
    this->name = name;
    this->attackPower = attackPower;
    this->level = 1;
    this->exp = 0;
}

// getter 
std::string Player::getName(){
    return this->name;
}

// setter 
void Player::addExp(int expValue){
    int maxExp;
    this->exp += expValue;
    if(this->exp >= 100){
        std::cout << "level up" << std::endl;
        this->level++;
        this->exp -= 100;
        this->attackPower += this->attackPower * (0.25);
        std::cout << this->exp << std::endl;
    }
}

void Player::showDisplay(){
    std::cout << "Name\t : " << this->name << std::endl;
    std::cout << "Level\t: " << this->level << "\nExp\t  : " << this->exp << std::endl;
    std::cout << "Attack Power : " << this->attackPower << std::endl;
}
