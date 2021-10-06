#include <iostream>
#include <string>

using namespace std;

class HeroMage;

class HeroFighter{
    private:
        string name;
        double attackPower;
    public:
        HeroFighter(const char* name, double attackPower){
            this->name = name;
            this->attackPower = attackPower;
        }

    friend bool compare(const HeroFighter& player1, const HeroMage& player2);
    friend bool compare(const HeroMage& player2, const HeroFighter& player1);
};

class HeroMage{
    private:
        string name;
        double attackPower;
    public:
        HeroMage(const char* name, double attackPower){
            this->name = name;
            this->attackPower = attackPower;
        }

    friend bool compare(const HeroFighter& player1, const HeroMage& player2);
    friend bool compare(const HeroMage& player2, const HeroFighter& player1){
        cout << player1.attackPower << endl;
        cout << player2.attackPower << endl;

        return player1.attackPower > player2.attackPower;
    }
};

bool compare(const HeroFighter& player1, const HeroMage& player2){
    cout << player1.attackPower << endl;
    cout << player2.attackPower << endl;

    return player1.attackPower > player2.attackPower;
}


int main(){
    
    HeroFighter player1 = HeroFighter("Shen", 203);
    HeroMage player2 =  HeroMage("Veigar", 101);


    compare(player1, player2);
    compare(player2, player1);

    cin.get();
    return 0;
}
