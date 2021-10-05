#include <iostream>
#include <string>
#include "player.h"


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

