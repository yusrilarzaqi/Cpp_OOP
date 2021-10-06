#include <iostream>
#include <string>

using namespace std;

#include "Player.hpp"
#include "Weapon.hpp"

int main(){
    Player* shen = new Player("Shen", 143, 69, 1140);
    Weapon* pedang = new Weapon("Pedang");
    shen->equipWeapon(pedang);
    shen->display();


    Player* ashe= new Player("Ashe", 171, 53, 991);
    Weapon* bow = new Weapon("Bow");
    ashe->equipWeapon(bow);
    ashe->display();


    shen->serang(ashe);
    shen->serang(ashe);
    shen->serang(ashe);
    shen->serang(ashe);

   
    shen->display();
    ashe->display();

    return 0;
}
