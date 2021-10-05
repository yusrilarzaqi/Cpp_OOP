#ifndef __MAHASISWA
#define __MAHASISWA

#include <string>
#include <iostream>

class Mahasiswa{
    /* yang bisa diakses oleh siapapun / pada fungsi main  
     * untuk attribute */ 
    public:
        std::string namaPublic;

    private:
        std::string namaPrivate;

    public:
        Mahasiswa(const char* nama);

        // dapat diakses karena methodnya public 
        // attribute private dapat diakses karena masih didalam classnya
        void showDisplay();

    private:
        void showDisplayPrivate();

};




#endif
