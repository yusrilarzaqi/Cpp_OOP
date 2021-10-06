#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;
        double health;
        double attackPower;

    public:
        Hero(const char* name = "player", double health= 178, double attackPower = 99){
            this->name = name;
            this->health = health;
            this->attackPower = attackPower;
        }

        void display(){
            cout << "\nNama = " << this->name << endl;
            cout << "Health = " << this->health << endl;
            cout << "Attack Damage = " << this->attackPower << endl;
        }
};



int main(){

    Hero player2 = Hero();
    player2.display();

    Hero* player1 = new Hero("shen", 292);
    player1->display();

    Hero* player3 = new Hero("Garen", 622, 102);   
    player3->display();


    cin.get();
    return 0;
}
