#include <iostream>

using namespace std;

int main() {
  double a, b;
  char ulang;

  cout << "anda ingin menghitung ? [Y/N]"; cin >> ulang;
  while(ulang == 'Y' || ulang =='y'){
    cout << "angka 1 : "; cin >> a;
    cout << "angka 2 : "; cin >> b;

    cout << endl << "Hasilnya adalah a*b : " << a*b << endl;
    cout << "Hasilnya adalah a/b : " << a/b << endl;

    cout << "anda ingin menghitung lagi ?[Y/N]"; cin >> ulang;
  }

  return 0;
}