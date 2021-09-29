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
};

class DBase {
    public:
    ifstream in;
    ofstream out;
    string fileName;

    DBase(const char* fileName) {
        DBase::fileName = fileName;
    }
};

int main() {
    Mahasiswa mahasiswa1 = Mahasiswa("Yusril", "185512", "TKJ");
    DBase database = DBase("data.txt");
    
    
    cin.get();
    return 0;
}