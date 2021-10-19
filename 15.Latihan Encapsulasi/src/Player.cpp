#include "Player.hpp"
#include <iostream> 

Player::Player(const char* name, double attackPower_input, double arrmor_input, double health_input){
    this->name = name;
    this->attackPower_base = attackPower_input;
    this->health_base = health_input;
    this->arrmor_base = arrmor_input;
    this->level = 1;
    

    // max stat
    this->health_max = this->health_base * this->level;
    this->attackPower = this->attackPower_base * this->level;
    this->arrmor = this->arrmor_base * this->level;
    this->health = this->health_max;

    this->jumlah++;
    this->exp = 0;
}

void Player::display(){
    if(this->health >= 0){
        std::cout << "\nNama : " << this->name << std::endl;
        std::cout << "menggunakan weapon : " << this->weapon->getName() << std::endl;
        std::cout << "Attack Damage : " << this->attackPower << std::endl;
        std::cout << "Arrmor        : " << this->arrmor << std::endl;
        std::cout << "Health        : " << this->health << '/' << this->health_max << std::endl;
        std::cout << "Level         : " << this->level << std::endl;
    }else if(this->health <= 0){
        std::cout << this->name << " telah mati" << std::endl;
    }
}

void Player::equipWeapon(Weapon* weapon){
    this->weapon = weapon;
}

int Player::getJumlah(){
    return this->jumlah;
}

void Player::gainExp(int up){
    this->exp += up;
    if(this->exp >= 100){
        // std::cout << "level up" << std::endl;
        this->level++;
        this->exp -= 100;
        
        // set
        /* 
         * this->health_max = this->health_base * (this->level / 4);
         * this->attackPower = this->attackPower_base * (this->level / 4);
         * this->arrmor = this->arrmor_base * (this->level / 4); 
         */
        
        this->health_max = this->health_base * this->level ;
        this->attackPower = this->attackPower_base * this->level;
        this->arrmor = this->arrmor_base * this->level; 
        this->health += this->health_max / 4;

    }
}

void Player::serang(Player* enemy){
    this->gainExp(50);

    enemy->health -= this->attackPower - enemy->arrmor * 0.1;
    std::cout << this->name << " menyerang " << enemy->name << std::endl;
    if(enemy->health <= 0){
        this->is_dead(enemy);
        enemy->health = 0;
    }
}

void Player::is_dead(Player* enemy){
    std::cout << enemy->name << " telah mati" << std::endl;
}
