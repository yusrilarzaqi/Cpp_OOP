#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public :
        string nama;
        string NIM;
        string prodi;
        double IPK;
};


int main(){
    Mahasiswa data1;
    data1.nama = "Yusril";
    data1.NIM = "185512";
    data1.prodi = "tehnik komputer";

    cout << "nama : " << data1.nama << endl;
    cout << "NIM: " << data1.NIM<< endl;
    cout << "Prodi : " << data1.prodi<< endl;
   
    Mahasiswa data2;
    data1.nama = "Arzaqi";
    data1.NIM = "185513";
    data1.prodi = "tehnik komputer";


    cout << "\nnama : " << data1.nama << endl;
    cout << "NIM: " << data1.NIM<< endl;
    cout << "Prodi : " << data1.prodi<< endl;
    
    cin.get();
    return 0;
}
