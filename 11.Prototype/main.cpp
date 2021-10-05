#include <iostream>
#include <string>

class Player{
    public :
        std::string name;

        Player(const char*);
        void display();
        std::string getName();
        void setName(const char*);
};



int main(){

    Player* player1 = new Player("Shen");
    player1->display();
    std::string nama = player1->getName();
    std::cout << "nama dari getName : " <<  nama << std::endl;

    std::cout << "\nRename" << std::endl;
    player1->setName("Garen");
    player1->display();




    std::cin.get();
    return 0;
}





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
