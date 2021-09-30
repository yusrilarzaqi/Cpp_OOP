#include <iostream>
#include <string>

using namespace std;

class kosong{public:int data(){return 1;}};

class isi{
    public:
        // memory objek akan relatif dengan classnya
        int data_int; // 4 byte
        double data_double; // 8 byte

};

class Mahasiswa{
    public:
        string data;

        Mahasiswa(const char* data){
            Mahasiswa::data = data;
        }
};

int main(){
    // kosong objek1;
    cout << "memory class kosong : " << sizeof(kosong) << " byte" << endl;
    // isi objek2;
    cout << "memory class isi : " << sizeof(isi) << " byte" << endl;

    cout << "\nAddress stack" << endl;
    string a;
    string b;
    Mahasiswa objek1 = Mahasiswa("objek 1");
    Mahasiswa* objek2 = new Mahasiswa("objek 2");
    string c;
    string d;


    cout << "a      : " << &a << endl;
    cout << "b      : " << &b << endl;
    cout << "objek1 : " << &objek1 << endl;
    cout << "objek2 : " << &objek2 << endl;
    cout << "objek2  heap : " << objek2 << endl;
    cout << "c      : " << &c << endl;
    cout << "d      : " << &d << endl;

    cin.get();
    return 0;
}
