#include <iostream>
#include <string>
using namespace std;

class Hero{
    public:
        static int jumlah;
        string name;
    
        Hero(string input_name){
            Hero::name = input_name;
            Hero::jumlah++;
        }
};

int main(){
    Hero shen = Hero("Shen");
    cout << Hero::jumlah << endl;
    


    return 0;
}
