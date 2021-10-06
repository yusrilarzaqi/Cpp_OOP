#include <iostream>
#include <string>

using namespace std;

class Hero{
    public:
        string name;

        Hero(const char* name){
            this->name = name;
        }void display() const{
            cout <<"Nama = " << this->name << endl;
        }void setName(const char* name){
            this->name = name;
        }string getName() const{
            return this->name;
        }

        
        /* tidak bisa filakukan karena const tidak bisa dirubah
         *  void setName(const char* name) const {
         *  this->name = name;
         * }
         */

};


int main(){

    Hero hero1 = Hero("Shen");
    const Hero hero2 = Hero("Garen");

    hero1.display();
    hero1.name = "Ashe";
    hero1.display();
    hero1.setName("Maokai");
    hero1.display();
    cout << "Nama = " << hero1.getName() << endl;

    cout << "Hero 2 " << endl;
    hero2.display();
    // hero2.setName("bambank"); tidak bisa dilakukan
    cout << "Nama = " << hero2.getName() << endl;





    cin.get();
    return 0;
}
