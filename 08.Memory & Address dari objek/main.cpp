#include <iostream>
#include <string>
#include <chrono>

using namespace std;
using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

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

    // Seberapa cepat kita membuat object di masing-masing memory

    TimePoint *tStackStart = new TimePoint();
    TimePoint *tStackEnd = new TimePoint();
    TimePoint *tHeapStart = new TimePoint();
    TimePoint *tHeapEnd = new TimePoint();

    cin.get();
    *tStackStart = Clock::now();
    Mahasiswa object3 = Mahasiswa("ucup");
    *tStackEnd = Clock::now();
    
    cin.get();
    *tHeapStart = Clock::now();
    Mahasiswa* object4 = new Mahasiswa("otong");
    *tHeapEnd = Clock::now();

    chrono::duration<double> durasi = *tStackEnd - *tStackStart;
    cout << "Waktu pembuatan object di stack adalah : " << durasi.count() << endl;
    durasi = *tHeapEnd - *tHeapStart;
    cout << "Waktu pembuatan object di heap adalah : " << durasi.count() << endl;

    cin.get();
    return 0;
}
