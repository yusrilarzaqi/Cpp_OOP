#include "mahasiswa.hpp"
#include <iostream>

Mahasiswa::Mahasiswa(const char* nama){
    this->namaPublic = nama;
    this->namaPrivate = nama;
}

// dapat diakses karena methodnya public 
// attribute private dapat diakses karena masih didalam classnya
void Mahasiswa::showDisplay(){
    std::cout << "nama Private : " <<  this->namaPrivate << std::endl;
}



void Mahasiswa::showDisplayPrivate(){
    std::cout << "nama Private : " <<  this->namaPrivate << std::endl;
}
