#include <iostream>
include "player.h"
// fungsi dibuat
Player::Player(const char* name){
    this->name = name;
}

void Player::display(){
    std::cout << "Nama : " << this->name << std::endl;
}

std::string Player::getName(){
    return this->name;
}

void Player::setName(const char* name){
    this->name = name;
}
