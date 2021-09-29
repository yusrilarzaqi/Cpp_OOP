#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa {
    public:
        string name;
        string NIM;
        string jurusan;

        Mahasiswa(string name, string NIM, string jurusan) {
            Mahasiswa::name = name;
            Mahasiswa::NIM = NIM;
            Mahasiswa::jurusan = jurusan;
        }

        string stringify(){
            return name + " " + NIM + " " + jurusan + "\n";
        }
};

class DBase {
    public:
        ifstream in;
        ofstream out;
        string fileName;

        DBase(const char* fileName) {
            DBase::fileName = fileName;
        }

        void save(Mahasiswa data){
            cout << data.name << endl;
            cout << data.NIM << endl;
            cout << data.jurusan << endl;

            DBase::out.open(DBase::fileName, ios::app);
            DBase::out << data.stringify();
            DBase::out.close();
        }

        void showAll(){
            DBase::in.open(DBase::fileName, ios::in);
            string name, NIM, jurusan;
            int index = 1;

            while(!DBase::in.eof()){
                DBase::in >> name;
                DBase::in >> NIM;
                DBase::in >> jurusan;

                cout << index++ << ".\t" 
                     << name << "\t"
                     << NIM << "\t"
                     << jurusan << endl;
            }

            DBase::in.close();
        }
};

int main() {
    DBase database = DBase("data.txt");
    database.showAll();
    string nama, jurusan, NIM;
    cout << "Nama : "; getline(cin, nama);
    cout << "NIM: "; cin >> NIM;
    cout << "Jurusan : ";cin >> jurusan;


    Mahasiswa mahasiswa1 = Mahasiswa(nama, NIM, jurusan);
    
    database.save(mahasiswa1);

    database.showAll();
    
    cin.get();
    return 0;
}
