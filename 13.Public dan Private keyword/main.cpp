#include <iostream>
#include <string>

#include "mahasiswa.hpp"

using namespace std;

int main(){
    Mahasiswa* mahasiswa1 = new Mahasiswa("Yusril");
    // mencoba mengakses attribute public dan private
    cout << mahasiswa1->namaPublic << endl; // bisa diakses karena public 
    // cout << mahasiswa1->namaPrivate << endl; tidak bisa diakses
    
    Mahasiswa* mahasiswa2 = new Mahasiswa("Arzaqi");
    mahasiswa2->showDisplay();
    // mahasiswa2->showDisplayPrivate();

    cin.get();
    return 0;
}
