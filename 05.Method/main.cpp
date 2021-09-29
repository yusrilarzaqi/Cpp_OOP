#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public :
        string name;
        double IPK;

        Mahasiswa(string name, double IPK){
            Mahasiswa::name = name;
            Mahasiswa::IPK= IPK;
        }

        // Method tanpa argumen tanpa return
        void tampilkan(){
            cout << "Nama : " << name
                 << "\nIPK : "  << IPK << endl;
        }

        // Method dengan argumen tanpa return
        void ubahNama(const char* name){
            Mahasiswa::name = name;
        }

        // Merhod tanpa argumen dengan return
        string getNama(){
            return name;
        }

        double getIPK(){return Mahasiswa::IPK;}

        // Method dengan parameter dan return 
        double katrol(const double &input){
            return Mahasiswa::IPK + input;
        }
};


int main(){
    Mahasiswa yusril = Mahasiswa("Yusril Arzaqi", 4.0);
    yusril.tampilkan();
    yusril.ubahNama("Adam");
    yusril.tampilkan();
    string dataNama = yusril.getNama();
    cout << dataNama << endl;
    cout << "katrol : " << yusril.katrol(2.0) << endl;

    yusril.print_info();
    return 0;
}
