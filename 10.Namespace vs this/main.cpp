#include <iostream>
#include <string>

using namespace std;

/* member variable */
class DataTypes{
    public:
        string dataStr;
        double dataDouble;
        double m_dataDouble;

        DataTypes(const char* dataStr, double dataDouble){
            /* dengan menggunakan namespace */
            DataTypes::dataStr = dataStr; 

            /* degan menggunakan this */
            this->dataDouble = dataDouble;

            /* atau dengan menggunakan konvensi penamaan*/
            m_dataDouble = dataDouble;
        }
};

/* member function */
class Player{
    public:
        string name;
        double attack_power;
        int health;

        Player(const char* name, double attack_power){
            Player::setName(name);
            this->setAttackPower(attack_power);
        }

        void setName(const char* name){
            this->name = name;
        }

        void setAttackPower(double attack_power){
            this->attack_power = attack_power;
        }

        // protorype
        void setHealth(int);
};

int main(){
    
    DataTypes *object1 = new DataTypes("object1", 0.05);
    cout << object1->dataStr << endl;
    cout << object1->dataDouble << endl;
    cout << object1->m_dataDouble << endl;


    Player *player1 = new Player("shen", 192);
    cout << "Name : " << player1->name << endl;
    cout << "Attack Power : " << player1->attack_power << endl;
    player1->setHealth(1002);
    cout << "Health : " << player1->health << endl;
    
    cin.get();
    return 0;
}


// fungsi dibuat
void Player::setHealth(int health){
    this->health = health;
}

