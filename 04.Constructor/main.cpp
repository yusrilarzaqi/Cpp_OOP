#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;

        Mahasiswa(string nama, string NIM, string jurusan){
            Mahasiswa::nama = nama;
            Mahasiswa::NIM= NIM;
            Mahasiswa::jurusan = jurusan;
        }
        void tampil(){
            cout << "nama : " << Mahasiswa::nama << endl;
            cout << "NIM: " << Mahasiswa::NIM<< endl;
            cout << "Jurusan : " << Mahasiswa::jurusan << endl;

        }
};


int main(){
    Mahasiswa data1= Mahasiswa("Yusril Arzaqi", "185512", "tehnik komputer");
    data1.tampil();
    Mahasiswa data2 = Mahasiswa("Bimo Alamsyah", "19829", "rekayasa perangkat lunak");
    data2.tampil();
     
    return 0;
}
