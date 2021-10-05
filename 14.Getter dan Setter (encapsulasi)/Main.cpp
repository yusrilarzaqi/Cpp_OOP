#include <iostream>
#include <string>
#include "Player.hpp"

using namespace std;

int main(){
    Player* shen = new Player("Shen", 190);
    shen->showDisplay();
    cout << shen->getName() << endl;

    shen->addExp(40);
    shen->addExp(60);
    shen->addExp(40);
    shen->addExp(60);
    shen->addExp(40);
    shen->addExp(60);



    shen->showDisplay();


    cin.get();
    return 0;
}
