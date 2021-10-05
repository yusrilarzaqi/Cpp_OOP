#include "Weapon.hpp"
#include <iostream>
#include <string>
Weapon::Weapon(const char* name){
    this->name = name;
}

void Weapon::display(){
    std::cout << "Nama Weapon: " << this->name << std::endl;
}    

std::string Weapon::getName(){
    return this->name;
}


