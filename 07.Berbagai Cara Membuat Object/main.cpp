#include <iostream>
#include <string>
using namespace std;

class DenganConstruct{
    public :
        string data;

        DenganConstruct(const char* data){
            DenganConstruct::data = data;
        }

        void show(){
            cout << "ini " << DenganConstruct::data << endl;
        }
};

class TanpaConstruct{
    public:
        string data;

        void show(){
            cout << "ini " <<  TanpaConstruct::data << endl;
        }
};


int main(){

    // 1.Cara membuat objek tanpa construct
    TanpaConstruct obj1;
    obj1.data = "objek 1 tanpa constructor";
    obj1.show();

    // 2.Cara membuat objek dengan constructor
    DenganConstruct obj2 = DenganConstruct("objek 2 dengan constructor");
    obj2.show();

    // 3.Cara lain membuat objek dengan constructor
    DenganConstruct obj3("objek 3 cara lain dengan constructor");
    obj3.show();

    // 4.Cara membuat objek pada heap memory
    DenganConstruct* obj4 = new DenganConstruct("obj 4 Cara membuat objek pada heap memory");
    (*obj4).show(); // dengan cara derefence 
    obj4->show(); // atau dengan arrow pointer, mapping func dan attribute 
    string data = obj4->data;
    cout << data << endl;

    // kenapa?
    /* DenganConstruct obj5;
     * obj5 = DenganConstruct("objek 5 ");
     */

    DenganConstruct* obj5;
    obj5 = new DenganConstruct("Objek 5 ");
    (*obj5).show();

    cin.get();
    return 0;
}
